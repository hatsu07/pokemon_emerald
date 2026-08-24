	.globl gText_Rom_4E8CC0

	@ src/data/easy_chat/easy_chat_group_trainer.h:100 easy_chat_group_trainer_line_100 (+4 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_4E8CC0
gText_Rom_4E8CC0: @ 0x084E8CC0
	.string "ポケモンずかん{EOS}"
	.if (. - gText_Rom_4E8CC0) != 0x8
	.error "gText_Rom_4E8CC0 must retain its original byte length"
	.endif
	.globl gText_Rom_4E8CC8

	@ src/main_menu.c:275 gText_ContinueMenuTime (+3 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.

	.globl gText_Rom_4E8CC8
gText_Rom_4E8CC8: @ 0x084E8CC8
	.string "プレイじかん{EOS}"
	.if (. - gText_Rom_4E8CC8) != 0x7
	.error "gText_Rom_4E8CC8 must retain its original byte length"
	.endif
	@ Preserved byte immediately before General flower animation graphics.
	.byte 0x00

	.globl gTilesetAnims_General_Flower_Frame1
gTilesetAnims_General_Flower_Frame1: @ 0x084E8CD0
	.incbin "build/graphics/tilesets/primary/general/anim/flower/1.4bpp"

	.globl gTilesetAnims_General_Flower_Frame0
gTilesetAnims_General_Flower_Frame0: @ 0x084E8D50
	.incbin "build/graphics/tilesets/primary/general/anim/flower/0.4bpp"

	.globl gTilesetAnims_General_Flower_Frame2
gTilesetAnims_General_Flower_Frame2: @ 0x084E8DD0
	.incbin "build/graphics/tilesets/primary/general/anim/flower/2.4bpp"

	.globl tileset_anims_space_0
tileset_anims_space_0: @ 0x084E8E50
	.space 0x20
