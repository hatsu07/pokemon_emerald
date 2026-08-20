	@ data/maps/SlateportCity/scripts.inc:1249 SlateportCity_Text_ExplainBerries
	.globl gText_Rom_1DD5F9
gText_Rom_1DD5F9: @ 0x081DD5F9
	.string "きずついた やせいの ポケモンは\nきのみを かじって けがを なおすの\pしってた?\pそれを もくげきした だれかが\nきのみから くすりを つくることを\lおもいついたの\pしってた?\pきのみを くすりに するためには\nこなごなに くだいて こなにするの\pしってた?\pあなた……\nきのみに きょうみが ありそうね!\pいいものを あげるわ{EOS}"
	.if (. - gText_Rom_1DD5F9) > 0xa6
	.error "gText_Rom_1DD5F9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD5F9) < 0xa6
	.space 0xa6 - (. - gText_Rom_1DD5F9)
	.endif
