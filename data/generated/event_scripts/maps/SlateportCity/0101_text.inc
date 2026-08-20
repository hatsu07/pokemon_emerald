	@ data/maps/SlateportCity/scripts.inc:1183 SlateportCity_Text_SternWhatWasAllThat
	.globl gText_Rom_1DD395
gText_Rom_1DD395: @ 0x081DD395
	.string "クスノキ『いまの こえは……?\pだれかが かくせいきを つかって……\pどこから はなしてるんだ……?{EOS}"
	.if (. - gText_Rom_1DD395) > 0x33
	.error "gText_Rom_1DD395 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD395) < 0x33
	.space 0x33 - (. - gText_Rom_1DD395)
	.endif
