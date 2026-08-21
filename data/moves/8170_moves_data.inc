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
