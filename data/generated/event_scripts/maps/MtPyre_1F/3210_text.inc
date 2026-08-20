	@ data/maps/MtPyre_1F/scripts.inc:28 MtPyre_1F_Text_TakeThisForYourOwnGood
	.globl gText_Rom_216165
gText_Rom_216165: @ 0x08216165
	.string "この おくりびやま には\nいろんな ものが さまよっておる……\pなにが おきるか わからん\nねんのため これを もっていきなされ{EOS}"
	.if (. - gText_Rom_216165) > 0x41
	.error "gText_Rom_216165 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_216165) < 0x41
	.space 0x41 - (. - gText_Rom_216165)
	.endif
