.if .L__inc_fragment_select_53efa54ccaca == 1

	@ src/berry_tag_screen.c:177 sText_SizeSlash
	.globl sText_SizeSlash
sText_SizeSlash: @ 0x085C977D
	.string "おおきさ{EOS}"
	.if (. - sText_SizeSlash) > 0x5
	.error "sText_SizeSlash may not grow beyond its original slot"
	.endif
	.if (. - sText_SizeSlash) < 0x5
	.space 0x5 - (. - sText_SizeSlash)
	.endif

	@ src/berry_tag_screen.c:178 sText_FirmSlash
	.globl sText_FirmSlash
sText_FirmSlash: @ 0x085C9782
	.string "かたさ{EOS}"
	.if (. - sText_FirmSlash) > 0x4
	.error "sText_FirmSlash may not grow beyond its original slot"
	.endif
	.if (. - sText_FirmSlash) < 0x4
	.space 0x4 - (. - sText_FirmSlash)
	.endif

	@ asm/berry_tag_screen.s:684 sub_0817804C
	.globl gText_Rom_5C9786
gText_Rom_5C9786: @ 0x085C9786
	.string "{0xFD}{0x02},{0xFD}{0x03}cm{EOS}"
	.if (. - gText_Rom_5C9786) > 0x8
	.error "gText_Rom_5C9786 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9786) < 0x8
	.space 0x8 - (. - gText_Rom_5C9786)
	.endif

	@ asm/berry_tag_screen.s:752 PrintBerryFirmness (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C978E
gText_Rom_5C978E: @ 0x085C978E
	.string "とても　やわらかい{EOS}"
	.if (. - gText_Rom_5C978E) != 0xa
	.error "gText_Rom_5C978E must retain its original byte length"
	.endif

	@ asm/berry_tag_screen.s:752 PrintBerryFirmness (+1 aliases)
	.globl gText_Rom_5C9798
gText_Rom_5C9798: @ 0x085C9798
	.string "やわらかい{EOS}"
	.if (. - gText_Rom_5C9798) > 0x6
	.error "gText_Rom_5C9798 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9798) < 0x6
	.space 0x6 - (. - gText_Rom_5C9798)
	.endif

	@ asm/berry_tag_screen.s:752 PrintBerryFirmness (+1 aliases)
	.globl gText_Rom_5C979E
gText_Rom_5C979E: @ 0x085C979E
	.string "かたい{EOS}"
	.if (. - gText_Rom_5C979E) > 0x4
	.error "gText_Rom_5C979E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C979E) < 0x4
	.space 0x4 - (. - gText_Rom_5C979E)
	.endif

	@ asm/berry_tag_screen.s:752 PrintBerryFirmness (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C97A2
gText_Rom_5C97A2: @ 0x085C97A2
	.string "とても　かたい{EOS}"
	.if (. - gText_Rom_5C97A2) != 0x8
	.error "gText_Rom_5C97A2 must retain its original byte length"
	.endif

	@ asm/berry_tag_screen.s:752 PrintBerryFirmness (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C97AA
gText_Rom_5C97AA: @ 0x085C97AA
	.string "とてつもなく　かたい{EOS}"
	.if (. - gText_Rom_5C97AA) != 0xb
	.error "gText_Rom_5C97AA must retain its original byte length"
	.endif

	@ src/berry_tag_screen.c:180 sText_NumberVar1Var2
	.globl sText_NumberVar1Var2
sText_NumberVar1Var2: @ 0x085C97B5
	.string "{NO}{STR_VAR_1} {STR_VAR_2}{EOS}"
	.if (. - sText_NumberVar1Var2) > 0x8
	.error "sText_NumberVar1Var2 may not grow beyond its original slot"
	.endif
	.if (. - sText_NumberVar1Var2) < 0x8
	.space 0x8 - (. - sText_NumberVar1Var2)
	.endif

	@ src/berry_tag_screen.c:181 sText_BerryTag
	.globl sText_BerryTag
sText_BerryTag: @ 0x085C97BD
	.string "きのみのタグ{EOS}"
	.if (. - sText_BerryTag) > 0x7
	.error "sText_BerryTag may not grow beyond its original slot"
	.endif
	.if (. - sText_BerryTag) < 0x7
	.space 0x7 - (. - sText_BerryTag)
	.endif
.elseif .L__inc_fragment_select_53efa54ccaca == 2
	@ ANALYSIS: RAW_RANGE offset=0x5CD061, size=0x7
	.byte 0x01, 0x06, 0xFF, 0x01, 0x05, 0xFF, 0x00
	@ pret/pokeemerald-jp direct xref for 0x085CD068: berry_tag_screen.s: AddBerryTagTextToBg0
	.globl gBerryTagScreenData_085CD068
gBerryTagScreenData_085CD068: @ 0x085CD068
	@ analyzed canonical ROM range 0x085CD068-0x085CD077
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x10 entries=8
	.2byte 0x01F0, 0x0000, 0x11E1, 0x0000, 0x21D2, 0x0000, 0x31C3, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x085CD078: berry_tag_screen.s: PrintMysteryMenuText
	.globl gBerryTagScreenData_085CD078
gBerryTagScreenData_085CD078: @ 0x085CD078
	@ analyzed canonical ROM range 0x085CD078-0x085CD097
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x20 bytes=32
	.byte 0xFF, 0x7F, 0xFF, 0x7F, 0x8C, 0x31, 0x5A, 0x67, 0x3C, 0x04, 0xFF, 0x3A, 0x64, 0x06, 0xD2, 0x4B
	.byte 0x46, 0x65, 0x14, 0x7B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x17, 0x22, 0x88, 0x00, 0x7D, 0x57
	@ pret/pokeemerald-jp direct xref for 0x085CD098: berry_tag_screen.s: PrintTextInBerryTagScreen
	.globl gBerryTagScreenData_085CD098
gBerryTagScreenData_085CD098: @ 0x085CD098
	@ analyzed canonical ROM range 0x085CD098-0x085CD09F
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x8 entries=4
	.2byte 0x0200, 0x0F03, 0x0D0E, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x085CD0A0: berry_tag_screen.s: PrintMysteryMenuText
	.globl gBerryTagScreenData_085CD0A0
gBerryTagScreenData_085CD0A0: @ 0x085CD0A0
	@ analyzed canonical ROM range 0x085CD0A0-0x085CD0C7
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x28 entries=20
	.2byte 0x0B01, 0x0704, 0x0F02, 0x0045, 0x0B01, 0x0F07, 0x0F04, 0x0053
	.2byte 0x0401, 0x160E, 0x0F04, 0x008F, 0x0300, 0x0600, 0x0F02, 0x00E7
	.2byte 0x00FF, 0x0000, 0x0000, 0x0000
	.4byte gText_Rom_5C978E
	.4byte gText_Rom_5C9798
	.4byte gText_Rom_5C979E
	.4byte gText_Rom_5C97A2
	.4byte gText_Rom_5C97AA
	@ pret/pokeemerald-jp direct xref for 0x085CD0DC: berry_tag_screen.s: CB2_MysteryEventMenu
	.globl gBerryTagScreenData_085CD0DC
gBerryTagScreenData_085CD0DC: @ 0x085CD0DC
	@ analyzed canonical ROM range 0x085CD0DC-0x085CD0F9
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x1E bytes=30
	.byte 0x12, 0x03, 0x0C, 0x2E, 0x00, 0x10, 0x02, 0x07, 0x00, 0x11, 0x35, 0x03, 0x00, 0x44, 0x0D, 0xFE
	.byte 0xB0, 0xB0, 0xBC, 0x9A, 0x60, 0x7E, 0x44, 0x00, 0x57, 0x84, 0x7E, 0x5E, 0x79, 0x00
.elseif .L__inc_fragment_select_53efa54ccaca == 3
	.globl gText_Rom_5CD123
gText_Rom_5CD123: @ 0x085CD123
	@ Decoded text from ROM range: offset=0x5CD123, size=0x10
	.string "できごとを　よみこみちゅう！！{EOS}"
	@ pret/pokeemerald-jp direct xref for 0x085CD133: berry_tag_screen.s: CB2_MysteryEventMenu
	.globl gBerryTagScreenData_085CD133
gBerryTagScreenData_085CD133: @ 0x085CD133
	@ analyzed canonical ROM range 0x085CD133-0x085CD158
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x26 bytes=38
	.byte 0x12, 0x03, 0x0C, 0x2E, 0x59, 0xAE, 0x98, 0x79, 0x2D, 0x00, 0x17, 0x06, 0x15, 0x02, 0x44, 0x00
	.byte 0x08, 0x41, 0x0B, 0x02, 0xFE, 0x44, 0x2E, 0x3A, 0x2E, 0x2D, 0x00, 0x07, 0x27, 0x15, 0x02, 0x44
	.byte 0x00, 0x08, 0x41, 0x0B, 0x02, 0xFF
	.globl gText_Rom_5CD159
.elseif .L__inc_fragment_select_53efa54ccaca == 4
	@ asm/berry_tag_screen.s:1746 GetEventLoadMessage
	.globl gText_Rom_5CD159
gText_Rom_5CD159: @ 0x085CD159
	.string "できごとの　よみこみが\nせいじょうに　しゅうりょう　しました{EOS}"
	.if (. - gText_Rom_5CD159) > 0x1f
	.error "gText_Rom_5CD159 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CD159) < 0x1f
	.space 0x1f - (. - gText_Rom_5CD159)
	.endif

	.globl gText_MysteryEventCannotConnect
gText_MysteryEventCannotConnect: @ 0x085CD178
	.string "せつぞく　できない　ききの　ようです\nただしい　ききと　やりなおしてください{EOS}"
	.if (. - gText_MysteryEventCannotConnect) != 0x27
	.error "gText_MysteryEventCannotConnect must retain its original byte length"
	.endif


	@ asm/berry_tag_screen.s:1756 GetEventLoadMessage
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CD19F
gText_Rom_5CD19F: @ 0x085CD19F
	.string "エラーがはっせいしました\nしゅうりょうします{EOS}"
	.if (. - gText_Rom_5CD19F) != 0x17
	.error "gText_Rom_5CD19F must retain its original byte length"
	.endif
.elseif .L__inc_fragment_select_53efa54ccaca == 5
	@ pret/pokeemerald-jp direct xref for 0x08D9C3E4: berry_tag_screen.s: LoadBerryTagGfx
	@ JP Berry graphics archive semanticized from:
	@   - berry_tag_screen.s direct xref
	@   - CompressedSpriteSheet at 0x0855A91C
	@   - 43-entry Berry {pic,palette} pointer table at 0x0855A7C4

	.globl gBerryTag_Tilemap
gBerryTag_Tilemap: @ 0x08D9C3E4 (LZ77 -> 0x800 bytes)
	@ Editable source: graphics/bag/berry_tag.tilemap.inc
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/bag/berry_tag_tilemap.bin.lz"
	.balign 4, 0

	.globl gBerryCheckCircle_Gfx
gBerryCheckCircle_Gfx: @ 0x08D9C4F4 (LZ77 -> 0x800 bytes)
	@ Editable source: graphics/bag/check_berry_circle.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/bag/check_berry_circle.4bpp.lz"
	.balign 4, 0

	.globl gBerryPic_Cheri
gBerryPic_Cheri: @ 0x08D9C650 (LZ77 -> 0x480 bytes)
	@ Editable source: graphics/berries/cheri.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/cheri.4bpp.lz"
	.balign 4, 0

	.globl gBerryPic_Oran
gBerryPic_Oran: @ 0x08D9C7A4 (LZ77 -> 0x480 bytes)
	@ Editable source: graphics/berries/oran.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/oran.4bpp.lz"
	.balign 4, 0

	.globl gBerryPic_Pecha
gBerryPic_Pecha: @ 0x08D9C918 (LZ77 -> 0x480 bytes)
	@ Editable source: graphics/berries/pecha.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/pecha.4bpp.lz"
	.balign 4, 0

	.globl gBerryPic_Rawst
gBerryPic_Rawst: @ 0x08D9CA8C (LZ77 -> 0x480 bytes)
	@ Editable source: graphics/berries/rawst.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/rawst.4bpp.lz"
	.balign 4, 0

	.globl gBerryPic_Aspear
gBerryPic_Aspear: @ 0x08D9CC24 (LZ77 -> 0x480 bytes)
	@ Editable source: graphics/berries/aspear.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/aspear.4bpp.lz"
	.balign 4, 0

	.globl gBerryPic_Leppa
gBerryPic_Leppa: @ 0x08D9CDCC (LZ77 -> 0x480 bytes)
	@ Editable source: graphics/berries/leppa.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/leppa.4bpp.lz"
	.balign 4, 0

	.globl gBerryPic_Chesto
gBerryPic_Chesto: @ 0x08D9CF3C (LZ77 -> 0x480 bytes)
	@ Editable source: graphics/berries/chesto.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/chesto.4bpp.lz"
	.balign 4, 0

	.globl gBerryPic_Persim
gBerryPic_Persim: @ 0x08D9D120 (LZ77 -> 0x480 bytes)
	@ Editable source: graphics/berries/persim.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/persim.4bpp.lz"
	.balign 4, 0

	.globl gBerryPic_Lum
gBerryPic_Lum: @ 0x08D9D270 (LZ77 -> 0x480 bytes)
	@ Editable source: graphics/berries/lum.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/lum.4bpp.lz"
	.balign 4, 0

	.globl gBerryPic_Sitrus
gBerryPic_Sitrus: @ 0x08D9D38C (LZ77 -> 0x480 bytes)
	@ Editable source: graphics/berries/sitrus.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/sitrus.4bpp.lz"
	.balign 4, 0

	.globl gBerryPic_Figy
gBerryPic_Figy: @ 0x08D9D530 (LZ77 -> 0x480 bytes)
	@ Editable source: graphics/berries/figy.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/figy.4bpp.lz"
	.balign 4, 0

	.globl gBerryPic_Wiki
gBerryPic_Wiki: @ 0x08D9D6DC (LZ77 -> 0x480 bytes)
	@ Editable source: graphics/berries/wiki.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/wiki.4bpp.lz"
	.balign 4, 0

	.globl gBerryPic_Mago
gBerryPic_Mago: @ 0x08D9D8D0 (LZ77 -> 0x480 bytes)
	@ Editable source: graphics/berries/mago.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/mago.4bpp.lz"
	.balign 4, 0

	.globl gBerryPic_Aguav
gBerryPic_Aguav: @ 0x08D9DA84 (LZ77 -> 0x480 bytes)
	@ Editable source: graphics/berries/aguav.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/aguav.4bpp.lz"
	.balign 4, 0

	.globl gBerryPic_Iapapa
gBerryPic_Iapapa: @ 0x08D9DBF8 (LZ77 -> 0x480 bytes)
	@ Editable source: graphics/berries/iapapa.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/iapapa.4bpp.lz"
	.balign 4, 0

	.globl gBerryPic_Razz
gBerryPic_Razz: @ 0x08D9DEB0 (LZ77 -> 0x480 bytes)
	@ Editable source: graphics/berries/razz.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/razz.4bpp.lz"
	.balign 4, 0

	.globl gBerryPic_Bluk
gBerryPic_Bluk: @ 0x08D9E0E0 (LZ77 -> 0x480 bytes)
	@ Editable source: graphics/berries/bluk.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/bluk.4bpp.lz"
	.balign 4, 0

	.globl gBerryPic_Nanab
gBerryPic_Nanab: @ 0x08D9E2C8 (LZ77 -> 0x480 bytes)
	@ Editable source: graphics/berries/nanab.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/nanab.4bpp.lz"
	.balign 4, 0

	.globl gBerryPic_Wepear
gBerryPic_Wepear: @ 0x08D9E43C (LZ77 -> 0x480 bytes)
	@ Editable source: graphics/berries/wepear.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/wepear.4bpp.lz"
	.balign 4, 0

	.globl gBerryPic_Pinap
gBerryPic_Pinap: @ 0x08D9E604 (LZ77 -> 0x480 bytes)
	@ Editable source: graphics/berries/pinap.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/pinap.4bpp.lz"
	.balign 4, 0

	.globl gBerryPic_Pomeg
gBerryPic_Pomeg: @ 0x08D9E818 (LZ77 -> 0x480 bytes)
	@ Editable source: graphics/berries/pomeg.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/pomeg.4bpp.lz"
	.balign 4, 0

	.globl gBerryPic_Kelpsy
gBerryPic_Kelpsy: @ 0x08D9E9C0 (LZ77 -> 0x480 bytes)
	@ Editable source: graphics/berries/kelpsy.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/kelpsy.4bpp.lz"
	.balign 4, 0

	.globl gBerryPic_Qualot
gBerryPic_Qualot: @ 0x08D9EB68 (LZ77 -> 0x480 bytes)
	@ Editable source: graphics/berries/qualot.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/qualot.4bpp.lz"
	.balign 4, 0

	.globl gBerryPic_Hondew
gBerryPic_Hondew: @ 0x08D9ED34 (LZ77 -> 0x480 bytes)
	@ Editable source: graphics/berries/hondew.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/hondew.4bpp.lz"
	.balign 4, 0

	.globl gBerryPic_Grepa
gBerryPic_Grepa: @ 0x08D9EF8C (LZ77 -> 0x480 bytes)
	@ Editable source: graphics/berries/grepa.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/grepa.4bpp.lz"
	.balign 4, 0

	.globl gBerryPic_Tamato
gBerryPic_Tamato: @ 0x08D9F11C (LZ77 -> 0x480 bytes)
	@ Editable source: graphics/berries/tamato.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/tamato.4bpp.lz"
	.balign 4, 0

	.globl gBerryPic_Cornn
gBerryPic_Cornn: @ 0x08D9F3E0 (LZ77 -> 0x480 bytes)
	@ Editable source: graphics/berries/cornn.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/cornn.4bpp.lz"
	.balign 4, 0

	.globl gBerryPic_Magost
gBerryPic_Magost: @ 0x08D9F5E4 (LZ77 -> 0x480 bytes)
	@ Editable source: graphics/berries/magost.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/magost.4bpp.lz"
	.balign 4, 0

	.globl gBerryPic_Rabuta
gBerryPic_Rabuta: @ 0x08D9F788 (LZ77 -> 0x480 bytes)
	@ Editable source: graphics/berries/rabuta.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/rabuta.4bpp.lz"
	.balign 4, 0

	.globl gBerryPic_Nomel
gBerryPic_Nomel: @ 0x08D9FA7C (LZ77 -> 0x480 bytes)
	@ Editable source: graphics/berries/nomel.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/nomel.4bpp.lz"
	.balign 4, 0

	.globl gBerryPic_Spelon
gBerryPic_Spelon: @ 0x08D9FC58 (LZ77 -> 0x480 bytes)
	@ Editable source: graphics/berries/spelon.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/spelon.4bpp.lz"
	.balign 4, 0

	.globl gBerryPic_Pamtre
gBerryPic_Pamtre: @ 0x08D9FE48 (LZ77 -> 0x480 bytes)
	@ Editable source: graphics/berries/pamtre.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/pamtre.4bpp.lz"
	.balign 4, 0

	.globl gBerryPic_Watmel
gBerryPic_Watmel: @ 0x08DA0098 (LZ77 -> 0x480 bytes)
	@ Editable source: graphics/berries/watmel.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/watmel.4bpp.lz"
	.balign 4, 0

	.globl gBerryPic_Durin
gBerryPic_Durin: @ 0x08DA037C (LZ77 -> 0x480 bytes)
	@ Editable source: graphics/berries/durin.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/durin.4bpp.lz"
	.balign 4, 0

	.globl gBerryPic_Belue
gBerryPic_Belue: @ 0x08DA0748 (LZ77 -> 0x480 bytes)
	@ Editable source: graphics/berries/belue.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/belue.4bpp.lz"
	.balign 4, 0

	.globl gBerryPic_Liechi
gBerryPic_Liechi: @ 0x08DA0A20 (LZ77 -> 0x480 bytes)
	@ Editable source: graphics/berries/liechi.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/liechi.4bpp.lz"
	.balign 4, 0

	.globl gBerryPic_Ganlon
gBerryPic_Ganlon: @ 0x08DA0C78 (LZ77 -> 0x480 bytes)
	@ Editable source: graphics/berries/ganlon.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/ganlon.4bpp.lz"
	.balign 4, 0

	.globl gBerryPic_Salac
gBerryPic_Salac: @ 0x08DA0E10 (LZ77 -> 0x480 bytes)
	@ Editable source: graphics/berries/salac.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/salac.4bpp.lz"
	.balign 4, 0

	.globl gBerryPic_Petaya
gBerryPic_Petaya: @ 0x08DA1054 (LZ77 -> 0x480 bytes)
	@ Editable source: graphics/berries/petaya.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/petaya.4bpp.lz"
	.balign 4, 0

	.globl gBerryPic_Apicot
gBerryPic_Apicot: @ 0x08DA12FC (LZ77 -> 0x480 bytes)
	@ Editable source: graphics/berries/apicot.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/apicot.4bpp.lz"
	.balign 4, 0

	.globl gBerryPic_Lansat
gBerryPic_Lansat: @ 0x08DA148C (LZ77 -> 0x480 bytes)
	@ Editable source: graphics/berries/lansat.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/lansat.4bpp.lz"
	.balign 4, 0

	.globl gBerryPic_Starf
gBerryPic_Starf: @ 0x08DA1680 (LZ77 -> 0x480 bytes)
	@ Editable source: graphics/berries/starf.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/starf.4bpp.lz"
	.balign 4, 0

	.globl gBerryPic_Enigma
gBerryPic_Enigma: @ 0x08DA1850 (LZ77 -> 0x480 bytes)
	@ Editable source: graphics/berries/enigma.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/enigma.4bpp.lz"
	.balign 4, 0

	.globl gBerryPalette_Cheri
gBerryPalette_Cheri: @ 0x08DA1A68 (LZ77 -> 0x20 bytes)
	@ Editable source: graphics/berries/cheri.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/cheri.gbapal.lz"
	.balign 4, 0

	.globl gBerryPalette_Oran
gBerryPalette_Oran: @ 0x08DA1A90 (LZ77 -> 0x20 bytes)
	@ Editable source: graphics/berries/oran.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/oran.gbapal.lz"
	.balign 4, 0

	.globl gBerryPalette_Pecha
gBerryPalette_Pecha: @ 0x08DA1AB8 (LZ77 -> 0x20 bytes)
	@ Editable source: graphics/berries/pecha.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/pecha.gbapal.lz"
	.balign 4, 0

	.globl gBerryPalette_Rawst
gBerryPalette_Rawst: @ 0x08DA1AE0 (LZ77 -> 0x20 bytes)
	@ Editable source: graphics/berries/rawst.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/rawst.gbapal.lz"
	.balign 4, 0

	.globl gBerryPalette_Aspear
gBerryPalette_Aspear: @ 0x08DA1B08 (LZ77 -> 0x20 bytes)
	@ Editable source: graphics/berries/aspear.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/aspear.gbapal.lz"
	.balign 4, 0

	.globl gBerryPalette_Leppa
gBerryPalette_Leppa: @ 0x08DA1B30 (LZ77 -> 0x20 bytes)
	@ Editable source: graphics/berries/leppa.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/leppa.gbapal.lz"
	.balign 4, 0

	.globl gBerryPalette_Chesto
gBerryPalette_Chesto: @ 0x08DA1B58 (LZ77 -> 0x20 bytes)
	@ Editable source: graphics/berries/chesto.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/chesto.gbapal.lz"
	.balign 4, 0

	.globl gBerryPalette_Persim
gBerryPalette_Persim: @ 0x08DA1B80 (LZ77 -> 0x20 bytes)
	@ Editable source: graphics/berries/persim.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/persim.gbapal.lz"
	.balign 4, 0

	.globl gBerryPalette_Lum
gBerryPalette_Lum: @ 0x08DA1BA8 (LZ77 -> 0x20 bytes)
	@ Editable source: graphics/berries/lum.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/lum.gbapal.lz"
	.balign 4, 0

	.globl gBerryPalette_Sitrus
gBerryPalette_Sitrus: @ 0x08DA1BD0 (LZ77 -> 0x20 bytes)
	@ Editable source: graphics/berries/sitrus.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/sitrus.gbapal.lz"
	.balign 4, 0

	.globl gBerryPalette_Figy
gBerryPalette_Figy: @ 0x08DA1BF8 (LZ77 -> 0x20 bytes)
	@ Editable source: graphics/berries/figy.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/figy.gbapal.lz"
	.balign 4, 0

	.globl gBerryPalette_Wiki
gBerryPalette_Wiki: @ 0x08DA1C20 (LZ77 -> 0x20 bytes)
	@ Editable source: graphics/berries/wiki.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/wiki.gbapal.lz"
	.balign 4, 0

	.globl gBerryPalette_Mago
gBerryPalette_Mago: @ 0x08DA1C48 (LZ77 -> 0x20 bytes)
	@ Editable source: graphics/berries/mago.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/mago.gbapal.lz"
	.balign 4, 0

	.globl gBerryPalette_Aguav
gBerryPalette_Aguav: @ 0x08DA1C70 (LZ77 -> 0x20 bytes)
	@ Editable source: graphics/berries/aguav.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/aguav.gbapal.lz"
	.balign 4, 0

	.globl gBerryPalette_Iapapa
gBerryPalette_Iapapa: @ 0x08DA1C98 (LZ77 -> 0x20 bytes)
	@ Editable source: graphics/berries/iapapa.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/iapapa.gbapal.lz"
	.balign 4, 0

	.globl gBerryPalette_Razz
gBerryPalette_Razz: @ 0x08DA1CC0 (LZ77 -> 0x20 bytes)
	@ Editable source: graphics/berries/razz.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/razz.gbapal.lz"
	.balign 4, 0

	.globl gBerryPalette_Bluk
gBerryPalette_Bluk: @ 0x08DA1CE8 (LZ77 -> 0x20 bytes)
	@ Editable source: graphics/berries/bluk.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/bluk.gbapal.lz"
	.balign 4, 0

	.globl gBerryPalette_Nanab
gBerryPalette_Nanab: @ 0x08DA1D10 (LZ77 -> 0x20 bytes)
	@ Editable source: graphics/berries/nanab.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/nanab.gbapal.lz"
	.balign 4, 0

	.globl gBerryPalette_Wepear
gBerryPalette_Wepear: @ 0x08DA1D38 (LZ77 -> 0x20 bytes)
	@ Editable source: graphics/berries/wepear.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/wepear.gbapal.lz"
	.balign 4, 0

	.globl gBerryPalette_Pinap
gBerryPalette_Pinap: @ 0x08DA1D60 (LZ77 -> 0x20 bytes)
	@ Editable source: graphics/berries/pinap.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/pinap.gbapal.lz"
	.balign 4, 0

	.globl gBerryPalette_Pomeg
gBerryPalette_Pomeg: @ 0x08DA1D88 (LZ77 -> 0x20 bytes)
	@ Editable source: graphics/berries/pomeg.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/pomeg.gbapal.lz"
	.balign 4, 0

	.globl gBerryPalette_Kelpsy
gBerryPalette_Kelpsy: @ 0x08DA1DB0 (LZ77 -> 0x20 bytes)
	@ Editable source: graphics/berries/kelpsy.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/kelpsy.gbapal.lz"
	.balign 4, 0

	.globl gBerryPalette_Qualot
gBerryPalette_Qualot: @ 0x08DA1DD8 (LZ77 -> 0x20 bytes)
	@ Editable source: graphics/berries/qualot.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/qualot.gbapal.lz"
	.balign 4, 0

	.globl gBerryPalette_Hondew
gBerryPalette_Hondew: @ 0x08DA1E00 (LZ77 -> 0x20 bytes)
	@ Editable source: graphics/berries/hondew.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/hondew.gbapal.lz"
	.balign 4, 0

	.globl gBerryPalette_Grepa
gBerryPalette_Grepa: @ 0x08DA1E28 (LZ77 -> 0x20 bytes)
	@ Editable source: graphics/berries/grepa.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/grepa.gbapal.lz"
	.balign 4, 0

	.globl gBerryPalette_Tamato
gBerryPalette_Tamato: @ 0x08DA1E50 (LZ77 -> 0x20 bytes)
	@ Editable source: graphics/berries/tamato.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/tamato.gbapal.lz"
	.balign 4, 0

	.globl gBerryPalette_Cornn
gBerryPalette_Cornn: @ 0x08DA1E78 (LZ77 -> 0x20 bytes)
	@ Editable source: graphics/berries/cornn.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/cornn.gbapal.lz"
	.balign 4, 0

	.globl gBerryPalette_Magost
gBerryPalette_Magost: @ 0x08DA1EA0 (LZ77 -> 0x20 bytes)
	@ Editable source: graphics/berries/magost.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/magost.gbapal.lz"
	.balign 4, 0

	.globl gBerryPalette_Rabuta
gBerryPalette_Rabuta: @ 0x08DA1EC8 (LZ77 -> 0x20 bytes)
	@ Editable source: graphics/berries/rabuta.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/rabuta.gbapal.lz"
	.balign 4, 0

	.globl gBerryPalette_Nomel
gBerryPalette_Nomel: @ 0x08DA1EF0 (LZ77 -> 0x20 bytes)
	@ Editable source: graphics/berries/nomel.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/nomel.gbapal.lz"
	.balign 4, 0

	.globl gBerryPalette_Spelon
gBerryPalette_Spelon: @ 0x08DA1F18 (LZ77 -> 0x20 bytes)
	@ Editable source: graphics/berries/spelon.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/spelon.gbapal.lz"
	.balign 4, 0

	.globl gBerryPalette_Pamtre
gBerryPalette_Pamtre: @ 0x08DA1F40 (LZ77 -> 0x20 bytes)
	@ Editable source: graphics/berries/pamtre.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/pamtre.gbapal.lz"
	.balign 4, 0

	.globl gBerryPalette_Watmel
gBerryPalette_Watmel: @ 0x08DA1F68 (LZ77 -> 0x20 bytes)
	@ Editable source: graphics/berries/watmel.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/watmel.gbapal.lz"
	.balign 4, 0

	.globl gBerryPalette_Durin
gBerryPalette_Durin: @ 0x08DA1F90 (LZ77 -> 0x20 bytes)
	@ Editable source: graphics/berries/durin.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/durin.gbapal.lz"
	.balign 4, 0

	.globl gBerryPalette_Belue
gBerryPalette_Belue: @ 0x08DA1FB8 (LZ77 -> 0x20 bytes)
	@ Editable source: graphics/berries/belue.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/belue.gbapal.lz"
	.balign 4, 0

	.globl gBerryPalette_Liechi
gBerryPalette_Liechi: @ 0x08DA1FE0 (LZ77 -> 0x20 bytes)
	@ Editable source: graphics/berries/liechi.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/liechi.gbapal.lz"
	.balign 4, 0

	.globl gBerryPalette_Ganlon
gBerryPalette_Ganlon: @ 0x08DA2008 (LZ77 -> 0x20 bytes)
	@ Editable source: graphics/berries/ganlon.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/ganlon.gbapal.lz"
	.balign 4, 0

	.globl gBerryPalette_Salac
gBerryPalette_Salac: @ 0x08DA2030 (LZ77 -> 0x20 bytes)
	@ Editable source: graphics/berries/salac.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/salac.gbapal.lz"
	.balign 4, 0

	.globl gBerryPalette_Petaya
gBerryPalette_Petaya: @ 0x08DA2058 (LZ77 -> 0x20 bytes)
	@ Editable source: graphics/berries/petaya.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/petaya.gbapal.lz"
	.balign 4, 0

	.globl gBerryPalette_Apicot
gBerryPalette_Apicot: @ 0x08DA2080 (LZ77 -> 0x20 bytes)
	@ Editable source: graphics/berries/apicot.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/apicot.gbapal.lz"
	.balign 4, 0

	.globl gBerryPalette_Lansat
gBerryPalette_Lansat: @ 0x08DA20A8 (LZ77 -> 0x20 bytes)
	@ Editable source: graphics/berries/lansat.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/lansat.gbapal.lz"
	.balign 4, 0

	.globl gBerryPalette_Starf
gBerryPalette_Starf: @ 0x08DA20D0 (LZ77 -> 0x20 bytes)
	@ Editable source: graphics/berries/starf.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/starf.gbapal.lz"
	.balign 4, 0

	.globl gBerryPalette_Enigma
gBerryPalette_Enigma: @ 0x08DA20F8 (LZ77 -> 0x20 bytes)
	@ Editable source: graphics/berries/enigma.png
	@ Exact LZ token plan: graphics/berries/berry_lz77_plan.json
	.incbin "build/graphics/berries/enigma.gbapal.lz"
	.balign 4, 0

	@ BEGIN RAYQUAZA SCENE 1 EXACT ASSETS
	@ Proven Scene 1 sprite/palette subgroup, exact ROM range 0x08DA2120-0x08DA3667.
	@ Editable indexed PNG -> exact-LZ77 build artifact; no baserom dependency at build time.
	.globl gRaySceneDuoFight_Groudon_Gfx
gRaySceneDuoFight_Groudon_Gfx: @ 0x08DA2120
	.incbin "build/graphics/rayquaza_scene/scene_1/groudon.4bpp.lz"
	.globl gRaySceneDuoFight_GroudonShoulder_Gfx
gRaySceneDuoFight_GroudonShoulder_Gfx: @ 0x08DA2D04
	.incbin "build/graphics/rayquaza_scene/scene_1/groudon_shoulder.4bpp.lz"
	.globl gRaySceneDuoFight_GroudonClaw_Gfx
gRaySceneDuoFight_GroudonClaw_Gfx: @ 0x08DA2DD0
	.incbin "build/graphics/rayquaza_scene/scene_1/groudon_claw.4bpp.lz"
	.globl gRaySceneDuoFight_Kyogre_Gfx
gRaySceneDuoFight_Kyogre_Gfx: @ 0x08DA2FC4
	.incbin "build/graphics/rayquaza_scene/scene_1/kyogre.4bpp.lz"
	.globl gRaySceneDuoFight_KyogrePectoralFin_Gfx
gRaySceneDuoFight_KyogrePectoralFin_Gfx: @ 0x08DA34F8
	.incbin "build/graphics/rayquaza_scene/scene_1/kyogre_pectoral_fin.4bpp.lz"
	.globl gRaySceneDuoFight_KyogreDorsalFin_Gfx
gRaySceneDuoFight_KyogreDorsalFin_Gfx: @ 0x08DA354C
	.incbin "build/graphics/rayquaza_scene/scene_1/kyogre_dorsal_fin.4bpp.lz"
	.globl gRaySceneDuoFight_Groudon_Pal
gRaySceneDuoFight_Groudon_Pal: @ 0x08DA3618
	.incbin "build/graphics/rayquaza_scene/scene_1/groudon.gbapal.lz"
	.globl gRaySceneDuoFight_Kyogre_Pal
gRaySceneDuoFight_Kyogre_Pal: @ 0x08DA3640
	.incbin "build/graphics/rayquaza_scene/scene_1/kyogre.gbapal.lz"
	@ END RAYQUAZA SCENE 1 EXACT ASSETS
.endif
