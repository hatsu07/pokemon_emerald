	@ data/text/trainers.inc:773 Route110_Text_AbigailPostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25B54A
gText_Rom_25B54A: @ 0x0825B54A
	.string "つかれたから ひとやすみ\nきゅうけいは たいせつ なのよ{EOS}"
	.if (. - gText_Rom_25B54A) != 0x1d
	.error "gText_Rom_25B54A must retain its original byte length"
	.endif
