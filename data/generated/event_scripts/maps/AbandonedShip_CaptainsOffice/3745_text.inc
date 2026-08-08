	@ data/maps/AbandonedShip_CaptainsOffice/scripts.inc:28 AbandonedShip_CaptainsOffice_Text_OhCanYouDeliverScanner
	.globl gText_Rom_21B2C2
gText_Rom_21B2C2: @ 0x0821B2C2
	.string "あ! たんちき じゃないか!\p……よかったら それ\nクスノキ かんちょうに\lわたしてきて くれないかなあ\pもうすこし このふね しらべたいんだ"
	.byte EOS
	.if (. - gText_Rom_21B2C2) > 0x48
	.error "gText_Rom_21B2C2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21B2C2) < 0x48
	.space 0x48 - (. - gText_Rom_21B2C2)
	.endif
