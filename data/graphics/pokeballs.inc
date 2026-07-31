@ Compressed 16x48 4bpp sprite sheets and 16-color palettes.
@ Files include their original 4-byte alignment padding.

	.globl gBallGfx_Poke
gBallGfx_Poke:
	.incbin "build/graphics/balls/poke.4bpp.lz"
    .balign 4, 0
	.globl gBallPal_Poke
gBallPal_Poke:
	.incbin "build/graphics/balls/poke_palette.gbapal.lz"
    .balign 4, 0

	.globl gBallGfx_Great
gBallGfx_Great:
	.incbin "build/graphics/balls/great.4bpp.lz"
    .balign 4, 0
	.globl gBallPal_Great
gBallPal_Great:
	.incbin "build/graphics/balls/great_palette.gbapal.lz"
    .balign 4, 0

	.globl gBallGfx_Safari
gBallGfx_Safari:
	.incbin "build/graphics/balls/safari.4bpp.lz"
    .balign 4, 0
	.globl gBallPal_Safari
gBallPal_Safari:
	.incbin "build/graphics/balls/safari_palette.gbapal.lz"
    .balign 4, 0

	.globl gBallGfx_Ultra
gBallGfx_Ultra:
	.incbin "build/graphics/balls/ultra.4bpp.lz"
    .balign 4, 0
	.globl gBallPal_Ultra
gBallPal_Ultra:
	.incbin "build/graphics/balls/ultra_palette.gbapal.lz"
    .balign 4, 0

	.globl gBallGfx_Master
gBallGfx_Master:
	.incbin "build/graphics/balls/master.4bpp.lz"
    .balign 4, 0
	.globl gBallPal_Master
gBallPal_Master:
	.incbin "build/graphics/balls/master_palette.gbapal.lz"
    .balign 4, 0

	.globl gBallGfx_Net
gBallGfx_Net:
	.incbin "build/graphics/balls/net.4bpp.lz"
    .balign 4, 0
	.globl gBallPal_Net
gBallPal_Net:
	.incbin "build/graphics/balls/net_palette.gbapal.lz"
    .balign 4, 0

	.globl gBallGfx_Dive
gBallGfx_Dive:
	.incbin "build/graphics/balls/dive.4bpp.lz"
    .balign 4, 0
	.globl gBallPal_Dive
gBallPal_Dive:
	.incbin "build/graphics/balls/dive_palette.gbapal.lz"
    .balign 4, 0

	.globl gBallGfx_Nest
gBallGfx_Nest:
	.incbin "build/graphics/balls/nest.4bpp.lz"
    .balign 4, 0
	.globl gBallPal_Nest
gBallPal_Nest:
	.incbin "build/graphics/balls/nest_palette.gbapal.lz"
    .balign 4, 0

	.globl gBallGfx_Repeat
gBallGfx_Repeat:
	.incbin "build/graphics/balls/repeat.4bpp.lz"
    .balign 4, 0
	.globl gBallPal_Repeat
gBallPal_Repeat:
	.incbin "build/graphics/balls/repeat_palette.gbapal.lz"
    .balign 4, 0

	.globl gBallGfx_Timer
gBallGfx_Timer:
	.incbin "build/graphics/balls/timer.4bpp.lz"
    .balign 4, 0
	.globl gBallPal_Timer
gBallPal_Timer:
	.incbin "build/graphics/balls/timer_palette.gbapal.lz"
    .balign 4, 0

	.globl gBallGfx_Luxury
gBallGfx_Luxury:
	.incbin "build/graphics/balls/luxury.4bpp.lz"
    .balign 4, 0
	.globl gBallPal_Luxury
gBallPal_Luxury:
	.incbin "build/graphics/balls/luxury_palette.gbapal.lz"
    .balign 4, 0

	.globl gBallGfx_Premier
gBallGfx_Premier:
	.incbin "build/graphics/balls/premier.4bpp.lz"
    .balign 4, 0
	.globl gBallPal_Premier
gBallPal_Premier:
	.incbin "build/graphics/balls/premier_palette.gbapal.lz"
    .balign 4, 0
