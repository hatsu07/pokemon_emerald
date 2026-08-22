	@ pret/pokeemerald-jp direct xref for 0x08579ED8: easy_chat.s: GetEasyChatWordGroupName, unref_sub_811F3E0
	.globl gEasyChatData_08579ED8
gEasyChatData_08579ED8: @ 0x08579ED8
	@ confirmed contiguous ROM pointer table: 22 entries from this address
sPointerTable_08579ED8:
	@ analyzed canonical ROM range 0x08579ED8-0x08579F2F
	@ pointer/nullable table
	.4byte gText_Rom_579E6C @ +0x0
	.4byte gText_Rom_579E71 @ +0x4
	.4byte gText_Rom_579E77 @ +0x8
	.4byte gText_Rom_579E7D @ +0xC
	.4byte gText_Rom_579E81 @ +0x10
	.4byte gText_Rom_579E81 + 0x5 @ +0x14
	.4byte gText_Rom_579E81 + 0x8 @ +0x18
	.4byte gText_Rom_579E8C @ +0x1C
	.4byte gText_Rom_579E90 @ +0x20
	.4byte gText_Rom_579E94 @ +0x24
	.4byte gText_Rom_579E98 @ +0x28
	.4byte gText_Rom_579E9E @ +0x2C
	.4byte gText_Rom_579EA3 @ +0x30
	.4byte gText_Rom_579EA8 @ +0x34
	.4byte gText_Rom_579EAC @ +0x38
	.4byte gText_Rom_579EB0 @ +0x3C
	.4byte gText_Rom_579EB5 @ +0x40
	.4byte gText_Rom_579EBB @ +0x44
	.4byte gText_Rom_579EC0 @ +0x48
	.4byte gText_Rom_579EC4 @ +0x4C
	.4byte gText_Rom_579EC4 + 0x4 @ +0x50
	.4byte gText_Rom_579ECF @ +0x54
	@ pret/pokeemerald-jp direct xref for 0x08579F30: easy_chat.s: CopyEasyChatWord, GetEasyChatWordStringLength
	.globl gEasyChatData_08579F30
gEasyChatData_08579F30: @ 0x08579F30
	@ analyzed canonical ROM range 0x08579F30-0x08579F33
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x4 bytes=4
	.byte 0xAC, 0xAC, 0xAC, 0xFF
	@ pret/pokeemerald-jp direct xref for 0x08579F34: easy_chat.s: GetFooterOptionXOffset
	.globl gEasyChatData_08579F34
gEasyChatData_08579F34: @ 0x08579F34
	@ analyzed canonical ROM range 0x08579F34-0x08579F37
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x4 bytes=4
	.byte 0x9A, 0x01, 0x00, 0x00
	@ pret/pokeemerald-jp direct xref for 0x08579F38: mon_markings.s: sub_081201A0
	.globl gMonMarkingsMenu_Pal
gMonMarkingsMenu_Pal: @ 0x08579F38
	@ Semantic source: graphics/interface/mon_markings_menu.png
	.incbin "build/graphics/interface/mon_markings_menu.gbapal"
	.if (. - gMonMarkingsMenu_Pal) != 0x20
	.error "gMonMarkingsMenu_Pal semantic asset size mismatch"
	.endif
	.globl gMonMarkingsMenu_Gfx
gMonMarkingsMenu_Gfx: @ 0x08579F58
	@ Semantic source: graphics/interface/mon_markings_menu.png
	.incbin "build/graphics/interface/mon_markings_menu.4bpp"
	.if (. - gMonMarkingsMenu_Gfx) != 0x320
	.error "gMonMarkingsMenu_Gfx semantic asset size mismatch"
	.endif
	.globl sMonMarkings_Pal
sMonMarkings_Pal: @ 0x0857A278
	@ Semantic source: graphics/interface/mon_markings.png
	.incbin "build/graphics/interface/mon_markings.gbapal"
	.if (. - sMonMarkings_Pal) != 0x20
	.error "sMonMarkings_Pal semantic asset size mismatch"
	.endif
	.globl sMonMarkings_Gfx
sMonMarkings_Gfx: @ 0x0857A298
	@ Semantic source: graphics/interface/mon_markings.png
	.incbin "build/graphics/interface/mon_markings.4bpp"
	.if (. - sMonMarkings_Gfx) != 0x800
	.error "sMonMarkings_Gfx semantic asset size mismatch"
	.endif
