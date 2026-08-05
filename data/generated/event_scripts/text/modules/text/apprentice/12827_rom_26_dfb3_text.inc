	@ data/text/apprentice.inc:160 gText_ApprenticeRejectTeaching9
	.globl gText_Rom_26DFB3
gText_Rom_26DFB3: @ 0x0826DFB3
	.string "ぐわーっ!\nきみも なかなか クールで タフだね……\lそんなこと いわずに おねがいだよ!"
	.byte EOS
	.if (. - gText_Rom_26DFB3) > 0x2e
	.error "gText_Rom_26DFB3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26DFB3) < 0x2e
	.space 0x2e - (. - gText_Rom_26DFB3)
	.endif
