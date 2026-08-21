	@ pret/pokeemerald-jp direct xref for 0x085570CC: pokemon_icon.s: CreateMonIcon, sub_080D2618
	.globl sMonIconOamData
sMonIconOamData: @ 0x085570CC
	@ Mon icon OAM data (6-byte OamData plus linker alignment).
	.2byte 0x0000, 0x8000, 0x0400, 0x0000

	.globl sMonIconAnim_0
sMonIconAnim_0: @ 0x085570D4
	@ Mon icon animation 0, fastest-to-slowest order.
	.2byte 0x0000, 0x0006, 0x0001, 0x0006, 0xFFFE, 0x0000

	.globl sMonIconAnim_1
sMonIconAnim_1: @ 0x085570E0
	@ Mon icon animation 1, fastest-to-slowest order.
	.2byte 0x0000, 0x0008, 0x0001, 0x0008, 0xFFFE, 0x0000

	.globl sMonIconAnim_2
sMonIconAnim_2: @ 0x085570EC
	@ Mon icon animation 2, fastest-to-slowest order.
	.2byte 0x0000, 0x000E, 0x0001, 0x000E, 0xFFFE, 0x0000

	.globl sMonIconAnim_3
sMonIconAnim_3: @ 0x085570F8
	@ Mon icon animation 3, fastest-to-slowest order.
	.2byte 0x0000, 0x0016, 0x0001, 0x0016, 0xFFFE, 0x0000

	.globl sMonIconAnim_4
sMonIconAnim_4: @ 0x08557104
	@ Mon icon animation 4, fastest-to-slowest order.
	.2byte 0x0000, 0x001D, 0x0000, 0x001D, 0xFFFE, 0x0000

	.globl sMonIconAnims
sMonIconAnims: @ 0x08557110
	.4byte sMonIconAnim_0
	.4byte sMonIconAnim_1
	.4byte sMonIconAnim_2
	.4byte sMonIconAnim_3
	.4byte sMonIconAnim_4

	.globl sMonIconAffineAnim_0
sMonIconAffineAnim_0: @ 0x08557124
	@ Mon icon normal affine animation.
	.2byte 0x0000, 0x0000, 0x0A00, 0x0000, 0x7FFF, 0x0000, 0x0000, 0x0000

	.globl sMonIconAffineAnim_1
sMonIconAffineAnim_1: @ 0x08557134
	@ Mon icon shrink affine animation.
	.2byte 0xFFFE, 0xFFFE, 0x7A00, 0x0000, 0x7FFF, 0x0000, 0x0000, 0x0000

	.globl sMonIconAffineAnims
sMonIconAffineAnims: @ 0x08557144
	.4byte sMonIconAffineAnim_0
	.4byte sMonIconAffineAnim_1

	.globl sSpriteImageSizes
sSpriteImageSizes: @ 0x0855714C
	@ 3x4 sprite image byte-size table for square/horizontal/vertical OAM shapes.
	.2byte 0x0020, 0x0080, 0x0200, 0x0800, 0x0040, 0x0080, 0x0100, 0x0400
	.2byte 0x0040, 0x0080, 0x0100, 0x0400

	.globl gPokemonRecord_Rom_557164
gPokemonRecord_Rom_557164: @ 0x08557164
	.space 0x2, 0xFE
	@ pret/pokeemerald-jp direct xref for 0x08557166: fldeff_cut.s: SetUpFieldMove_Cut
	.globl sHyperCutStruct
sHyperCutStruct: @ 0x08557166
	@ 16 Hyper Cutter perimeter entries (4 bytes each).
	.2byte 0x0001, 0xFEFF, 0x0001, 0xFE00, 0x0002, 0xFE01, 0x0003, 0xFE02
	.2byte 0x0003, 0xFFFE, 0x0001, 0xFF02, 0x0003, 0x00FE, 0x0004, 0x0002
	.2byte 0x0006, 0x01FE, 0x0007, 0x0102, 0x0009, 0x02FE, 0x0007, 0x02FF
	.2byte 0x0007, 0x0200, 0x0008, 0x0201, 0x0009, 0x0202, 0x0009, 0x0000

	.globl sOamData_CutGrass
sOamData_CutGrass: @ 0x085571A6
	@ Cut-grass OamData.
	.2byte 0x0000, 0x1401, 0x0000

	.globl sSpriteAnim_CutGrass
sSpriteAnim_CutGrass: @ 0x085571AC
	@ Cut-grass looping sprite animation.
	.2byte 0x0000, 0x001E, 0xFFFE

	.align 2, 0

	.globl sSpriteAnimTable_CutGrass
sSpriteAnimTable_CutGrass: @ 0x085571B4
	.4byte sSpriteAnim_CutGrass

	.globl sSpriteImageTable_CutGrass
sSpriteImageTable_CutGrass: @ 0x085571B8
	@ Local JP Cut Grass gfx pointer.
	.4byte gObjectEventPal_JP_084CEC8C + 0x620
	.4byte 0x20

	.globl gSpritePalette_CutGrass
gSpritePalette_CutGrass: @ 0x085571C0
	@ Local JP Cut Grass palette pointer.
	.4byte gObjectEventPal_JP_084CEC8C + 0x660
	.2byte 0x1000
	.2byte 0

	.globl gFldeffCutData_085571C8
gFldeffCutData_085571C8: @ 0x085571C8
	@ analyzed canonical ROM range 0x085571C8-0x085571DF
sSpriteTemplate_085571C8: @ 0x085571C8
	rodata_sprite_template 0xFFFF, 0x1000, 0x085571A4, sSpriteAnimTable_CutGrass, sSpriteImageTable_CutGrass, gDummySpriteAffineAnimTable, CutGrassSpriteCallback1
	@ pret/pokeemerald-jp direct xref for 0x085571E0: map_name_popup.s: LoadMapNamePopUpWindowBg
	.globl sMapPopUp_Table
sMapPopUp_Table: @ 0x085571E0
	.globl sMapPopUp_Gfx_Wood
sMapPopUp_Gfx_Wood: @ 0x085571E0
	.incbin "build/graphics/map_popup/wood.4bpp"
	.globl sMapPopUp_Gfx_Marble
sMapPopUp_Gfx_Marble: @ 0x085575A0
	.incbin "build/graphics/map_popup/marble.4bpp"
	.globl sMapPopUp_Gfx_Stone
sMapPopUp_Gfx_Stone: @ 0x08557960
	.incbin "build/graphics/map_popup/stone.4bpp"
	.globl sMapPopUp_Gfx_Brick
sMapPopUp_Gfx_Brick: @ 0x08557D20
	.incbin "build/graphics/map_popup/brick.4bpp"
	.globl sMapPopUp_Gfx_Underwater
sMapPopUp_Gfx_Underwater: @ 0x085580E0
	.incbin "build/graphics/map_popup/underwater.4bpp"
	.globl sMapPopUp_Gfx_Stone2
sMapPopUp_Gfx_Stone2: @ 0x085584A0
	.incbin "build/graphics/map_popup/stone2.4bpp"

	.globl sMapPopUp_OutlineTable
sMapPopUp_OutlineTable: @ 0x08558860
	.globl sMapPopUp_OutlineGfx_Wood
sMapPopUp_OutlineGfx_Wood: @ 0x08558860
	.incbin "build/graphics/map_popup/wood_outline.4bpp"
	.globl sMapPopUp_OutlineGfx_Marble
sMapPopUp_OutlineGfx_Marble: @ 0x08558C20
	.incbin "build/graphics/map_popup/marble_outline.4bpp"
	.globl sMapPopUp_OutlineGfx_Stone
sMapPopUp_OutlineGfx_Stone: @ 0x08558FE0
	.incbin "build/graphics/map_popup/stone_outline.4bpp"
	.globl sMapPopUp_OutlineGfx_Brick
sMapPopUp_OutlineGfx_Brick: @ 0x085593A0
	.incbin "build/graphics/map_popup/brick_outline.4bpp"
	.globl sMapPopUp_OutlineGfx_Underwater
sMapPopUp_OutlineGfx_Underwater: @ 0x08559760
	.incbin "build/graphics/map_popup/underwater_outline.4bpp"
	.globl sMapPopUp_OutlineGfx_Stone2
sMapPopUp_OutlineGfx_Stone2: @ 0x08559B20
	.incbin "build/graphics/map_popup/stone2_outline.4bpp"

	.globl sMapPopUp_PaletteTable
sMapPopUp_PaletteTable: @ 0x08559EE0
	.globl sMapPopUp_Pal_Wood
sMapPopUp_Pal_Wood: @ 0x08559EE0
	.incbin "build/graphics/map_popup/wood.gbapal"
	.globl sMapPopUp_Pal_Marble
sMapPopUp_Pal_Marble: @ 0x08559F00
	.incbin "build/graphics/map_popup/marble.gbapal"
	.globl sMapPopUp_Pal_Stone
sMapPopUp_Pal_Stone: @ 0x08559F20
	.incbin "build/graphics/map_popup/stone.gbapal"
	.globl sMapPopUp_Pal_Brick
sMapPopUp_Pal_Brick: @ 0x08559F40
	.incbin "build/graphics/map_popup/brick.gbapal"
	.globl sMapPopUp_Pal_Underwater
sMapPopUp_Pal_Underwater: @ 0x08559F60
	.incbin "build/graphics/map_popup/underwater.gbapal"
	.globl sMapPopUp_Pal_Stone2
sMapPopUp_Pal_Stone2: @ 0x08559F80
	.incbin "build/graphics/map_popup/stone2.gbapal"

	.globl sMapPopUp_Palette_Underwater
sMapPopUp_Palette_Underwater: @ 0x08559FA0
	.incbin "build/graphics/map_popup/underwater_extra.gbapal"

	.globl sMapSectionToThemeId_JP
sMapSectionToThemeId_JP: @ 0x08559FC0
	@ JP map-section-to-popup-theme table; 0..5 are Wood/Marble/Stone/Brick/Underwater/Stone2.
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x01, 0x01, 0x01, 0x03, 0x01, 0x03, 0x01, 0x03
	.byte 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04
	.byte 0x04, 0x04, 0x05, 0x05, 0x05, 0x05, 0x05, 0x02, 0x02, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x02
	.byte 0x02, 0x02, 0x02, 0x02, 0x02, 0x05, 0x02, 0x00, 0x02, 0x00, 0x02, 0x02, 0x00, 0x00, 0x02, 0x05
	.byte 0x02, 0x02, 0x02, 0x02, 0x00, 0x02, 0x02, 0x01, 0x02, 0x02, 0x02, 0x00, 0x00, 0x02, 0x02, 0x05
	.byte 0x02, 0x05, 0x05, 0x05, 0x02, 0x02, 0x02, 0x01

	.globl sText_PyramidFloor1_JP
sText_PyramidFloor1_JP: @ 0x0855A028
	@ "ピラミッド1だんめ"
	.byte 0x9C, 0x77, 0x70, 0xA0, 0x95, 0xA2, 0x41, 0x2E, 0x22, 0xFF

	.globl sText_PyramidFloor2_JP
sText_PyramidFloor2_JP: @ 0x0855A032
	@ "ピラミッド2だんめ"
	.byte 0x9C, 0x77, 0x70, 0xA0, 0x95, 0xA3, 0x41, 0x2E, 0x22, 0xFF

	.globl sText_PyramidFloor3_JP
sText_PyramidFloor3_JP: @ 0x0855A03C
	@ "ピラミッド3だんめ"
	.byte 0x9C, 0x77, 0x70, 0xA0, 0x95, 0xA4, 0x41, 0x2E, 0x22, 0xFF

	.globl sText_PyramidFloor4_JP
sText_PyramidFloor4_JP: @ 0x0855A046
	@ "ピラミッド4だんめ"
	.byte 0x9C, 0x77, 0x70, 0xA0, 0x95, 0xA5, 0x41, 0x2E, 0x22, 0xFF

	.globl sText_PyramidFloor5_JP
sText_PyramidFloor5_JP: @ 0x0855A050
	@ "ピラミッド5だんめ"
	.byte 0x9C, 0x77, 0x70, 0xA0, 0x95, 0xA6, 0x41, 0x2E, 0x22, 0xFF

	.globl sText_PyramidFloor6_JP
sText_PyramidFloor6_JP: @ 0x0855A05A
	@ "ピラミッド6だんめ"
	.byte 0x9C, 0x77, 0x70, 0xA0, 0x95, 0xA7, 0x41, 0x2E, 0x22, 0xFF

	.globl sText_PyramidFloor7_JP
sText_PyramidFloor7_JP: @ 0x0855A064
	@ "ピラミッド7だんめ"
	.byte 0x9C, 0x77, 0x70, 0xA0, 0x95, 0xA8, 0x41, 0x2E, 0x22, 0xFF

	.globl sText_Pyramid_JP
sText_Pyramid_JP: @ 0x0855A06E
	@ "ピラミッド"
	.byte 0x9C, 0x77, 0x70, 0xA0, 0x95, 0xFF

	.globl sBattlePyramid_MapHeaderStrings
sBattlePyramid_MapHeaderStrings: @ 0x0855A074
	.4byte sText_PyramidFloor1_JP
	.4byte sText_PyramidFloor2_JP
	.4byte sText_PyramidFloor3_JP
	.4byte sText_PyramidFloor4_JP
	.4byte sText_PyramidFloor5_JP
	.4byte sText_PyramidFloor6_JP
	.4byte sText_PyramidFloor7_JP
	.4byte sText_Pyramid_JP

	.globl sRotatingBall_Pal
sRotatingBall_Pal: @ 0x0855A094
	.incbin "build/graphics/bag/rotating_ball.gbapal"

	.globl sRotatingBall_Gfx
sRotatingBall_Gfx: @ 0x0855A0B4
	.incbin "build/graphics/bag/rotating_ball.4bpp"

	.globl sCherryUnused
sCherryUnused: @ 0x0855A134
	.incbin "build/graphics/unused/cherry.4bpp"

	.globl sCherryUnused_Pal
sCherryUnused_Pal: @ 0x0855A5B4
	.incbin "build/graphics/unused/cherry.gbapal"

	.globl sBagOamData
sBagOamData: @ 0x0855A5D4
	@ Bag OAM data plus alignment.
	.2byte 0x0100, 0xC000, 0x0400, 0x0000

	.globl sSpriteAnim_Bag_Closed
sSpriteAnim_Bag_Closed: @ 0x0855A5DC
	@ Bag pocket sprite animation.
	.2byte 0x0000, 0x0004, 0xFFFF, 0x0000

	.globl sSpriteAnim_Bag_Items
sSpriteAnim_Bag_Items: @ 0x0855A5E4
	@ Bag pocket sprite animation.
	.2byte 0x0040, 0x0004, 0xFFFF, 0x0000

	.globl sSpriteAnim_Bag_KeyItems
sSpriteAnim_Bag_KeyItems: @ 0x0855A5EC
	@ Bag pocket sprite animation.
	.2byte 0x0080, 0x0004, 0xFFFF, 0x0000

	.globl sSpriteAnim_Bag_Pokeballs
sSpriteAnim_Bag_Pokeballs: @ 0x0855A5F4
	@ Bag pocket sprite animation.
	.2byte 0x00C0, 0x0004, 0xFFFF, 0x0000

	.globl sSpriteAnim_Bag_TMsHMs
sSpriteAnim_Bag_TMsHMs: @ 0x0855A5FC
	@ Bag pocket sprite animation.
	.2byte 0x0100, 0x0004, 0xFFFF, 0x0000

	.globl sSpriteAnim_Bag_Berries
sSpriteAnim_Bag_Berries: @ 0x0855A604
	@ Bag pocket sprite animation.
	.2byte 0x0140, 0x0004, 0xFFFF, 0x0000

	.globl sBagSpriteAnimTable
sBagSpriteAnimTable: @ 0x0855A60C
	.4byte sSpriteAnim_Bag_Closed
	.4byte sSpriteAnim_Bag_Items
	.4byte sSpriteAnim_Bag_Pokeballs
	.4byte sSpriteAnim_Bag_TMsHMs
	.4byte sSpriteAnim_Bag_Berries
	.4byte sSpriteAnim_Bag_KeyItems

	.globl sSpriteAffineAnim_BagNormal
sSpriteAffineAnim_BagNormal: @ 0x0855A624
	@ Normal bag affine animation.
	.2byte 0x0100, 0x0100, 0x0000, 0x0000, 0x7FFF, 0x0000, 0x0000, 0x0000

	.globl sSpriteAffineAnim_BagShake
sSpriteAffineAnim_BagShake: @ 0x0855A634
	@ Bag shake affine animation.
	.2byte 0x0000, 0x0000, 0x02FE, 0x0000, 0x0000, 0x0000, 0x0402, 0x0000
	.2byte 0x0000, 0x0000, 0x04FE, 0x0000, 0x0000, 0x0000, 0x0202, 0x0000
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000

	.globl sBagAffineAnimCmds
sBagAffineAnimCmds: @ 0x0855A65C
	.4byte sSpriteAffineAnim_BagNormal
	.4byte sSpriteAffineAnim_BagShake

	.globl gBagMaleSpriteSheet
gBagMaleSpriteSheet: @ 0x0855A664
	@ Local JP male bag gfx pointer.
	.4byte gLz77Asset_08D99030
	.2byte 0x3000
	.2byte 0x0064

	.globl gBagFemaleSpriteSheet
gBagFemaleSpriteSheet: @ 0x0855A66C
	@ Local JP female bag gfx pointer.
	.4byte gLz77Asset_08D99BAC
	.2byte 0x3000
	.2byte 0x0064

	.globl gBagPaletteTable
gBagPaletteTable: @ 0x0855A674
	@ Local JP bag palette pointer.
	.4byte gLz77Asset_08D9A70C
	.2byte 0x0064
	.2byte 0

	.globl sBagSpriteTemplate
sBagSpriteTemplate: @ 0x0855A67C
	rodata_sprite_template 0x0064, 0x0064, sBagOamData, sBagSpriteAnimTable, 0, sBagAffineAnimCmds, SpriteCallbackDummy

	.globl sRotatingBallOamData
sRotatingBallOamData: @ 0x0855A694
	@ Rotating pocket-switch ball OAM data plus alignment.
	.2byte 0x0000, 0x4800, 0x0800, 0x0000

	.globl sSpriteAffineAnim_RotatingBallStationary
sSpriteAffineAnim_RotatingBallStationary: @ 0x0855A69C
	@ Stationary rotating-ball sprite animation.
	.2byte 0x0000, 0x0000, 0xFFFF, 0x0000

	.globl sRotatingBallSpriteAnimTable
sRotatingBallSpriteAnimTable: @ 0x0855A6A4
	.4byte sSpriteAffineAnim_RotatingBallStationary

	.globl sSpriteAffineAnim_RotatingBallRotation1
sSpriteAffineAnim_RotatingBallRotation1: @ 0x0855A6A8
	@ Clockwise rotating-ball affine animation.
	.2byte 0x0000, 0x0000, 0x1008, 0x0000, 0x7FFF, 0x0000, 0x0000, 0x0000

	.globl sSpriteAffineAnim_RotatingBallRotation2
sSpriteAffineAnim_RotatingBallRotation2: @ 0x0855A6B8
	@ Counter-clockwise rotating-ball affine animation.
	.2byte 0x0000, 0x0000, 0x10F8, 0x0000, 0x7FFF, 0x0000, 0x0000, 0x0000

	.globl sRotatingBallAnimCmds
sRotatingBallAnimCmds: @ 0x0855A6C8
	.4byte sSpriteAffineAnim_RotatingBallRotation1

	.globl sRotatingBallAnimCmds_FullRotation
sRotatingBallAnimCmds_FullRotation: @ 0x0855A6CC
	.4byte sSpriteAffineAnim_RotatingBallRotation2

	.globl sRotatingBallTable
sRotatingBallTable: @ 0x0855A6D0
	.4byte sRotatingBall_Gfx
	.2byte 0x0080
	.2byte 0x0065

	.globl sRotatingBallPaletteTable
sRotatingBallPaletteTable: @ 0x0855A6D8
	.4byte sRotatingBall_Pal
	.2byte 0x0065
	.2byte 0

	.globl sRotatingBallSpriteTemplate
sRotatingBallSpriteTemplate: @ 0x0855A6E0
	rodata_sprite_template 0x0065, 0x0065, sRotatingBallOamData, sRotatingBallSpriteAnimTable, 0, sRotatingBallAnimCmds, SpriteCB_SwitchPocketRotatingBallInit

	.globl sBerryPicOamData
sBerryPicOamData: @ 0x0855A6F8
	@ Berry picture OAM data plus alignment.
	.2byte 0x0000, 0xC000, 0x7400, 0x0000

	.globl sBerryPicRotatingOamData
sBerryPicRotatingOamData: @ 0x0855A700
	@ Rotating berry picture OAM data plus alignment.
	.2byte 0x0300, 0xC000, 0x7000, 0x0000

	.globl sAnim_BerryPic
sAnim_BerryPic: @ 0x0855A708
	@ Berry picture stationary sprite animation.
	.2byte 0x0000, 0x0000, 0xFFFF, 0x0000

	.globl sBerryPicSpriteAnimTable
sBerryPicSpriteAnimTable: @ 0x0855A710
	.4byte sAnim_BerryPic

	.globl sBerryPicSpriteImageTable
sBerryPicSpriteImageTable: @ 0x0855A714
	.4byte 0x0201C000
	.4byte 0x0800

	.globl sBerryPicSpriteTemplate
sBerryPicSpriteTemplate: @ 0x0855A71C
	rodata_sprite_template 0xFFFF, 0x7544, sBerryPicOamData, sBerryPicSpriteAnimTable, sBerryPicSpriteImageTable, gDummySpriteAffineAnimTable, SpriteCallbackDummy

	.globl sSpriteAffineAnim_BerryPicRotation1
sSpriteAffineAnim_BerryPicRotation1: @ 0x0855A734
	@ Berry picture rotation affine animation 1.
	.2byte 0xFFFF, 0xFFFF, 0x60FD, 0x0000, 0x0000, 0x0000, 0x1000, 0x0000
	.2byte 0xFFFE, 0xFFFE, 0x40FF, 0x0000, 0xFFF8, 0x0000, 0x1000, 0x0000
	.2byte 0x0000, 0xFFF8, 0x1000, 0x0000, 0x0100, 0x0100, 0x0000, 0x0000
	.2byte 0x7FFE, 0x0000, 0x0000, 0x0000

	.globl sSpriteAffineAnim_BerryPicRotation2
sSpriteAffineAnim_BerryPicRotation2: @ 0x0855A76C
	@ Berry picture rotation affine animation 2.
	.2byte 0xFFFF, 0xFFFF, 0x6003, 0x0000, 0x0000, 0x0000, 0x1000, 0x0000
	.2byte 0xFFFE, 0xFFFE, 0x4001, 0x0000, 0xFFF8, 0x0000, 0x1000, 0x0000
	.2byte 0x0000, 0xFFF8, 0x1000, 0x0000, 0x0100, 0x0100, 0x0000, 0x0000
	.2byte 0x7FFE, 0x0000, 0x0000, 0x0000

	.globl sBerryPicRotatingAnimCmds
sBerryPicRotatingAnimCmds: @ 0x0855A7A4
	.4byte sSpriteAffineAnim_BerryPicRotation1
	.4byte sSpriteAffineAnim_BerryPicRotation2

	.globl gItemMenuIconsData_0855A7AC
gItemMenuIconsData_0855A7AC: @ 0x0855A7AC
	@ analyzed canonical ROM range 0x0855A7AC-0x0855A7C3
sSpriteTemplate_0855A7AC: @ 0x0855A7AC
	rodata_sprite_template 0xFFFF, 0x7544, 0x0855A700, 0x0855A710, 0x0855A714, 0x0855A7A4, SpriteCallbackDummy
	@ pret/pokeemerald-jp direct xref for 0x0855A7C4: item_menu_icons.s: LoadBerryGfx
	@ item_menu_icons.s: LoadBerryGfx indexes this table with an 8-byte stride
	@ 43 entries: compressed berry tiles pointer, compressed palette pointer
	.globl gBerryPicTable
gBerryPicTable: @ 0x0855A7C4
	@ analyzed canonical ROM range 0x0855A7C4-0x0855A91B
	.4byte gBerryPic_Cheri, gBerryPalette_Cheri @ Cheri
	.4byte gBerryPic_Chesto, gBerryPalette_Chesto @ Chesto
	.4byte gBerryPic_Pecha, gBerryPalette_Pecha @ Pecha
	.4byte gBerryPic_Rawst, gBerryPalette_Rawst @ Rawst
	.4byte gBerryPic_Aspear, gBerryPalette_Aspear @ Aspear
	.4byte gBerryPic_Leppa, gBerryPalette_Leppa @ Leppa
	.4byte gBerryPic_Oran, gBerryPalette_Oran @ Oran
	.4byte gBerryPic_Persim, gBerryPalette_Persim @ Persim
	.4byte gBerryPic_Lum, gBerryPalette_Lum @ Lum
	.4byte gBerryPic_Sitrus, gBerryPalette_Sitrus @ Sitrus
	.4byte gBerryPic_Figy, gBerryPalette_Figy @ Figy
	.4byte gBerryPic_Wiki, gBerryPalette_Wiki @ Wiki
	.4byte gBerryPic_Mago, gBerryPalette_Mago @ Mago
	.4byte gBerryPic_Aguav, gBerryPalette_Aguav @ Aguav
	.4byte gBerryPic_Iapapa, gBerryPalette_Iapapa @ Iapapa
	.4byte gBerryPic_Razz, gBerryPalette_Razz @ Razz
	.4byte gBerryPic_Bluk, gBerryPalette_Bluk @ Bluk
	.4byte gBerryPic_Nanab, gBerryPalette_Nanab @ Nanab
	.4byte gBerryPic_Wepear, gBerryPalette_Wepear @ Wepear
	.4byte gBerryPic_Pinap, gBerryPalette_Pinap @ Pinap
	.4byte gBerryPic_Pomeg, gBerryPalette_Pomeg @ Pomeg
	.4byte gBerryPic_Kelpsy, gBerryPalette_Kelpsy @ Kelpsy
	.4byte gBerryPic_Qualot, gBerryPalette_Qualot @ Qualot
	.4byte gBerryPic_Hondew, gBerryPalette_Hondew @ Hondew
	.4byte gBerryPic_Grepa, gBerryPalette_Grepa @ Grepa
	.4byte gBerryPic_Tamato, gBerryPalette_Tamato @ Tamato
	.4byte gBerryPic_Cornn, gBerryPalette_Cornn @ Cornn
	.4byte gBerryPic_Magost, gBerryPalette_Magost @ Magost
	.4byte gBerryPic_Rabuta, gBerryPalette_Rabuta @ Rabuta
	.4byte gBerryPic_Nomel, gBerryPalette_Nomel @ Nomel
	.4byte gBerryPic_Spelon, gBerryPalette_Spelon @ Spelon
	.4byte gBerryPic_Pamtre, gBerryPalette_Pamtre @ Pamtre
	.4byte gBerryPic_Watmel, gBerryPalette_Watmel @ Watmel
	.4byte gBerryPic_Durin, gBerryPalette_Durin @ Durin
	.4byte gBerryPic_Belue, gBerryPalette_Belue @ Belue
	.4byte gBerryPic_Liechi, gBerryPalette_Liechi @ Liechi
	.4byte gBerryPic_Ganlon, gBerryPalette_Ganlon @ Ganlon
	.4byte gBerryPic_Salac, gBerryPalette_Salac @ Salac
	.4byte gBerryPic_Petaya, gBerryPalette_Petaya @ Petaya
	.4byte gBerryPic_Apicot, gBerryPalette_Apicot @ Apicot
	.4byte gBerryPic_Lansat, gBerryPalette_Lansat @ Lansat
	.4byte gBerryPic_Starf, gBerryPalette_Starf @ Starf
	.4byte gBerryPic_Enigma, gBerryPalette_Enigma @ Enigma
	@ pret/pokeemerald-jp direct xref for 0x0855A91C: berry_tag_screen.s: LoadBerryTagGfx
	.globl gBerryCheckCircleSpriteSheet
gBerryCheckCircleSpriteSheet: @ 0x0855A91C
	@ Local JP Berry Check Circle gfx pointer.
	.4byte gBerryCheckCircle_Gfx
	.2byte 0x0800
	.2byte 0x2710

	.globl gBerryCheckCirclePaletteTable
gBerryCheckCirclePaletteTable: @ 0x0855A924
	@ Local JP Berry Check Circle palette pointer.
	.4byte gBerryCheck_Pal
	.2byte 0x2710
	.2byte 0

	.globl sBerryCheckCircleOamData
sBerryCheckCircleOamData: @ 0x0855A92C
	@ Berry check-circle OAM data plus alignment.
	.2byte 0x0000, 0x8000, 0x0400, 0x0000

	.globl sSpriteAnim_BerryCheckCircle
sSpriteAnim_BerryCheckCircle: @ 0x0855A934
	@ Berry check-circle stationary animation.
	.2byte 0x0000, 0x0000, 0xFFFF, 0x0000

	.globl sBerryCheckCircleSpriteAnimTable
sBerryCheckCircleSpriteAnimTable: @ 0x0855A93C
	.4byte sSpriteAnim_BerryCheckCircle

	.globl sBerryCheckCircleSpriteTemplate
sBerryCheckCircleSpriteTemplate: @ 0x0855A940
	rodata_sprite_template 0x2710, 0x2710, sBerryCheckCircleOamData, sBerryCheckCircleSpriteAnimTable, 0, gDummySpriteAffineAnimTable, 0x08007141

	.globl gHorizontalLungeSpriteTemplate
gHorizontalLungeSpriteTemplate: @ 0x0855A958
	@ Horizontal lunge callback pointer preserved from local JP ROM.
	rodata_sprite_template 0, 0, gDummyOamData, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, 0x080D50E5

	.globl gVerticalDipSpriteTemplate
gVerticalDipSpriteTemplate: @ 0x0855A970
	@ Vertical dip callback pointer preserved from local JP ROM.
	rodata_sprite_template 0, 0, gDummyOamData, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, 0x080D517D

	.globl gSlideMonToOriginalPosSpriteTemplate
gSlideMonToOriginalPosSpriteTemplate: @ 0x0855A988
	@ Slide-to-original callback pointer preserved from local JP ROM.
	rodata_sprite_template 0, 0, gDummyOamData, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, 0x080D51ED

	.globl gSlideMonToOffsetSpriteTemplate
gSlideMonToOffsetSpriteTemplate: @ 0x0855A9A0
	@ Slide-to-offset callback pointer preserved from local JP ROM.
	rodata_sprite_template 0, 0, gDummyOamData, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, 0x080D5319

	.globl gSlideMonToOffsetAndBackSpriteTemplate
gSlideMonToOffsetAndBackSpriteTemplate: @ 0x0855A9B8
	@ Slide-to-offset-and-back callback pointer preserved from local JP ROM.
	rodata_sprite_template 0, 0, gDummyOamData, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, 0x080D53CD
