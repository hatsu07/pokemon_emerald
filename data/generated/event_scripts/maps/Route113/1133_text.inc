	@ data/maps/Route113/scripts.inc:156 Route113_Text_TrainerTipsRegisterKeyItems
	.globl gText_Rom_1EB402
gText_Rom_1EB402: @ 0x081EB402
	.string "おとくな けいじばん!!\pバッグの たいせつなものに いれた\nどうぐを とうろく しておくと\lセレクトボタンを おすだけで\lつかえるように なって べんり です!{EOS}"
	.if (. - gText_Rom_1EB402) > 0x52
	.error "gText_Rom_1EB402 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EB402) < 0x52
	.space 0x52 - (. - gText_Rom_1EB402)
	.endif
