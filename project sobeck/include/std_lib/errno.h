#define EPERM	0x01//	Operation not permitted
#define ENOENT	0x02	//No such file or directory
#define ESRCH   0x03	//No such process
#define EINTR   0x04 //Interrupted system call
#define EIO	    0x05	//I/O error
#define ENXIO	0x06	//0x..fffa	No such device or address
#define E2BIG	0x07	//0x..fff9	Argument list too long
#define ENOEXEC		0x08	//0x..fff8	Exec format error
#define EBADF		0x09	//0x..fff7	Bad file number
#define ECHILD	0x0a	//0x..fff6	No child processes
#define EAGAIN		0x0b	//0x..fff5	Try again
#define ENOMEM		0x0c	//0x..fff4	Out of memory
#define EACCES		0x0d	//0x..fff3	Permission denied
#define EFAULT		0x0e	//0x..fff2	Bad address
#define ENOTBLK		0x0f	//0x..fff1	Block device required
#define EBUSY		0x10	//0x..fff0	Device or resource busy
#define EEXIST		0x11	//0x..ffef	File exists
#define EXDEV		0x12	//0x..ffee	Cross-device link
#define ENODEV		0x13	//0x..ffed	No such device
#define ENOTDIR		0x14	//0x..ffec	Not a directory
#define EISDIR		0x15	//0x..ffeb	Is a directory
#define EINVAL		0x16	//0x..ffea	Invalid argument
#define ENFILE		0x17	//0x..ffe9	File table overflow
#define EMFILE		0x18	//0x..ffe8	Too many open files
#define ENOTTY		0x19	//0x..ffe7	Not a typewriter
#define ETXTBSY		0x1a	//0x..ffe6	Text file busy
#define EFBIG		0x1b	//0x..ffe5	File too large
#define ENOSPC		0x1c	//0x..ffe4	No space left on device
#define ESPIPE		0x1d	//0x..ffe3	Illegal seek
#define EROFS		0x1e	//0x..ffe2	Read-only file system
#define EMLINK		0x1f	//0x..ffe1	Too many links
#define EPIPE		0x20	//0x..ffe0	Broken pipe
#define EDOM		0x21	//0x..ffdf	Math argument out of domain of func
#define ERANGE		0x22	//0x..ffde	Math result not representable
#define EDEADLK		0x23	//0x..ffdd	Resource deadlock would occur
#define ENAMETOOLONG		0x24	//0x..ffdc	File name too long
#define ENOLCK		0x25	//0x..ffdb	No record locks available
#define ENOSYS		0x26	//0x..ffda	Function not implemented
#define ENOTEMPTY		0x27//	0x..ffd9	Directory not empty
#define ELOOP		0x28	//0x..ffd8	Too many symbolic links encountered
#define EWOULDBLOCK	EAGAIN
#define ENOMSG		0x2a	//0x..ffd6	No message of desired type
#define EIDRM		0x2b	//0x..ffd5	Identifier removed
#define ECHRNG		0x2c	//0x..ffd4	Channel number out of range
#define EL2NSYNC		0x2d//	0x..ffd3	Level 2 not synchronized
#define EL3HLT		0x2e	//0x..ffd2	Level 3 halted
#define EL3RST		0x2f	//0x..ffd1	Level 3 reset
#define ELNRNG		0x30	//0x..ffd0	Link number out of range
#define EUNATCH		0x31	//0x..ffcf	Protocol driver not attached
#define ENOCSI		0x32	//0x..ffce	No CSI structure available
#define EL2HLT		0x33	//0x..ffcd	Level 2 halted
#define EBADE		0x34	//0x..ffcc	Invalid exchange
#define EBADR		0x35	//0x..ffcb	Invalid request descriptor
#define EXFULL		0x36	//0x..ffca	Exchange full
#define ENOANO		0x37	//0x..ffc9	No anode
#define EBADRQC		0x38	//0x..ffc8	Invalid request code
#define EBADSLT		0x39	//0x..ffc7	Invalid slot
#define EDEADLOCK	EDEADLK
#define EBFONT		0x3b	//0x..ffc5	Bad font file format
#define ENOSTR		0x3c	//0x..ffc4	Device not a stream
#define ENODATA		0x3d	//0x..ffc3	No data available
#define ETIME		0x3e	//0x..ffc2	Timer expired
#define ENOSR		0x3f	//0x..ffc1	Out of streams resources
#define ENONET		0x40	//0x..ffc0	Machine is not on the network
#define ENOPKG		0x41	//0x..ffbf	Package not installed
#define EREMOTE		0x42	//0x..ffbe	Object is remote
#define ENOLINK		0x43	//0x..ffbd	Link has been severed
#define EADV		0x44	//0x..ffbc	Advertise error
#define ESRMNT		0x45	//0x..ffbb	Srmount error
#define ECOMM		0x46	//0x..ffba	Communication error on send
#define EPROTO		0x47	//0x..ffb9	Protocol error
#define EL2NSYNC		0x2d//	0x..ffd3	Level 2 not synchronized#define EMULTIHOP	72	0x48	0x..ffb8	Multihop attempted                  //
#define EDOTDOT		0x49	//0x..ffb7	RFS specific error
#define EBADMSG		0x4a	//0x..ffb6	Not a data message
#define EOVERFLOW		0x4b//	0x..ffb5	Value too large for defined data type
#define ENOTUNIQ		0x4c	//0x..ffb4	Name not unique on network
#define EBADFD		0x4d	//0x..ffb3	File descriptor in bad state
#define EREMCHG		0x4e	//0x..ffb2	Remote address changed
#define ELIBACC		0x4f	//0x..ffb1	Can not access a needed shared library
#define ELIBBAD		0x50	//0x..ffb0	Accessing a corrupted shared library
#define ELIBSCN		0x51	//0x..ffaf	.lib section in a.out corrupted
#define ELIBMAX		0x52	//0x..ffae	Attempting to link in too many shared libraries
#define ELIBEXEC		0x53//	0x..ffad	Cannot exec a shared library directly
#define EILSEQ		0x54	//0x..ffac	Illegal byte sequence
#define ERESTART		0x55//	0x..ffab	Interrupted system call should be restarted
#define ESTRPIPE		0x56//	0x..ffaa	Streams pipe error
#define EUSERS		0x57	//0x..ffa9	Too many users
#define ENOTSOCK	0x58//	0x..ffa8	Socket operation on non-socket
#define EDESTADDRREQ		0x59	//0x..ffa7	Destination address required
#define EMSGSIZE		0x5a	//0x..ffa6	Message too long
#define EPROTOTYPE		0x5b	//0x..ffa5	Protocol wrong type for socket
#define ENOPROTOOPT		0x5c	//0x..ffa4	Protocol not available
#define EPROTONOSUPPORT		0x5d//	0x..ffa3	Protocol not supported
#define ESOCKTNOSUPPORT		0x5e//	0x..ffa2	Socket type not supported
#define EOPNOTSUPP		0x5f	//0x..ffa1	Operation not supported on transport endpoint
#define EPFNOSUPPORT		0x60	//0x..ffa0	Protocol family not supported
#define EAFNOSUPPORT		0x61 //0x..ff9f	Address family not supported by protocol
#define EADDRINUSE		0x62	//0x..ff9e	Address already in use
#define EADDRNOTAVAIL		0x63	//0x..ff9d	Cannot assign requested address
#define ENETDOWN		0x64	//0x..ff9c	Network is down
#define ENETUNREACH		0x65	//0x..ff9b	Network is unreachable
#define ENETRESET		0x66	//0x..ff9a	Network dropped connection because of reset
#define ECONNABORTED	0x67	//0x..ff99	Software caused connection abort
#define ECONNRESET		0x68	//0x..ff98	Connection reset by peer
#define ENOBUFS		0x69	//0x..ff97	No buffer space available
#define EISCONN		0x6a	//0x..ff96	Transport endpoint is already connected
#define ENOTCONN		0x6b	//0x..ff95	Transport endpoint is not connected
#define ESHUTDOWN		0x6c	//0x..ff94	Cannot send after transport endpoint shutdown
#define ETOOMANYREFS		0x6d	//0x..ff93	Too many references: cannot splice
#define ETIMEDOUT		0x6e	//0x..ff92	Connection timed out
#define ECONNREFUSED	0x6f	//0x..ff91	Connection refused
#define EHOSTDOWN		0x70	//0x..ff90	Host is down
#define EHOSTUNREACH	0x71	//0x..ff8f	No route to host
#define EALREADY		0x72	//0x..ff8e	Operation already in progress
#define EINPROGRESS		0x73	//0x..ff8d	Operation now in progress
#define ESTALE		0x74	//0x..ff8c	Stale NFS file handle
#define EUCLEAN		0x75	//0x..ff8b	Structure needs cleaning
#define ENOTNAM		0x76	//0x..ff8a	Not a XENIX named type file
#define ENAVAIL		0x77	//0x..ff89	No XENIX semaphores available
#define EISNAM		0x78	//0x..ff88	Is a named type file
#define EREMOTEIO	0x79	//0x..ff87	Remote I/O error
#define EDQUOT		0x7a	//0x..ff86	Quota exceeded
#define ENOMEDIUM	0x7b	//0x..ff85	No medium found
#define EMEDIUMTYPE	0x7c	//0x..ff84	Wrong medium type
#define ECANCELED	0x7d	//0x..ff83	Operation Canceled
#define ENOKEY	0x7e	//0x..ff82	Required key not available
#define EKEYEXPIRED	0x7f	//0x..ff81	Key has expired
#define EKEYREVOKED	0x80	//0x..ff80	Key has been revoked
#define EKEYREJECTED	0x81	//0x..ff7f	Key was rejected by service
#define EOWNERDEAD	0x82	//0x..ff7e	Owner died
#define ENOTRECOVERABLE	0x83	//0x..ff7d	State not recoverable
#define ERFKILL	0x84	//0x..ff7c	Operation not possible due to RF-kill
#define EHWPOISON		0x85	//0x..ff7b	Memory page has hardware error
#define ERESTARTSYS		0x200	//0x..ff200
#define ERESTARTNOINTR		0x201	//0x..ff1ff
#define ERESTARTNOHAND		0x202	//0x..ff1fe	restart if no handler..
#define ENOIOCTLCMD		0x203	//0x..ff1fd	No ioctl command
#define ERESTART_RESTARTBLOCK		0x204	//0x..ff1fc	restart by calling sys_restart_syscall
#define EBADHANDLE		0x209	//0x..ff1f7	Illegal NFS file handle
#define ENOTSYNC		0x20a	//0x..ff1f6	Update synchronization mismatch
#define EBADCOOKIE		0x20b	//0x..ff1f5	Cookie is stale
#define ENOTSUPP	0x20c	//0x..ff1f4	Operation is not supported
#define ETOOSMALL		0x20d	//0x..ff1f3	Buffer or request is too small
#define ESERVERFAULT		0x20e	//0x..ff1f2	An untranslatable error occurred
#define EBADTYPE		0x20f	//0x..ff1f1	Type not supported by server
#define EJUKEBOX		0x210	//0x..ff1f0	Request initiated, but will not complete before timeout
#define EIOCBQUEUED		0x211	//0x..ff1ef	iocb queued, will get completion event
#define EIOCBRETRY		0x212	//0x..ff1ee	iocb queued, will trigger a retry
