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
	@ ANALYSIS: SEMANTIC_NUMERIC_MAP_THEME_TABLE
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
