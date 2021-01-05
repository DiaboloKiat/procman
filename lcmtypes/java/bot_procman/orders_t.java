/* LCM type definition class file
 * This file was automatically generated by lcm-gen
 * DO NOT MODIFY BY HAND!!!!
 */

package bot_procman;
 
import java.io.*;
import java.util.*;
import lcm.lcm.*;
 
public final class orders_t implements lcm.lcm.LCMEncodable
{
    public long utime;
    public String host;
    public String sheriff_name;
    public int ncmds;
    public bot_procman.sheriff_cmd_t cmds[];
    public int nvars;
    public String varnames[];
    public String varvals[];
 
    public orders_t()
    {
    }
 
    public static final long LCM_FINGERPRINT;
    public static final long LCM_FINGERPRINT_BASE = 0x88ae05f979d423b1L;
 
    static {
        LCM_FINGERPRINT = _hashRecursive(new ArrayList<Class<?>>());
    }
 
    public static long _hashRecursive(ArrayList<Class<?>> classes)
    {
        if (classes.contains(bot_procman.orders_t.class))
            return 0L;
 
        classes.add(bot_procman.orders_t.class);
        long hash = LCM_FINGERPRINT_BASE
             + bot_procman.sheriff_cmd_t._hashRecursive(classes)
            ;
        classes.remove(classes.size() - 1);
        return (hash<<1) + ((hash>>63)&1);
    }
 
    public void encode(DataOutput outs) throws IOException
    {
        outs.writeLong(LCM_FINGERPRINT);
        _encodeRecursive(outs);
    }
 
    public void _encodeRecursive(DataOutput outs) throws IOException
    {
        char[] __strbuf = null;
        outs.writeLong(this.utime); 
 
        __strbuf = new char[this.host.length()]; this.host.getChars(0, this.host.length(), __strbuf, 0); outs.writeInt(__strbuf.length+1); for (int _i = 0; _i < __strbuf.length; _i++) outs.write(__strbuf[_i]); outs.writeByte(0); 
 
        __strbuf = new char[this.sheriff_name.length()]; this.sheriff_name.getChars(0, this.sheriff_name.length(), __strbuf, 0); outs.writeInt(__strbuf.length+1); for (int _i = 0; _i < __strbuf.length; _i++) outs.write(__strbuf[_i]); outs.writeByte(0); 
 
        outs.writeInt(this.ncmds); 
 
        for (int a = 0; a < this.ncmds; a++) {
            this.cmds[a]._encodeRecursive(outs); 
        }
 
        outs.writeInt(this.nvars); 
 
        for (int a = 0; a < this.nvars; a++) {
            __strbuf = new char[this.varnames[a].length()]; this.varnames[a].getChars(0, this.varnames[a].length(), __strbuf, 0); outs.writeInt(__strbuf.length+1); for (int _i = 0; _i < __strbuf.length; _i++) outs.write(__strbuf[_i]); outs.writeByte(0); 
        }
 
        for (int a = 0; a < this.nvars; a++) {
            __strbuf = new char[this.varvals[a].length()]; this.varvals[a].getChars(0, this.varvals[a].length(), __strbuf, 0); outs.writeInt(__strbuf.length+1); for (int _i = 0; _i < __strbuf.length; _i++) outs.write(__strbuf[_i]); outs.writeByte(0); 
        }
 
    }
 
    public orders_t(byte[] data) throws IOException
    {
        this(new LCMDataInputStream(data));
    }
 
    public orders_t(DataInput ins) throws IOException
    {
        if (ins.readLong() != LCM_FINGERPRINT)
            throw new IOException("LCM Decode error: bad fingerprint");
 
        _decodeRecursive(ins);
    }
 
    public static bot_procman.orders_t _decodeRecursiveFactory(DataInput ins) throws IOException
    {
        bot_procman.orders_t o = new bot_procman.orders_t();
        o._decodeRecursive(ins);
        return o;
    }
 
    public void _decodeRecursive(DataInput ins) throws IOException
    {
        char[] __strbuf = null;
        this.utime = ins.readLong();
 
        __strbuf = new char[ins.readInt()-1]; for (int _i = 0; _i < __strbuf.length; _i++) __strbuf[_i] = (char) (ins.readByte()&0xff); ins.readByte(); this.host = new String(__strbuf);
 
        __strbuf = new char[ins.readInt()-1]; for (int _i = 0; _i < __strbuf.length; _i++) __strbuf[_i] = (char) (ins.readByte()&0xff); ins.readByte(); this.sheriff_name = new String(__strbuf);
 
        this.ncmds = ins.readInt();
 
        this.cmds = new bot_procman.sheriff_cmd_t[(int) ncmds];
        for (int a = 0; a < this.ncmds; a++) {
            this.cmds[a] = bot_procman.sheriff_cmd_t._decodeRecursiveFactory(ins);
        }
 
        this.nvars = ins.readInt();
 
        this.varnames = new String[(int) nvars];
        for (int a = 0; a < this.nvars; a++) {
            __strbuf = new char[ins.readInt()-1]; for (int _i = 0; _i < __strbuf.length; _i++) __strbuf[_i] = (char) (ins.readByte()&0xff); ins.readByte(); this.varnames[a] = new String(__strbuf);
        }
 
        this.varvals = new String[(int) nvars];
        for (int a = 0; a < this.nvars; a++) {
            __strbuf = new char[ins.readInt()-1]; for (int _i = 0; _i < __strbuf.length; _i++) __strbuf[_i] = (char) (ins.readByte()&0xff); ins.readByte(); this.varvals[a] = new String(__strbuf);
        }
 
    }
 
    public bot_procman.orders_t copy()
    {
        bot_procman.orders_t outobj = new bot_procman.orders_t();
        outobj.utime = this.utime;
 
        outobj.host = this.host;
 
        outobj.sheriff_name = this.sheriff_name;
 
        outobj.ncmds = this.ncmds;
 
        outobj.cmds = new bot_procman.sheriff_cmd_t[(int) ncmds];
        for (int a = 0; a < this.ncmds; a++) {
            outobj.cmds[a] = this.cmds[a].copy();
        }
 
        outobj.nvars = this.nvars;
 
        outobj.varnames = new String[(int) nvars];
        if (this.nvars > 0)
            System.arraycopy(this.varnames, 0, outobj.varnames, 0, this.nvars); 
        outobj.varvals = new String[(int) nvars];
        if (this.nvars > 0)
            System.arraycopy(this.varvals, 0, outobj.varvals, 0, this.nvars); 
        return outobj;
    }
 
}
