// THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
// BY HAND!!
//
// Generated by lcm-gen

#ifndef _bot_procman_orders2_t_h
#define _bot_procman_orders2_t_h

#include <stdint.h>
#include <stdlib.h>
#include <lcm/lcm_coretypes.h>
#include <lcm/lcm.h>

#ifdef __cplusplus
extern "C" {
#endif

#include "lcmtypes/bot_procman_sheriff_cmd2_t.h"
/**
 *    message sent by the procman sheriff to provide instructions for a procman
 *    deputy.  As long as the deputy reports a status inconsistent with the
 *    orders, the orders will periodically be transmitted
 *
 */
typedef struct _bot_procman_orders2_t bot_procman_orders2_t;
struct _bot_procman_orders2_t
{
    int64_t    utime;
    char*      host;
    char*      sheriff_name;
    int32_t    ncmds;
    bot_procman_sheriff_cmd2_t *cmds;
    int32_t    num_options;
    char*      *option_names;
    char*      *option_values;
};

/**
 * Create a deep copy of a bot_procman_orders2_t.
 * When no longer needed, destroy it with bot_procman_orders2_t_destroy()
 */
bot_procman_orders2_t* bot_procman_orders2_t_copy(const bot_procman_orders2_t* to_copy);

/**
 * Destroy an instance of bot_procman_orders2_t created by bot_procman_orders2_t_copy()
 */
void bot_procman_orders2_t_destroy(bot_procman_orders2_t* to_destroy);

/**
 * Identifies a single subscription.  This is an opaque data type.
 */
typedef struct _bot_procman_orders2_t_subscription_t bot_procman_orders2_t_subscription_t;

/**
 * Prototype for a callback function invoked when a message of type
 * bot_procman_orders2_t is received.
 */
typedef void(*bot_procman_orders2_t_handler_t)(
    const lcm_recv_buf_t *rbuf, const char *channel,
    const bot_procman_orders2_t *msg, void *userdata);

/**
 * Publish a message of type bot_procman_orders2_t using LCM.
 *
 * @param lcm The LCM instance to publish with.
 * @param channel The channel to publish on.
 * @param msg The message to publish.
 * @return 0 on success, <0 on error.  Success means LCM has transferred
 * responsibility of the message data to the OS.
 */
int bot_procman_orders2_t_publish(lcm_t *lcm, const char *channel, const bot_procman_orders2_t *msg);

/**
 * Subscribe to messages of type bot_procman_orders2_t using LCM.
 *
 * @param lcm The LCM instance to subscribe with.
 * @param channel The channel to subscribe to.
 * @param handler The callback function invoked by LCM when a message is
 *     received. This function is invoked by LCM during calls to lcm_handle()
 *     and lcm_handle_timeout().
 * @param userdata An opaque pointer passed to @p handler when it is invoked.
 * @return 0 on success, <0 if an error occured
 */
bot_procman_orders2_t_subscription_t* bot_procman_orders2_t_subscribe(
    lcm_t *lcm, const char *channel, bot_procman_orders2_t_handler_t handler, void *userdata);

/**
 * Removes and destroys a subscription created by bot_procman_orders2_t_subscribe()
 */
int bot_procman_orders2_t_unsubscribe(lcm_t *lcm, bot_procman_orders2_t_subscription_t* hid);

/**
 * Sets the queue capacity for a subscription.
 * Some LCM providers (e.g., the default multicast provider) are implemented
 * using a background receive thread that constantly revceives messages from
 * the network.  As these messages are received, they are buffered on
 * per-subscription queues until dispatched by lcm_handle().  This function
 * how many messages are queued before dropping messages.
 *
 * @param subs the subscription to modify.
 * @param num_messages The maximum number of messages to queue
 *  on the subscription.
 * @return 0 on success, <0 if an error occured
 */
int bot_procman_orders2_t_subscription_set_queue_capacity(
    bot_procman_orders2_t_subscription_t* subs, int num_messages);

/**
 * Encode a message of type bot_procman_orders2_t into binary form.
 *
 * @param buf The output buffer.
 * @param offset Encoding starts at this byte offset into @p buf.
 * @param maxlen Maximum number of bytes to write.  This should generally
 *               be equal to bot_procman_orders2_t_encoded_size().
 * @param msg The message to encode.
 * @return The number of bytes encoded, or <0 if an error occured.
 */
int bot_procman_orders2_t_encode(void *buf, int offset, int maxlen, const bot_procman_orders2_t *p);

/**
 * Decode a message of type bot_procman_orders2_t from binary form.
 * When decoding messages containing strings or variable-length arrays, this
 * function may allocate memory.  When finished with the decoded message,
 * release allocated resources with bot_procman_orders2_t_decode_cleanup().
 *
 * @param buf The buffer containing the encoded message
 * @param offset The byte offset into @p buf where the encoded message starts.
 * @param maxlen The maximum number of bytes to read while decoding.
 * @param msg Output parameter where the decoded message is stored
 * @return The number of bytes decoded, or <0 if an error occured.
 */
int bot_procman_orders2_t_decode(const void *buf, int offset, int maxlen, bot_procman_orders2_t *msg);

/**
 * Release resources allocated by bot_procman_orders2_t_decode()
 * @return 0
 */
int bot_procman_orders2_t_decode_cleanup(bot_procman_orders2_t *p);

/**
 * Check how many bytes are required to encode a message of type bot_procman_orders2_t
 */
int bot_procman_orders2_t_encoded_size(const bot_procman_orders2_t *p);

// LCM support functions. Users should not call these
int64_t __bot_procman_orders2_t_get_hash(void);
uint64_t __bot_procman_orders2_t_hash_recursive(const __lcm_hash_ptr *p);
int __bot_procman_orders2_t_encode_array(
    void *buf, int offset, int maxlen, const bot_procman_orders2_t *p, int elements);
int __bot_procman_orders2_t_decode_array(
    const void *buf, int offset, int maxlen, bot_procman_orders2_t *p, int elements);
int __bot_procman_orders2_t_decode_array_cleanup(bot_procman_orders2_t *p, int elements);
int __bot_procman_orders2_t_encoded_array_size(const bot_procman_orders2_t *p, int elements);
int __bot_procman_orders2_t_clone_array(const bot_procman_orders2_t *p, bot_procman_orders2_t *q, int elements);

#ifdef __cplusplus
}
#endif

#endif
