	@ data/maps/MtPyre_6F/scripts.inc:41 MtPyre_6F_Text_ValerieRegister
	.globl gText_Rom_216A52
gText_Rom_216A52: @ 0x08216A52
	.string "ふふふふ しょうぶには まけたけど\nわたし…… こんな ことが できるの……\pあなたの ポケナビに いっさい てを\nふれなくても…… きえーいっ……!$"
	.if (. - gText_Rom_216A52) > 0x4c
	.error "gText_Rom_216A52 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_216A52) < 0x4c
	.space 0x4c - (. - gText_Rom_216A52)
	.endif
