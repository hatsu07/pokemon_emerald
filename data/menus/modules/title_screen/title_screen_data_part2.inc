	.globl gTitleScreenPressStart_Pal
gTitleScreenPressStart_Pal: @ 0x085176D4
	.incbin "build/graphics/priority_a/title_screen/press_start_palette.gbapal"
	.if (. - gTitleScreenPressStart_Pal) != 0x20
	.error "gTitleScreenPressStart_Pal exact asset size mismatch"
	.endif
	.globl gTitleScreenPressStart_Gfx
gTitleScreenPressStart_Gfx: @ 0x085176F4
	.incbin "build/graphics/priority_a/title_screen/press_start.4bpp.lz"
	.if (. - gTitleScreenPressStart_Gfx) != 0x3AC
	.error "gTitleScreenPressStart_Gfx exact asset size mismatch"
	.endif
