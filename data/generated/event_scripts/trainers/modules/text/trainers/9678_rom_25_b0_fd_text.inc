	@ data/text/trainers.inc:665 Route109_Text_GwenPostBattle
	.globl gText_Rom_25B0FD
gText_Rom_25B0FD: @ 0x0825B0FD
	.string "どうしたら そんなに\nつよくなれる でちゅか……?{EOS}"
	.if (. - gText_Rom_25B0FD) > 0x1a
	.error "gText_Rom_25B0FD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B0FD) < 0x1a
	.space 0x1a - (. - gText_Rom_25B0FD)
	.endif
