	@ data/text/check_furniture.inc:1 Text_PictureBookShelf
	.globl gText_Rom_26426B
gText_Rom_26426B: @ 0x0826426B
	.string "ポケモンえほんが そろってる!{EOS}"
	.if (. - gText_Rom_26426B) > 0x10
	.error "gText_Rom_26426B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26426B) < 0x10
	.space 0x10 - (. - gText_Rom_26426B)
	.endif

	@ data/text/check_furniture.inc:4 Text_BookShelf
	.globl gText_Rom_26427B
gText_Rom_26427B: @ 0x0826427B
	.string "いろんな ほんが いっぱいだ!{EOS}"
	.if (. - gText_Rom_26427B) > 0x10
	.error "gText_Rom_26427B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26427B) < 0x10
	.space 0x10 - (. - gText_Rom_26427B)
	.endif

	@ data/text/check_furniture.inc:7 Text_PokemonCenterBookShelf
	.globl gText_Rom_26428B
gText_Rom_26428B: @ 0x0826428B
	.string "ポケモンざっしが ならんでる!\p……「ポケモンのとも」\n……「ポケモン てちょう」\l……「かわいい ポケモン」{EOS}"
	.if (. - gText_Rom_26428B) > 0x38
	.error "gText_Rom_26428B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26428B) < 0x38
	.space 0x38 - (. - gText_Rom_26428B)
	.endif

	@ data/text/check_furniture.inc:13 Text_Vase
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2642C3
gText_Rom_2642C3: @ 0x082642C3
	.string "たかそうな つぼが ある!\nのぞきこむと……\pなかは からっぽ だ!{EOS}"
	.if (. - gText_Rom_2642C3) != 0x23
	.error "gText_Rom_2642C3 must retain its original byte length"
	.endif
	.globl gText_Rom_2642DA
	.set gText_Rom_2642DA, gText_Rom_2642C3 + 0x17

	@ data/text/check_furniture.inc:18 Text_EmptyTrashCan
	.globl gText_Rom_2642E6
gText_Rom_2642E6: @ 0x082642E6
	.string "なかは からっぽ だ!{EOS}"
	.if (. - gText_Rom_2642E6) > 0xc
	.error "gText_Rom_2642E6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2642E6) < 0xc
	.space 0xc - (. - gText_Rom_2642E6)
	.endif

	@ data/text/check_furniture.inc:21 Text_ShopShelf
	.globl gText_Rom_2642F2
gText_Rom_2642F2: @ 0x082642F2
	.string "たくさんの ポケモン グッズが\nところせましと ならべられてる!{EOS}"
	.if (. - gText_Rom_2642F2) > 0x21
	.error "gText_Rom_2642F2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2642F2) < 0x21
	.space 0x21 - (. - gText_Rom_2642F2)
	.endif

	@ data/text/check_furniture.inc:25 Text_Blueprint
	.globl gText_Rom_264313
gText_Rom_264313: @ 0x08264313
	.string "なにかの せっけいず……?\nみても チンプンカンプン!{EOS}"
	.if (. - gText_Rom_264313) > 0x1c
	.error "gText_Rom_264313 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_264313) < 0x1c
	.space 0x1c - (. - gText_Rom_264313)
	.endif
	@ Embedded ROM bytes: file offset 0x26432F, size 0x10
	.byte 0x22, 0x40, 0x00, 0x00, 0x3F, 0x43, 0x26, 0x08, 0x00, 0x00, 0x19, 0x22, 0x40, 0x01, 0x00, 0x02
