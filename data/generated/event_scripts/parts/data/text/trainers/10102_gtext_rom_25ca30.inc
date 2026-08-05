	@ data/text/trainers.inc:1268 Route113_Text_LawrenceIntro (+1 aliases)
	.globl gText_Rom_25CA30
gText_Rom_25CA30: @ 0x0825CA30
	.string "もしかして かざんばい あつめの\nとちゅう だった?$"
	.if (. - gText_Rom_25CA30) > 0x1b
	.error "gText_Rom_25CA30 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CA30) < 0x1b
	.space 0x1b - (. - gText_Rom_25CA30)
	.endif
