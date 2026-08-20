	@ data/maps/SlateportCity/scripts.inc:1157 SlateportCity_Text_SternWhewFirstInterview
	.globl gText_Rom_1DD26B
gText_Rom_1DD26B: @ 0x081DD26B
	.string "クスノキ『ふう……\pテレビカメラに うつされる なんて\nはじめて だったから きんちょう したよ!{EOS}"
	.if (. - gText_Rom_1DD26B) > 0x32
	.error "gText_Rom_1DD26B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD26B) < 0x32
	.space 0x32 - (. - gText_Rom_1DD26B)
	.endif
