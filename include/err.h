#ifndef _ERR_H_
#define _ERR_H_

/**
 * client return codes
 */
#define OK 0
#define OK_MSG "All fine"

#define ERR_IN 1
#define ERR_IN_MSG "Missing input"

#define ERR_IMOUT 500
#define ERR_IMOUT_MSG "Fuck that, I'm out.. probably leaking memory"

#define HTTP_OK 200
#define HTTP_OK_MSG "Success"
#define HTTP_OK_CREATED 201
#define HTTP_OK_CREATED_MSG "Created"
#define HTTP_OK_ACCPTED 202
#define HTTP_OK_ACCPTED_MSG "Accpted"

#define HTTP_ERR_MOV_PER 302
#define HTTP_ERR_MOV_PER_MSG "Moved Permanently"

#define HTTP_ERR_UNAU 401
#define HTTP_ERR_UNAU_MSG "Unauthorized, maybe missing credentilas"
#define HTTP_ERR_FORB 401
#define HTTP_ERR_FORB_MSG "Missing Permission"
#define HTTP_ERR_UNAU 401
#define HTTP_ERR_UNAU_MSG "Unauthorized, maybe missing credentilas"
#define HTTP_ERR_NOTF 404
#define HTTP_ERR_NOTF_MSG "Not Found"

#define HTTP_ERR_INSE 500
#define HTTP_ERR_INSE_MSG "Interval Server Error"

#endif
