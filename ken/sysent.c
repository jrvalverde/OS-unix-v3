int	sysent[]
{
	0, &nullsys,			/*  0 = indir */
	0, &rexit,			/*  1 = exit */
	0, &fork,			/*  2 = fork */
	2, &read,			/*  3 = read */
	2, &write,			/*  4 = write */
	2, &open,			/*  5 = open */
	0, &close,			/*  6 = close */
	0, &wait,			/*  7 = wait */
	2, &creat,			/*  8 = creat */
	2, &link,			/*  9 = link */
	1, &unlink,			/* 10 = unlink */
	2, &exec,			/* 11 = exec */
	1, &chdir,			/* 12 = chdir */
	0, &gtime,			/* 13 = time */
	3, &mknod,			/* 14 = mknod */
	2, &chmod,			/* 15 = chmod */
	2, &chown,			/* 16 = chown */
	1, &sbreak,			/* 17 = break */
	2, &stat,			/* 18 = stat */
	2, &seek,			/* 19 = seek */
	0, &nosys,			/* 20 = x */
	2, &smount,			/* 21 = mount */
	1, &sumount,			/* 22 = umount */
	0, &setuid,			/* 23 = setuid */
	0, &getuid,			/* 24 = getuid */
	0, &stime,			/* 25 = stime */
	1, &quit,			/* 26 = quit */
	1, &intr,			/* 27 = intr */
	1, &fstat,			/* 28 = fstat */
	1, &cemt,			/* 29 = cemt */
	1, &nullsys,			/* 30 = smdate */
	1, &stty,			/* 31 = stty */
	1, &gtty,			/* 32 = gtty */
	1, &ilgins,			/* 33 = ilgins */
	0, &nullsys,			/* 34 = nice */
	0, &sslep,			/* 35 = sleep */
	0, &sync,			/* 36 = sync */
	0, &kill,			/* 37 = kill */
	0, &getswit,			/* 38 = switch */
	0, &nosys,			/* 39 = panic */
	1, &fpe,			/* 40 = fpe */
	0, &dup,			/* 41 = dup */
	0, &nosys,			/* 42 = pipe */
	1, &times,			/* 43 = times */
	4, &nullsys,			/* 44 = prof */
	0, &nosys,			/* 45 = tiu */
	0, &setgid,			/* 46 = setgid */
	0, &getgid,			/* 47 = getgid */
	2, &ssig,			/* 48 = sig */
	0, &nosys,			/* 49 = x */
	0, &nosys,			/* 50 = x */
	0, &nosys,			/* 51 = x */
	0, &nosys,			/* 52 = x */
	0, &nosys,			/* 53 = x */
	0, &nosys,			/* 54 = x */
	0, &nosys,			/* 55 = x */
	0, &nosys,			/* 56 = x */
	0, &nosys,			/* 57 = x */
	0, &nosys,			/* 58 = x */
	0, &nosys,			/* 59 = x */
	0, &nosys,			/* 60 = x */
	0, &nosys,			/* 61 = x */
	0, &nosys,			/* 62 = x */
	0, &prproc			/* 63 = special */
};
