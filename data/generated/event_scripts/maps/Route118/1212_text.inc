	@ data/maps/Route118/scripts.inc:264 Route118_Text_YouAgreeGoodRodIsGood
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_1ECBD8
gText_Rom_1ECBD8: @ 0x081ECBD8
	.string "うむ！\nいいつりざおは ほんとうに いいよ！\pきみも そう おもうでしょ？{EOS}"
	.if (. - gText_Rom_1ECBD8) != 0x26
	.error "gText_Rom_1ECBD8 must retain its original byte length"
	.endif
