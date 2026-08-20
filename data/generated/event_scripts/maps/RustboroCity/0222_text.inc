	@ data/maps/RustboroCity/scripts.inc:1015 RustboroCity_Text_WeShortenItToDevon
	.globl gText_Rom_1DF278
gText_Rom_1DF278: @ 0x081DF278
	.string "デボン コーポレーション……\nながいから みんな デボンって よぶけど\pあの かいしゃ では いろいろと\nべんりな ものを つくってるんだ!{EOS}"
	.if (. - gText_Rom_1DF278) > 0x47
	.error "gText_Rom_1DF278 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DF278) < 0x47
	.space 0x47 - (. - gText_Rom_1DF278)
	.endif
