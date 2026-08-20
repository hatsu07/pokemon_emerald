	@ data/maps/Route110/scripts.inc:890 Route110_Text_RatedForNumberOfCollisions
	.globl gText_Rom_1E9D56
gText_Rom_1E9D56: @ 0x081E9D56
	.string "この サイクリングロード!\pキンセツから カイナに むかって\nマッハじてんしゃで はしりぬける\lレーサーの ぶつかった かいすうと\lかかった タイムを はかって いるんだ!{EOS}"
	.if (. - gText_Rom_1E9D56) > 0x57
	.error "gText_Rom_1E9D56 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E9D56) < 0x57
	.space 0x57 - (. - gText_Rom_1E9D56)
	.endif
