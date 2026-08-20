	@ data/text/trainers.inc:1007 Route111_Text_BrookeIntro (+1 aliases)
	.globl gText_Rom_25BF81
gText_Rom_25BF81: @ 0x0825BF81
	.string "あら あなたの ポケモン\nかなり つよそうだわ!\lぜひ おてあわせ してくれない?{EOS}"
	.if (. - gText_Rom_25BF81) > 0x2a
	.error "gText_Rom_25BF81 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BF81) < 0x2a
	.space 0x2a - (. - gText_Rom_25BF81)
	.endif
