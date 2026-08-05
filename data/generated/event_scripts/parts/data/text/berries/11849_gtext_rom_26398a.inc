	@ data/text/berries.inc:49 Route120_Text_BerriesExpressionOfLoveIsntIt
	.globl gText_Rom_26398A
gText_Rom_26398A: @ 0x0826398A
	.string "ひかりを いっぱい あびて\nそだつ きのみたち…\pそして きのみが げんきに そだつように\nじょうろで みずを あげる わたしたち…\pこれって あい だよね?$"
	.if (. - gText_Rom_26398A) > 0x50
	.error "gText_Rom_26398A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26398A) < 0x50
	.space 0x50 - (. - gText_Rom_26398A)
	.endif
