	@ pret/pokeemerald-jp direct xref for 0x08D96B54: party_menu.s: AllocPartyMiscGfx
.globl gPartyMenuBg_Tilemap
gPartyMenuBg_Tilemap: @ 0x08D96B54
	@ confirmed GBA LZ77 stream: compressed=0x138, decompressed=0x800
	@ analyzed canonical ROM range 0x08D96B54-0x08D97C53
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: 7 exact LZ77 assets extracted from this former raw block; non-LZ residual bytes remain literal
	.incbin "build/graphics/party_menu/bg_rom_exact.tilemap.lz"
	.globl gLz77Asset_08D96C8C
gLz77Asset_08D96C8C: @ 0x08D96C8C
	.incbin "build/assets/lz77_raw/08D96C8C.bin.lz"
	.byte 0x00, 0x00
	.globl gLz77Asset_08D96E0C
gLz77Asset_08D96E0C: @ 0x08D96E0C
	.incbin "build/assets/lz77_raw/08D96E0C.bin.lz"
	.globl gLz77Asset_08D96F20
gLz77Asset_08D96F20: @ 0x08D96F20
	.incbin "build/assets/lz77_raw/08D96F20.bin.lz"
	.byte 0x00, 0x00
	.globl gLz77Asset_08D96F44
gLz77Asset_08D96F44: @ 0x08D96F44
	.incbin "build/assets/lz77_raw/08D96F44.bin.lz"
	.globl gLz77Asset_08D971A4
gLz77Asset_08D971A4: @ 0x08D971A4
	.incbin "build/assets/lz77_raw/08D971A4.bin.lz"
	.globl gLz77Asset_08D971CC
gLz77Asset_08D971CC: @ 0x08D971CC
	.incbin "build/assets/lz77_raw/08D971CC.bin.lz"
	.byte 0x00, 0x00, 0x00
