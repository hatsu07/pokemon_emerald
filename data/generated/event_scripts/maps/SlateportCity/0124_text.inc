	@ data/maps/SlateportCity/scripts.inc:1234 SlateportCity_Text_HarborFerryUnderConstruction
	.globl gText_Rom_1DD55A
gText_Rom_1DD55A: @ 0x081DD55A
	.string "「カイナ シティ ふねのりば」\pれんらくせん タイドリップごう は\nぞうせんじょ にて けんぞう ちゅう!\pもう しばらく おまちください!{EOS}"
	.if (. - gText_Rom_1DD55A) > 0x47
	.error "gText_Rom_1DD55A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD55A) < 0x47
	.space 0x47 - (. - gText_Rom_1DD55A)
	.endif
