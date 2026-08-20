	@ data/maps/LilycoveCity/scripts.inc:640 LilycoveCity_Text_SixtyYearsAgoHusbandProposed
	.globl gText_Rom_1E10D3
gText_Rom_1E10D3: @ 0x081E10D3
	.string "60ねんまえ ここで おじいしゃんが\nわしに プロポーズ してくれた ときから\lこのうみは うつくしいまま ですのじゃ\pむふふ むふふふふ……{EOS}"
	.if (. - gText_Rom_1E10D3) > 0x48
	.error "gText_Rom_1E10D3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E10D3) < 0x48
	.space 0x48 - (. - gText_Rom_1E10D3)
	.endif
