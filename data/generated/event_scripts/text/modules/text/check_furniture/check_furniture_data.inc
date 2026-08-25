	@ data/text/check_furniture.inc:1 Text_PictureBookShelf
	.globl Text_PictureBookShelf
Text_PictureBookShelf: @ 0x0826426B
	.string "ポケモンえほんが そろってる!{EOS}"
	.if (. - Text_PictureBookShelf) > 0x10
	.error "Text_PictureBookShelf may not grow beyond its original slot"
	.endif
	.if (. - Text_PictureBookShelf) < 0x10
	.space 0x10 - (. - Text_PictureBookShelf)
	.endif

	@ data/text/check_furniture.inc:4 Text_BookShelf
	.globl Text_BookShelf
Text_BookShelf: @ 0x0826427B
	.string "いろんな ほんが いっぱいだ!{EOS}"
	.if (. - Text_BookShelf) > 0x10
	.error "Text_BookShelf may not grow beyond its original slot"
	.endif
	.if (. - Text_BookShelf) < 0x10
	.space 0x10 - (. - Text_BookShelf)
	.endif

	@ data/text/check_furniture.inc:7 Text_PokemonCenterBookShelf
	.globl Text_PokemonCenterBookShelf
Text_PokemonCenterBookShelf: @ 0x0826428B
	.string "ポケモンざっしが ならんでる!\p……「ポケモンのとも」\n……「ポケモン てちょう」\l……「かわいい ポケモン」{EOS}"
	.if (. - Text_PokemonCenterBookShelf) > 0x38
	.error "Text_PokemonCenterBookShelf may not grow beyond its original slot"
	.endif
	.if (. - Text_PokemonCenterBookShelf) < 0x38
	.space 0x38 - (. - Text_PokemonCenterBookShelf)
	.endif

	@ data/text/check_furniture.inc:13 Text_Vase
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Text_Vase
Text_Vase: @ 0x082642C3
	.string "たかそうな つぼが ある!\nのぞきこむと……\pなかは からっぽ だ!{EOS}"
	.if (. - Text_Vase) != 0x23
	.error "Text_Vase must retain its original byte length"
	.endif

	@ data/text/check_furniture.inc:18 Text_EmptyTrashCan
	.globl Text_EmptyTrashCan
Text_EmptyTrashCan: @ 0x082642E6
	.string "なかは からっぽ だ!{EOS}"
	.if (. - Text_EmptyTrashCan) > 0xc
	.error "Text_EmptyTrashCan may not grow beyond its original slot"
	.endif
	.if (. - Text_EmptyTrashCan) < 0xc
	.space 0xc - (. - Text_EmptyTrashCan)
	.endif

	@ data/text/check_furniture.inc:21 Text_ShopShelf
	.globl Text_ShopShelf
Text_ShopShelf: @ 0x082642F2
	.string "たくさんの ポケモン グッズが\nところせましと ならべられてる!{EOS}"
	.if (. - Text_ShopShelf) > 0x21
	.error "Text_ShopShelf may not grow beyond its original slot"
	.endif
	.if (. - Text_ShopShelf) < 0x21
	.space 0x21 - (. - Text_ShopShelf)
	.endif

	@ data/text/check_furniture.inc:25 Text_Blueprint
	.globl Text_Blueprint
Text_Blueprint: @ 0x08264313
	.string "なにかの せっけいず……?\nみても チンプンカンプン!{EOS}"
	.if (. - Text_Blueprint) > 0x1c
	.error "Text_Blueprint may not grow beyond its original slot"
	.endif
	.if (. - Text_Blueprint) < 0x1c
	.space 0x1c - (. - Text_Blueprint)
	.endif
	@ Embedded ROM bytes: file offset 0x26432F, size 0x10
	.byte 0x22, 0x40, 0x00, 0x00, 0x3F, 0x43, 0x26, 0x08, 0x00, 0x00, 0x19, 0x22, 0x40, 0x01, 0x00, 0x02
