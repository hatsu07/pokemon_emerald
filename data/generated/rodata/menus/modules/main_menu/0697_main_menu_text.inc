	.globl gText_Rom_4E8CCB
	.set gText_Rom_4E8CCB, gText_Rom_4E8CC8 + 0x3
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
