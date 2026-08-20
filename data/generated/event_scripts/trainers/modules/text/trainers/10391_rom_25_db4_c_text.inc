	@ data/text/trainers.inc:1685 Route117_Text_IsaacPostBattle
	.globl gText_Rom_25DB4C
gText_Rom_25DB4C: @ 0x0825DB4C
	.string "つよさ だけが ポケモンじゃないよ!\nポケモンの こせいを みがきあげるのも\lたのしみかたの ひとつ だね!{EOS}"
	.if (. - gText_Rom_25DB4C) > 0x37
	.error "gText_Rom_25DB4C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DB4C) < 0x37
	.space 0x37 - (. - gText_Rom_25DB4C)
	.endif
