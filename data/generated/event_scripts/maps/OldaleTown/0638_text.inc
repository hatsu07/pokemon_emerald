	@ data/maps/OldaleTown/scripts.inc:351 OldaleTown_Text_ThisIsAPokemonMart
	.globl gText_Rom_1E4AB3
gText_Rom_1E4AB3: @ 0x081E4AB3
	.string "ここが フレンドリィショップ!\nあおい やねが めじるし なのさ!\pポケモンを つかまえる ボールとか\nいろんな グッズを うってるよ!\pキミには サービスとして\nこれを あげよう!{EOS}"
	.if (. - gText_Rom_1E4AB3) > 0x5c
	.error "gText_Rom_1E4AB3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E4AB3) < 0x5c
	.space 0x5c - (. - gText_Rom_1E4AB3)
	.endif
