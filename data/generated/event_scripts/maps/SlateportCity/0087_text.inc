	@ data/maps/SlateportCity/scripts.inc:1138 SlateportCity_Text_BigSmileForCamera
	.globl gText_Rom_1DD1AB
gText_Rom_1DD1AB: @ 0x081DD1AB
	.string "ダイ『はい クスノキさん\nそこで えがお!{EOS}"
	.if (. - gText_Rom_1DD1AB) > 0x16
	.error "gText_Rom_1DD1AB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD1AB) < 0x16
	.space 0x16 - (. - gText_Rom_1DD1AB)
	.endif
