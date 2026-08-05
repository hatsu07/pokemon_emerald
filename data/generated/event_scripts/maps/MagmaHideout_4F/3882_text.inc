	@ data/maps/MagmaHideout_4F/scripts.inc:193 MagmaHideout_4F_Text_MaxieGroudonWhatsWrong
	.globl gText_Rom_21CC62
gText_Rom_21CC62: @ 0x0821CC62
	.string "マツブサ『……グラードン!\nいったい どうしたと いうんだ!?\pあいいろのたまでは だめだと いうのか?\pグラードンよ!\nどこへ きえて しまったんだ……"
	.byte EOS
	.if (. - gText_Rom_21CC62) > 0x4e
	.error "gText_Rom_21CC62 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21CC62) < 0x4e
	.space 0x4e - (. - gText_Rom_21CC62)
	.endif
