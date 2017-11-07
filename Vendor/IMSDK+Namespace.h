// Namespaced Header
#ifndef __NS_SYMBOL
// We need to have multiple levels of macros here so that __NAMESPACE_PREFIX_ is
// properly replaced by the time we concatenate the namespace prefix.
#define __NS_REWRITE(ns, symbol) ns ## _ ## symbol
#define __NS_BRIDGE(ns, symbol) __NS_REWRITE(ns, symbol)
#define __NS_SYMBOL(symbol) __NS_BRIDGE(IMSDK, symbol)
#endif

// Classes
#ifndef IMSDK_AFActivityIndicatorViewNotificationObserver
#define IMSDK_AFActivityIndicatorViewNotificationObserver __NS_SYMBOL(IMSDK_AFActivityIndicatorViewNotificationObserver)
#endif

#ifndef IMSDK_AFAutoPurgingImageCache
#define IMSDK_AFAutoPurgingImageCache __NS_SYMBOL(IMSDK_AFAutoPurgingImageCache)
#endif

#ifndef IMSDK_AFCachedImage
#define IMSDK_AFCachedImage __NS_SYMBOL(IMSDK_AFCachedImage)
#endif

#ifndef IMSDK_AFCompoundResponseSerializer
#define IMSDK_AFCompoundResponseSerializer __NS_SYMBOL(IMSDK_AFCompoundResponseSerializer)
#endif

#ifndef IMSDK_AFHTTPBodyPart
#define IMSDK_AFHTTPBodyPart __NS_SYMBOL(IMSDK_AFHTTPBodyPart)
#endif

#ifndef IMSDK_AFHTTPRequestSerializer
#define IMSDK_AFHTTPRequestSerializer __NS_SYMBOL(IMSDK_AFHTTPRequestSerializer)
#endif

#ifndef IMSDK_AFHTTPResponseSerializer
#define IMSDK_AFHTTPResponseSerializer __NS_SYMBOL(IMSDK_AFHTTPResponseSerializer)
#endif

#ifndef IMSDK_AFHTTPSessionManager
#define IMSDK_AFHTTPSessionManager __NS_SYMBOL(IMSDK_AFHTTPSessionManager)
#endif

#ifndef IMSDK_AFImageDownloadReceipt
#define IMSDK_AFImageDownloadReceipt __NS_SYMBOL(IMSDK_AFImageDownloadReceipt)
#endif

#ifndef IMSDK_AFImageDownloader
#define IMSDK_AFImageDownloader __NS_SYMBOL(IMSDK_AFImageDownloader)
#endif

#ifndef IMSDK_AFImageDownloaderMergedTask
#define IMSDK_AFImageDownloaderMergedTask __NS_SYMBOL(IMSDK_AFImageDownloaderMergedTask)
#endif

#ifndef IMSDK_AFImageDownloaderResponseHandler
#define IMSDK_AFImageDownloaderResponseHandler __NS_SYMBOL(IMSDK_AFImageDownloaderResponseHandler)
#endif

#ifndef IMSDK_AFImageResponseSerializer
#define IMSDK_AFImageResponseSerializer __NS_SYMBOL(IMSDK_AFImageResponseSerializer)
#endif

#ifndef IMSDK_AFJSONRequestSerializer
#define IMSDK_AFJSONRequestSerializer __NS_SYMBOL(IMSDK_AFJSONRequestSerializer)
#endif

#ifndef IMSDK_AFJSONResponseSerializer
#define IMSDK_AFJSONResponseSerializer __NS_SYMBOL(IMSDK_AFJSONResponseSerializer)
#endif

#ifndef IMSDK_AFMultipartBodyStream
#define IMSDK_AFMultipartBodyStream __NS_SYMBOL(IMSDK_AFMultipartBodyStream)
#endif

#ifndef IMSDK_AFNetworkActivityIndicatorManager
#define IMSDK_AFNetworkActivityIndicatorManager __NS_SYMBOL(IMSDK_AFNetworkActivityIndicatorManager)
#endif

#ifndef IMSDK_AFNetworkReachabilityManager
#define IMSDK_AFNetworkReachabilityManager __NS_SYMBOL(IMSDK_AFNetworkReachabilityManager)
#endif

#ifndef IMSDK_AFPropertyListRequestSerializer
#define IMSDK_AFPropertyListRequestSerializer __NS_SYMBOL(IMSDK_AFPropertyListRequestSerializer)
#endif

#ifndef IMSDK_AFPropertyListResponseSerializer
#define IMSDK_AFPropertyListResponseSerializer __NS_SYMBOL(IMSDK_AFPropertyListResponseSerializer)
#endif

#ifndef IMSDK_AFQueryStringPair
#define IMSDK_AFQueryStringPair __NS_SYMBOL(IMSDK_AFQueryStringPair)
#endif

#ifndef IMSDK_AFRefreshControlNotificationObserver
#define IMSDK_AFRefreshControlNotificationObserver __NS_SYMBOL(IMSDK_AFRefreshControlNotificationObserver)
#endif

#ifndef IMSDK_AFSecurityPolicy
#define IMSDK_AFSecurityPolicy __NS_SYMBOL(IMSDK_AFSecurityPolicy)
#endif

#ifndef IMSDK_AFStreamingMultipartFormData
#define IMSDK_AFStreamingMultipartFormData __NS_SYMBOL(IMSDK_AFStreamingMultipartFormData)
#endif

#ifndef IMSDK_AFURLSessionManager
#define IMSDK_AFURLSessionManager __NS_SYMBOL(IMSDK_AFURLSessionManager)
#endif

#ifndef IMSDK_AFURLSessionManagerTaskDelegate
#define IMSDK_AFURLSessionManagerTaskDelegate __NS_SYMBOL(IMSDK_AFURLSessionManagerTaskDelegate)
#endif

#ifndef IMSDK_AFXMLParserResponseSerializer
#define IMSDK_AFXMLParserResponseSerializer __NS_SYMBOL(IMSDK_AFXMLParserResponseSerializer)
#endif

#ifndef IMSDK__AFURLSessionTaskSwizzling
#define IMSDK__AFURLSessionTaskSwizzling __NS_SYMBOL(IMSDK__AFURLSessionTaskSwizzling)
#endif

// Functions
#ifndef IMSDK_AFPercentEscapedStringFromString
#define IMSDK_AFPercentEscapedStringFromString __NS_SYMBOL(IMSDK_AFPercentEscapedStringFromString)
#endif

#ifndef IMSDK_AFStringFromNetworkReachabilityStatus
#define IMSDK_AFStringFromNetworkReachabilityStatus __NS_SYMBOL(IMSDK_AFStringFromNetworkReachabilityStatus)
#endif

#ifndef IMSDK_AFQueryStringFromParameters
#define IMSDK_AFQueryStringFromParameters __NS_SYMBOL(IMSDK_AFQueryStringFromParameters)
#endif

#ifndef IMSDK_AFQueryStringPairsFromDictionary
#define IMSDK_AFQueryStringPairsFromDictionary __NS_SYMBOL(IMSDK_AFQueryStringPairsFromDictionary)
#endif

#ifndef IMSDK_AFQueryStringPairsFromKeyAndValue
#define IMSDK_AFQueryStringPairsFromKeyAndValue __NS_SYMBOL(IMSDK_AFQueryStringPairsFromKeyAndValue)
#endif

// Externs
#ifndef OBJC_PROTOCOL_$_AFImageCache
#define OBJC_PROTOCOL_$_AFImageCache __NS_SYMBOL(OBJC_PROTOCOL_$_AFImageCache)
#endif

#ifndef OBJC_PROTOCOL_$_AFImageRequestCache
#define OBJC_PROTOCOL_$_AFImageRequestCache __NS_SYMBOL(OBJC_PROTOCOL_$_AFImageRequestCache)
#endif

#ifndef OBJC_PROTOCOL_$_AFURLResponseSerialization
#define OBJC_PROTOCOL_$_AFURLResponseSerialization __NS_SYMBOL(OBJC_PROTOCOL_$_AFURLResponseSerialization)
#endif

#ifndef OBJC_PROTOCOL_$_AFURLRequestSerialization
#define OBJC_PROTOCOL_$_AFURLRequestSerialization __NS_SYMBOL(OBJC_PROTOCOL_$_AFURLRequestSerialization)
#endif

#ifndef OBJC_PROTOCOL_$_AFMultipartFormData
#define OBJC_PROTOCOL_$_AFMultipartFormData __NS_SYMBOL(OBJC_PROTOCOL_$_AFMultipartFormData)
#endif

#ifndef IMSDKVendorVersionString
#define IMSDKVendorVersionString __NS_SYMBOL(IMSDKVendorVersionString)
#endif

#ifndef IMSDKVendorVersionNumber
#define IMSDKVendorVersionNumber __NS_SYMBOL(IMSDKVendorVersionNumber)
#endif

#ifndef IMSDK_AFNetworkingReachabilityDidChangeNotification
#define IMSDK_AFNetworkingReachabilityDidChangeNotification __NS_SYMBOL(IMSDK_AFNetworkingReachabilityDidChangeNotification)
#endif

#ifndef IMSDK_AFNetworkingReachabilityNotificationStatusItem
#define IMSDK_AFNetworkingReachabilityNotificationStatusItem __NS_SYMBOL(IMSDK_AFNetworkingReachabilityNotificationStatusItem)
#endif

#ifndef IMSDK_AFURLResponseSerializationErrorDomain
#define IMSDK_AFURLResponseSerializationErrorDomain __NS_SYMBOL(IMSDK_AFURLResponseSerializationErrorDomain)
#endif

#ifndef IMSDK_AFNetworkingOperationFailingURLResponseErrorKey
#define IMSDK_AFNetworkingOperationFailingURLResponseErrorKey __NS_SYMBOL(IMSDK_AFNetworkingOperationFailingURLResponseErrorKey)
#endif

#ifndef IMSDK_AFNetworkingOperationFailingURLResponseDataErrorKey
#define IMSDK_AFNetworkingOperationFailingURLResponseDataErrorKey __NS_SYMBOL(IMSDK_AFNetworkingOperationFailingURLResponseDataErrorKey)
#endif

#ifndef IMSDK_AFNetworkingTaskDidResumeNotification
#define IMSDK_AFNetworkingTaskDidResumeNotification __NS_SYMBOL(IMSDK_AFNetworkingTaskDidResumeNotification)
#endif

#ifndef IMSDK_AFNetworkingTaskDidCompleteNotification
#define IMSDK_AFNetworkingTaskDidCompleteNotification __NS_SYMBOL(IMSDK_AFNetworkingTaskDidCompleteNotification)
#endif

#ifndef IMSDK_AFNetworkingTaskDidSuspendNotification
#define IMSDK_AFNetworkingTaskDidSuspendNotification __NS_SYMBOL(IMSDK_AFNetworkingTaskDidSuspendNotification)
#endif

#ifndef IMSDK_AFURLSessionDidInvalidateNotification
#define IMSDK_AFURLSessionDidInvalidateNotification __NS_SYMBOL(IMSDK_AFURLSessionDidInvalidateNotification)
#endif

#ifndef IMSDK_AFURLSessionDownloadTaskDidFailToMoveFileNotification
#define IMSDK_AFURLSessionDownloadTaskDidFailToMoveFileNotification __NS_SYMBOL(IMSDK_AFURLSessionDownloadTaskDidFailToMoveFileNotification)
#endif

#ifndef IMSDK_AFNetworkingTaskDidCompleteSerializedResponseKey
#define IMSDK_AFNetworkingTaskDidCompleteSerializedResponseKey __NS_SYMBOL(IMSDK_AFNetworkingTaskDidCompleteSerializedResponseKey)
#endif

#ifndef IMSDK_AFNetworkingTaskDidCompleteResponseSerializerKey
#define IMSDK_AFNetworkingTaskDidCompleteResponseSerializerKey __NS_SYMBOL(IMSDK_AFNetworkingTaskDidCompleteResponseSerializerKey)
#endif

#ifndef IMSDK_AFNetworkingTaskDidCompleteResponseDataKey
#define IMSDK_AFNetworkingTaskDidCompleteResponseDataKey __NS_SYMBOL(IMSDK_AFNetworkingTaskDidCompleteResponseDataKey)
#endif

#ifndef IMSDK_AFNetworkingTaskDidCompleteErrorKey
#define IMSDK_AFNetworkingTaskDidCompleteErrorKey __NS_SYMBOL(IMSDK_AFNetworkingTaskDidCompleteErrorKey)
#endif

#ifndef IMSDK_AFNetworkingTaskDidCompleteAssetPathKey
#define IMSDK_AFNetworkingTaskDidCompleteAssetPathKey __NS_SYMBOL(IMSDK_AFNetworkingTaskDidCompleteAssetPathKey)
#endif

#ifndef IMSDK_AFURLRequestSerializationErrorDomain
#define IMSDK_AFURLRequestSerializationErrorDomain __NS_SYMBOL(IMSDK_AFURLRequestSerializationErrorDomain)
#endif

#ifndef IMSDK_AFNetworkingOperationFailingURLRequestErrorKey
#define IMSDK_AFNetworkingOperationFailingURLRequestErrorKey __NS_SYMBOL(IMSDK_AFNetworkingOperationFailingURLRequestErrorKey)
#endif

#ifndef IMSDK_kAFUploadStream3GSuggestedPacketSize
#define IMSDK_kAFUploadStream3GSuggestedPacketSize __NS_SYMBOL(IMSDK_kAFUploadStream3GSuggestedPacketSize)
#endif

#ifndef IMSDK_kAFUploadStream3GSuggestedDelay
#define IMSDK_kAFUploadStream3GSuggestedDelay __NS_SYMBOL(IMSDK_kAFUploadStream3GSuggestedDelay)
#endif
