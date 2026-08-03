
gUnknown_C11BA4:
  .incbin "baserom.gba", 0xC11BA4, 0xF00

gUnknown_C12AA4:
	.incbin "baserom.gba", 0xC12AA4, 0x33E4
	@ 0xC12AA4 - 0xC15E87

gUnknown_C15E88:
	.incbin "baserom.gba", 0xC15E88, 0x3424
	@ 0xC15E88 - 0xC192AB

gUnknown_C192AC:
	.incbin "baserom.gba", 0xC192AC, 0x304C
	@ 0xC192AC - 0xC1C2F7

gUnknown_C1C2F8:
	.incbin "baserom.gba", 0xC1C2F8, 0x2EF4
	@ 0xC1C2F8 - 0xC1F1EB

gUnknown_C1F1EC:
	.incbin "baserom.gba", 0xC1F1EC, 0x2F38
	@ 0xC1F1EC - 0xC22123

gUnknown_C22124:
	.incbin "baserom.gba", 0xC22124, 0x312C
	@ 0xC22124 - 0xC2524F

gUnknown_C25250:
	.incbin "baserom.gba", 0xC25250, 0x31C0
	@ 0xC25250 - 0xC2840F

gUnknown_C28410:
	.incbin "baserom.gba", 0xC28410, 0x2CF0
	@ 0xC28410 - 0xC2B0FF

gUnknown_C2B100:
	.incbin "baserom.gba", 0xC2B100, 0x2B0C
	@ 0xC2B100 - 0xC2DC0B

gUnknown_C2DC0C:
	.incbin "baserom.gba", 0xC2DC0C, 0x2138
	@ 0xC2DC0C - 0xC2FD43

  .globl gMonPalette_Bulbasaur
gMonPalette_Bulbasaur:
  .incbin "build/graphics/pokemon/bulbasaur/normal_palette.gbapal.lz"

  .globl gMonBackPic_Bulbasaur
gMonBackPic_Bulbasaur:
  .incbin "build/graphics/pokemon/bulbasaur/back.4bpp.lz"

  .globl gMonShinyPalette_Bulbasaur
gMonShinyPalette_Bulbasaur:
  .incbin "build/graphics/pokemon/bulbasaur/shiny_palette.gbapal.lz"

  .globl gMonIcon_None
  .globl gMonIcon_Bulbasaur
gMonIcon_None: @ 0x08C30044 [000]
gMonIcon_Bulbasaur: @ 0x08C30044 [001]
  .incbin "build/graphics/pokemon/bulbasaur/icon.4bpp"

  @ 用途未確定
  .incbin "baserom.gba", 0xC30444, 0x20

  @ LZ77 compressed 64x64 4bpp image 保留
  .incbin "baserom.gba", 0xC30464, 0x374

  .globl gMonPalette_Ivysaur
gMonPalette_Ivysaur:
  .incbin "build/graphics/pokemon/ivysaur/normal_palette.gbapal.lz"

  .globl gMonBackPic_Ivysaur
gMonBackPic_Ivysaur:
  .incbin "build/graphics/pokemon/ivysaur/back.4bpp.lz"

  .globl gMonShinyPalette_Ivysaur
gMonShinyPalette_Ivysaur:
  .incbin "build/graphics/pokemon/ivysaur/shiny_palette.gbapal.lz"

  .globl gMonIcon_Ivysaur
gMonIcon_Ivysaur:
  .incbin "build/graphics/pokemon/ivysaur/icon.4bpp"
  .incbin "baserom.gba", 0xC30FB4, 0x5AC

  .globl gMonPalette_Venusaur
gMonPalette_Venusaur:
  .incbin "build/graphics/pokemon/venusaur/normal_palette.gbapal.lz"

  .globl gMonBackPic_Venusaur
gMonBackPic_Venusaur:
  .incbin "build/graphics/pokemon/venusaur/back.4bpp.lz"

  .globl gMonShinyPalette_Venusaur
gMonShinyPalette_Venusaur:
  .incbin "build/graphics/pokemon/venusaur/shiny_palette.gbapal.lz"

  .globl gMonIcon_Venusaur
gMonIcon_Venusaur:
  .incbin "build/graphics/pokemon/venusaur/icon.4bpp"
  .incbin "baserom.gba", 0xC31E80, 0x2D0

  .globl gMonPalette_Charmander
gMonPalette_Charmander:
  .incbin "build/graphics/pokemon/charmander/normal_palette.gbapal.lz"

  .globl gMonBackPic_Charmander
gMonBackPic_Charmander:
  .incbin "build/graphics/pokemon/charmander/back.4bpp.lz"

  .globl gMonShinyPalette_Charmander
gMonShinyPalette_Charmander:
  .incbin "build/graphics/pokemon/charmander/shiny_palette.gbapal.lz"

  .globl gMonIcon_Charmander
gMonIcon_Charmander:
  .incbin "build/graphics/pokemon/charmander/icon.4bpp"
  .incbin "baserom.gba", 0xC32834, 0x3C8

  .globl gMonPalette_Charmeleon
gMonPalette_Charmeleon:
  .incbin "build/graphics/pokemon/charmeleon/normal_palette.gbapal.lz"

  .globl gMonBackPic_Charmeleon
gMonBackPic_Charmeleon:
  .incbin "build/graphics/pokemon/charmeleon/back.4bpp.lz"

  .globl gMonShinyPalette_Charmeleon
gMonShinyPalette_Charmeleon:
  .incbin "build/graphics/pokemon/charmeleon/shiny_palette.gbapal.lz"

  .globl gMonIcon_Charmeleon
gMonIcon_Charmeleon:
  .incbin "build/graphics/pokemon/charmeleon/icon.4bpp"
  .incbin "baserom.gba", 0xC3332C, 0x570

  .globl gMonPalette_Charizard
gMonPalette_Charizard:
  .incbin "build/graphics/pokemon/charizard/normal_palette.gbapal.lz"

  .globl gMonBackPic_Charizard
gMonBackPic_Charizard:
  .incbin "build/graphics/pokemon/charizard/back.4bpp.lz"

  .globl gMonShinyPalette_Charizard
gMonShinyPalette_Charizard:
  .incbin "build/graphics/pokemon/charizard/shiny_palette.gbapal.lz"

  .globl gMonIcon_Charizard
gMonIcon_Charizard:
  .incbin "build/graphics/pokemon/charizard/icon.4bpp"
  .incbin "baserom.gba", 0xC34108, 0x2FC

  .globl gMonPalette_Squirtle
gMonPalette_Squirtle:
  .incbin "build/graphics/pokemon/squirtle/normal_palette.gbapal.lz"

  .globl gMonBackPic_Squirtle
gMonBackPic_Squirtle:
  .incbin "build/graphics/pokemon/squirtle/back.4bpp.lz"

  .globl gMonShinyPalette_Squirtle
gMonShinyPalette_Squirtle:
  .incbin "build/graphics/pokemon/squirtle/shiny_palette.gbapal.lz"

  .globl gMonIcon_Squirtle
gMonIcon_Squirtle:
  .incbin "build/graphics/pokemon/squirtle/icon.4bpp"
  .incbin "baserom.gba", 0xC34AD4, 0x39C

  .globl gMonPalette_Wartortle
gMonPalette_Wartortle:
  .incbin "build/graphics/pokemon/wartortle/normal_palette.gbapal.lz"

  .globl gMonBackPic_Wartortle
gMonBackPic_Wartortle:
  .incbin "build/graphics/pokemon/wartortle/back.4bpp.lz"

  .globl gMonShinyPalette_Wartortle
gMonShinyPalette_Wartortle:
  .incbin "build/graphics/pokemon/wartortle/shiny_palette.gbapal.lz"

	.globl gMonIcon_Wartortle
gMonIcon_Wartortle: @ 0x08C351F4 [008]
  .incbin "build/graphics/pokemon/wartortle/icon.4bpp"
  .incbin "baserom.gba", 0xC355F4, 0x524

  .globl gMonPalette_Blastoise
gMonPalette_Blastoise:
  .incbin "build/graphics/pokemon/blastoise/normal_palette.gbapal.lz"

  .globl gMonBackPic_Blastoise
gMonBackPic_Blastoise:
  .incbin "build/graphics/pokemon/blastoise/back.4bpp.lz"

  .globl gMonShinyPalette_Blastoise
gMonShinyPalette_Blastoise:
  .incbin "build/graphics/pokemon/blastoise/shiny_palette.gbapal.lz"

	.globl gMonIcon_Blastoise
gMonIcon_Blastoise: @ 0x08C35F84 [009]
  .incbin "build/graphics/pokemon/blastoise/icon.4bpp"
  .incbin "baserom.gba", 0xC36384, 0x280

  .globl gMonPalette_Caterpie
gMonPalette_Caterpie:
  .incbin "build/graphics/pokemon/caterpie/normal_palette.gbapal.lz"

  .globl gMonBackPic_Caterpie
gMonBackPic_Caterpie:
  .incbin "build/graphics/pokemon/caterpie/back.4bpp.lz"

  .globl gMonShinyPalette_Caterpie
gMonShinyPalette_Caterpie:
  .incbin "build/graphics/pokemon/caterpie/shiny_palette.gbapal.lz"

	.globl gMonIcon_Caterpie
gMonIcon_Caterpie: @ 0x08C368DC [010]
  .incbin "build/graphics/pokemon/caterpie/icon.4bpp"
  .incbin "baserom.gba", 0xC36CDC, 0x238

  .globl gMonPalette_Metapod
gMonPalette_Metapod:
  .incbin "build/graphics/pokemon/metapod/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc36f33, 0x1

  .globl gMonBackPic_Metapod
gMonBackPic_Metapod:
  .incbin "build/graphics/pokemon/metapod/back.4bpp.lz"

  .globl gMonShinyPalette_Metapod
gMonShinyPalette_Metapod:
  .incbin "build/graphics/pokemon/metapod/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xC37193, 0x1
	.globl gMonIcon_Metapod
gMonIcon_Metapod: @ 0x08C37194 [011]
  .incbin "build/graphics/pokemon/metapod/icon.4bpp"
  .incbin "baserom.gba", 0xC37594, 0x380

  .globl gMonPalette_Butterfree
gMonPalette_Butterfree:
  .incbin "build/graphics/pokemon/butterfree/normal_palette.gbapal.lz"

  .globl gMonBackPic_Butterfree
gMonBackPic_Butterfree:
  .incbin "build/graphics/pokemon/butterfree/back.4bpp.lz"

  .globl gMonShinyPalette_Butterfree
gMonShinyPalette_Butterfree:
  .incbin "build/graphics/pokemon/butterfree/shiny_palette.gbapal.lz"

	.globl gMonIcon_Butterfree
gMonIcon_Butterfree: @ 0x08C37D74 [012]
  .incbin "build/graphics/pokemon/butterfree/icon.4bpp"
  .incbin "baserom.gba", 0xC38174, 0x260

  .globl gMonPalette_Weedle
gMonPalette_Weedle:
  .incbin "build/graphics/pokemon/weedle/normal_palette.gbapal.lz"

  .globl gMonBackPic_Weedle
gMonBackPic_Weedle:
  .incbin "build/graphics/pokemon/weedle/back.4bpp.lz"

  .globl gMonShinyPalette_Weedle
gMonShinyPalette_Weedle:
  .incbin "build/graphics/pokemon/weedle/shiny_palette.gbapal.lz"

	.globl gMonIcon_Weedle
gMonIcon_Weedle: @ 0x08C3868C [013]
  .incbin "build/graphics/pokemon/weedle/icon.4bpp"
  .incbin "baserom.gba", 0xC38A8C, 0x26C

  .globl gMonPalette_Kakuna
gMonPalette_Kakuna:
  .incbin "build/graphics/pokemon/kakuna/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc38d19, 0x3

  .globl gMonBackPic_Kakuna
gMonBackPic_Kakuna:
  .incbin "build/graphics/pokemon/kakuna/back.4bpp.lz"

  .globl gMonShinyPalette_Kakuna
gMonShinyPalette_Kakuna:
  .incbin "build/graphics/pokemon/kakuna/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xC38FC1, 0x3
	.globl gMonIcon_Kakuna
gMonIcon_Kakuna: @ 0x08C38FC4 [014]
  .incbin "build/graphics/pokemon/kakuna/icon.4bpp"
  .incbin "baserom.gba", 0xC393C4, 0x430

  .globl gMonPalette_Beedrill
gMonPalette_Beedrill:
  .incbin "build/graphics/pokemon/beedrill/normal_palette.gbapal.lz"

  .globl gMonBackPic_Beedrill
gMonBackPic_Beedrill:
  .incbin "build/graphics/pokemon/beedrill/back.4bpp.lz"

  .globl gMonShinyPalette_Beedrill
gMonShinyPalette_Beedrill:
  .incbin "build/graphics/pokemon/beedrill/shiny_palette.gbapal.lz"

	.globl gMonIcon_Beedrill
gMonIcon_Beedrill: @ 0x08C39BB8 [015]
  .incbin "build/graphics/pokemon/beedrill/icon.4bpp"
  .incbin "baserom.gba", 0xC39FB8, 0x30C

  .globl gMonPalette_Pidgey
gMonPalette_Pidgey:
  .incbin "build/graphics/pokemon/pidgey/normal_palette.gbapal.lz"

  .globl gMonBackPic_Pidgey
gMonBackPic_Pidgey:
  .incbin "build/graphics/pokemon/pidgey/back.4bpp.lz"

  .globl gMonShinyPalette_Pidgey
gMonShinyPalette_Pidgey:
  .incbin "build/graphics/pokemon/pidgey/shiny_palette.gbapal.lz"

	.globl gMonIcon_Pidgey
gMonIcon_Pidgey: @ 0x08C3A668 [016]
  .incbin "build/graphics/pokemon/pidgey/icon.4bpp"
  .incbin "baserom.gba", 0xC3AA68, 0x394

  .globl gMonPalette_Pidgeotto
gMonPalette_Pidgeotto:
  .incbin "build/graphics/pokemon/pidgeotto/normal_palette.gbapal.lz"

  .globl gMonBackPic_Pidgeotto
gMonBackPic_Pidgeotto:
  .incbin "build/graphics/pokemon/pidgeotto/back.4bpp.lz"

  .globl gMonShinyPalette_Pidgeotto
gMonShinyPalette_Pidgeotto:
  .incbin "build/graphics/pokemon/pidgeotto/shiny_palette.gbapal.lz"

	.globl gMonIcon_Pidgeotto
gMonIcon_Pidgeotto: @ 0x08C3B198 [017]
  .incbin "build/graphics/pokemon/pidgeotto/icon.4bpp"
  .incbin "baserom.gba", 0xC3B598, 0x51C

  .globl gMonPalette_Pidgeot
gMonPalette_Pidgeot:
  .incbin "build/graphics/pokemon/pidgeot/normal_palette.gbapal.lz"

  .globl gMonBackPic_Pidgeot
gMonBackPic_Pidgeot:
  .incbin "build/graphics/pokemon/pidgeot/back.4bpp.lz"

  .globl gMonShinyPalette_Pidgeot
gMonShinyPalette_Pidgeot:
  .incbin "build/graphics/pokemon/pidgeot/shiny_palette.gbapal.lz"

	.globl gMonIcon_Pidgeot
gMonIcon_Pidgeot: @ 0x08C3BE8C [018]
  .incbin "build/graphics/pokemon/pidgeot/icon.4bpp"
  .incbin "baserom.gba", 0xC3C28C, 0x26C

  .globl gMonPalette_Rattata
gMonPalette_Rattata:
  .incbin "build/graphics/pokemon/rattata/normal_palette.gbapal.lz"

  .globl gMonBackPic_Rattata
gMonBackPic_Rattata:
  .incbin "build/graphics/pokemon/rattata/back.4bpp.lz"

  .globl gMonShinyPalette_Rattata
gMonShinyPalette_Rattata:
  .incbin "build/graphics/pokemon/rattata/shiny_palette.gbapal.lz"

	.globl gMonIcon_Rattata
gMonIcon_Rattata: @ 0x08C3C824 [019]
  .incbin "build/graphics/pokemon/rattata/icon.4bpp"
  .incbin "baserom.gba", 0xC3CC24, 0x3A8

  .globl gMonPalette_Raticate
gMonPalette_Raticate:
  .incbin "build/graphics/pokemon/raticate/normal_palette.gbapal.lz"

  .globl gMonBackPic_Raticate
gMonBackPic_Raticate:
  .incbin "build/graphics/pokemon/raticate/back.4bpp.lz"

  .globl gMonShinyPalette_Raticate
gMonShinyPalette_Raticate:
  .incbin "build/graphics/pokemon/raticate/shiny_palette.gbapal.lz"

	.globl gMonIcon_Raticate
gMonIcon_Raticate: @ 0x08C3D34C [020]
  .incbin "build/graphics/pokemon/raticate/icon.4bpp"
  .incbin "baserom.gba", 0xC3D74C, 0x2A8

  .globl gMonPalette_Spearow
gMonPalette_Spearow:
  .incbin "build/graphics/pokemon/spearow/normal_palette.gbapal.lz"

  .globl gMonBackPic_Spearow
gMonBackPic_Spearow:
  .incbin "build/graphics/pokemon/spearow/back.4bpp.lz"

  .globl gMonShinyPalette_Spearow
gMonShinyPalette_Spearow:
  .incbin "build/graphics/pokemon/spearow/shiny_palette.gbapal.lz"

	.globl gMonIcon_Spearow
gMonIcon_Spearow: @ 0x08C3DD20 [021]
  .incbin "build/graphics/pokemon/spearow/icon.4bpp"
  .incbin "baserom.gba", 0xC3E120, 0x4B4

  .globl gMonPalette_Fearow
gMonPalette_Fearow:
  .incbin "build/graphics/pokemon/fearow/normal_palette.gbapal.lz"

  .globl gMonBackPic_Fearow
gMonBackPic_Fearow:
  .incbin "build/graphics/pokemon/fearow/back.4bpp.lz"

  .globl gMonShinyPalette_Fearow
gMonShinyPalette_Fearow:
  .incbin "build/graphics/pokemon/fearow/shiny_palette.gbapal.lz"

	.globl gMonIcon_Fearow
gMonIcon_Fearow: @ 0x08C3E91C [022]
  .incbin "build/graphics/pokemon/fearow/icon.4bpp"
  .incbin "baserom.gba", 0xC3ED1C, 0x320

  .globl gMonPalette_Ekans
gMonPalette_Ekans:
  .incbin "build/graphics/pokemon/ekans/normal_palette.gbapal.lz"

  .globl gMonBackPic_Ekans
gMonBackPic_Ekans:
  .incbin "build/graphics/pokemon/ekans/back.4bpp.lz"

  .globl gMonShinyPalette_Ekans
gMonShinyPalette_Ekans:
  .incbin "build/graphics/pokemon/ekans/shiny_palette.gbapal.lz"

	.globl gMonIcon_Ekans
gMonIcon_Ekans: @ 0x08C3F37C [023]
  .incbin "build/graphics/pokemon/ekans/icon.4bpp"
  .incbin "baserom.gba", 0xC3F77C, 0x46C

  .globl gMonPalette_Arbok
gMonPalette_Arbok:
  .incbin "build/graphics/pokemon/arbok/normal_palette.gbapal.lz"

  .globl gMonBackPic_Arbok
gMonBackPic_Arbok:
  .incbin "build/graphics/pokemon/arbok/back.4bpp.lz"

  .globl gMonShinyPalette_Arbok
gMonShinyPalette_Arbok:
  .incbin "build/graphics/pokemon/arbok/shiny_palette.gbapal.lz"

	.globl gMonIcon_Arbok
gMonIcon_Arbok: @ 0x08C3FED8 [024]
  .incbin "build/graphics/pokemon/arbok/icon.4bpp"
  .incbin "baserom.gba", 0xC402D8, 0x2F0

  .globl gMonPalette_Pikachu
gMonPalette_Pikachu:
  .incbin "build/graphics/pokemon/pikachu/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc405ee, 0x2

  .globl gMonBackPic_Pikachu
gMonBackPic_Pikachu:
  .incbin "build/graphics/pokemon/pikachu/back.4bpp.lz"

  .globl gMonShinyPalette_Pikachu
gMonShinyPalette_Pikachu:
  .incbin "build/graphics/pokemon/pikachu/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xC408EE, 0x2
	.globl gMonIcon_Pikachu
gMonIcon_Pikachu: @ 0x08C408F0 [025]
  .incbin "build/graphics/pokemon/pikachu/icon.4bpp"
  .incbin "baserom.gba", 0xC40CF0, 0x3CC

  .globl gMonPalette_Raichu
gMonPalette_Raichu:
  .incbin "build/graphics/pokemon/raichu/normal_palette.gbapal.lz"

  .globl gMonBackPic_Raichu
gMonBackPic_Raichu:
  .incbin "build/graphics/pokemon/raichu/back.4bpp.lz"

  .globl gMonShinyPalette_Raichu
gMonShinyPalette_Raichu:
  .incbin "build/graphics/pokemon/raichu/shiny_palette.gbapal.lz"

	.globl gMonIcon_Raichu
gMonIcon_Raichu: @ 0x08C4142C [026]
  .incbin "build/graphics/pokemon/raichu/icon.4bpp"
  .incbin "baserom.gba", 0xC4182C, 0x2E0

  .globl gMonPalette_Sandshrew
gMonPalette_Sandshrew:
  .incbin "build/graphics/pokemon/sandshrew/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc41b32, 0x2

  .globl gMonBackPic_Sandshrew
gMonBackPic_Sandshrew:
  .incbin "build/graphics/pokemon/sandshrew/back.4bpp.lz"

  .globl gMonShinyPalette_Sandshrew
gMonShinyPalette_Sandshrew:
  .incbin "build/graphics/pokemon/sandshrew/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xC41E82, 0x2
	.globl gMonIcon_Sandshrew
gMonIcon_Sandshrew: @ 0x08C41E84 [027]
  .incbin "build/graphics/pokemon/sandshrew/icon.4bpp"
  .incbin "baserom.gba", 0xC42284, 0x40C

  .globl gMonPalette_Sandslash
gMonPalette_Sandslash:
  .incbin "build/graphics/pokemon/sandslash/normal_palette.gbapal.lz"

  .globl gMonBackPic_Sandslash
gMonBackPic_Sandslash:
  .incbin "build/graphics/pokemon/sandslash/back.4bpp.lz"

  .globl gMonShinyPalette_Sandslash
gMonShinyPalette_Sandslash:
  .incbin "build/graphics/pokemon/sandslash/shiny_palette.gbapal.lz"

	.globl gMonIcon_Sandslash
gMonIcon_Sandslash: @ 0x08C42AFC [028]
  .incbin "build/graphics/pokemon/sandslash/icon.4bpp"
  .incbin "baserom.gba", 0xC42EFC, 0x298

  .globl gMonPalette_NidoranF
gMonPalette_NidoranF:
  .incbin "build/graphics/pokemon/nidoran_f/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc431ba, 0x2

  .globl gMonBackPic_NidoranF
gMonBackPic_NidoranF:
  .incbin "build/graphics/pokemon/nidoran_f/back.4bpp.lz"

  .globl gMonShinyPalette_NidoranF
gMonShinyPalette_NidoranF:
  .incbin "build/graphics/pokemon/nidoran_f/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xC434BA, 0x2
	.globl gMonIcon_NidoranF
gMonIcon_NidoranF: @ 0x08C434BC [029]
  .incbin "build/graphics/pokemon/nidoran_f/icon.4bpp"
  .incbin "baserom.gba", 0xC438BC, 0x34C

  .globl gMonPalette_Nidorina
gMonPalette_Nidorina:
  .incbin "build/graphics/pokemon/nidorina/normal_palette.gbapal.lz"

  .globl gMonBackPic_Nidorina
gMonBackPic_Nidorina:
  .incbin "build/graphics/pokemon/nidorina/back.4bpp.lz"

  .globl gMonShinyPalette_Nidorina
gMonShinyPalette_Nidorina:
  .incbin "build/graphics/pokemon/nidorina/shiny_palette.gbapal.lz"

	.globl gMonIcon_Nidorina
gMonIcon_Nidorina: @ 0x08C43FEC [030]
  .incbin "build/graphics/pokemon/nidorina/icon.4bpp"
  .incbin "baserom.gba", 0xC443EC, 0x4AC

  .globl gMonPalette_Nidoqueen
gMonPalette_Nidoqueen:
  .incbin "build/graphics/pokemon/nidoqueen/normal_palette.gbapal.lz"

  .globl gMonBackPic_Nidoqueen
gMonBackPic_Nidoqueen:
  .incbin "build/graphics/pokemon/nidoqueen/back.4bpp.lz"

  .globl gMonShinyPalette_Nidoqueen
gMonShinyPalette_Nidoqueen:
  .incbin "build/graphics/pokemon/nidoqueen/shiny_palette.gbapal.lz"

	.globl gMonIcon_Nidoqueen
gMonIcon_Nidoqueen: @ 0x08C44CAC [031]
  .incbin "build/graphics/pokemon/nidoqueen/icon.4bpp"
  .incbin "baserom.gba", 0xC450AC, 0x2F0

  .globl gMonPalette_NidoranM
gMonPalette_NidoranM:
  .incbin "build/graphics/pokemon/nidoran_m/normal_palette.gbapal.lz"

  .globl gMonBackPic_NidoranM
gMonBackPic_NidoranM:
  .incbin "build/graphics/pokemon/nidoran_m/back.4bpp.lz"

  .globl gMonShinyPalette_NidoranM
gMonShinyPalette_NidoranM:
  .incbin "build/graphics/pokemon/nidoran_m/shiny_palette.gbapal.lz"

	.globl gMonIcon_NidoranM
gMonIcon_NidoranM: @ 0x08C45720 [032]
  .incbin "build/graphics/pokemon/nidoran_m/icon.4bpp"
  .incbin "baserom.gba", 0xC45B20, 0x3B4

  .globl gMonPalette_Nidorino
gMonPalette_Nidorino:
  .incbin "build/graphics/pokemon/nidorino/normal_palette.gbapal.lz"

  .globl gMonBackPic_Nidorino
gMonBackPic_Nidorino:
  .incbin "build/graphics/pokemon/nidorino/back.4bpp.lz"

  .globl gMonShinyPalette_Nidorino
gMonShinyPalette_Nidorino:
  .incbin "build/graphics/pokemon/nidorino/shiny_palette.gbapal.lz"

	.globl gMonIcon_Nidorino
gMonIcon_Nidorino: @ 0x08C462E0 [033]
  .incbin "build/graphics/pokemon/nidorino/icon.4bpp"
  .incbin "baserom.gba", 0xC466E0, 0x518

  .globl gMonPalette_Nidoking
gMonPalette_Nidoking:
  .incbin "build/graphics/pokemon/nidoking/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc46c1e, 0x2

  .globl gMonBackPic_Nidoking
gMonBackPic_Nidoking:
  .incbin "build/graphics/pokemon/nidoking/back.4bpp.lz"

  .globl gMonShinyPalette_Nidoking
gMonShinyPalette_Nidoking:
  .incbin "build/graphics/pokemon/nidoking/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xC47082, 0x2
	.globl gMonIcon_Nidoking
gMonIcon_Nidoking: @ 0x08C47084 [034]
  .incbin "build/graphics/pokemon/nidoking/icon.4bpp"
  .incbin "baserom.gba", 0xC47484, 0x2A8

  .globl gMonPalette_Clefairy
gMonPalette_Clefairy:
  .incbin "build/graphics/pokemon/clefairy/normal_palette.gbapal.lz"

  .globl gMonBackPic_Clefairy
gMonBackPic_Clefairy:
  .incbin "build/graphics/pokemon/clefairy/back.4bpp.lz"

  .globl gMonShinyPalette_Clefairy
gMonShinyPalette_Clefairy:
  .incbin "build/graphics/pokemon/clefairy/shiny_palette.gbapal.lz"

	.globl gMonIcon_Clefairy
gMonIcon_Clefairy: @ 0x08C47A4C [035]
  .incbin "build/graphics/pokemon/clefairy/icon.4bpp"
  .incbin "baserom.gba", 0xC47E4C, 0x35C

  .globl gMonPalette_Clefable
gMonPalette_Clefable:
  .incbin "build/graphics/pokemon/clefable/normal_palette.gbapal.lz"

  .globl gMonBackPic_Clefable
gMonBackPic_Clefable:
  .incbin "build/graphics/pokemon/clefable/back.4bpp.lz"

  .globl gMonShinyPalette_Clefable
gMonShinyPalette_Clefable:
  .incbin "build/graphics/pokemon/clefable/shiny_palette.gbapal.lz"

	.globl gMonIcon_Clefable
gMonIcon_Clefable: @ 0x08C48530 [036]
  .incbin "build/graphics/pokemon/clefable/icon.4bpp"
  .incbin "baserom.gba", 0xC48930, 0x35C

  .globl gMonPalette_Vulpix
gMonPalette_Vulpix:
  .incbin "build/graphics/pokemon/vulpix/normal_palette.gbapal.lz"

  .globl gMonBackPic_Vulpix
gMonBackPic_Vulpix:
  .incbin "build/graphics/pokemon/vulpix/back.4bpp.lz"

  .globl gMonShinyPalette_Vulpix
gMonShinyPalette_Vulpix:
  .incbin "build/graphics/pokemon/vulpix/shiny_palette.gbapal.lz"

	.globl gMonIcon_Vulpix
gMonIcon_Vulpix: @ 0x08C48FD8 [037]
  .incbin "build/graphics/pokemon/vulpix/icon.4bpp"
  .incbin "baserom.gba", 0xC493D8, 0x45C

  .globl gMonPalette_Ninetales
gMonPalette_Ninetales:
  .incbin "build/graphics/pokemon/ninetales/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc49853, 0x1
  .globl gMonBackPic_Ninetales
gMonBackPic_Ninetales:
  .incbin "build/graphics/pokemon/ninetales/back.4bpp.lz"

  .globl gMonShinyPalette_Ninetales
gMonShinyPalette_Ninetales:
  .incbin "build/graphics/pokemon/ninetales/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xC49BF3, 0x1
	.globl gMonIcon_Ninetales
gMonIcon_Ninetales: @ 0x08C49BF4 [038]
  .incbin "build/graphics/pokemon/ninetales/icon.4bpp"
  .incbin "baserom.gba", 0xC49FF4, 0x298

  .globl gMonPalette_Jigglypuff
gMonPalette_Jigglypuff:
  .incbin "build/graphics/pokemon/jigglypuff/normal_palette.gbapal.lz"

  .globl gMonBackPic_Jigglypuff
gMonBackPic_Jigglypuff:
  .incbin "build/graphics/pokemon/jigglypuff/back.4bpp.lz"

  .globl gMonShinyPalette_Jigglypuff
gMonShinyPalette_Jigglypuff:
  .incbin "build/graphics/pokemon/jigglypuff/shiny_palette.gbapal.lz"

	.globl gMonIcon_Jigglypuff
gMonIcon_Jigglypuff: @ 0x08C4A538 [039]
  .incbin "build/graphics/pokemon/jigglypuff/icon.4bpp"
  .incbin "baserom.gba", 0xC4A938, 0x374

  .globl gMonPalette_Wigglytuff
gMonPalette_Wigglytuff:
  .incbin "build/graphics/pokemon/wigglytuff/normal_palette.gbapal.lz"

  .globl gMonBackPic_Wigglytuff
gMonBackPic_Wigglytuff:
  .incbin "build/graphics/pokemon/wigglytuff/back.4bpp.lz"

  .globl gMonShinyPalette_Wigglytuff
gMonShinyPalette_Wigglytuff:
  .incbin "build/graphics/pokemon/wigglytuff/shiny_palette.gbapal.lz"

	.globl gMonIcon_Wigglytuff
gMonIcon_Wigglytuff: @ 0x08C4AFA4 [040]
  .incbin "build/graphics/pokemon/wigglytuff/icon.4bpp"
  .incbin "baserom.gba", 0xC4B3A4, 0x2F8

  .globl gMonPalette_Zubat
gMonPalette_Zubat:
  .incbin "build/graphics/pokemon/zubat/normal_palette.gbapal.lz"

  .globl gMonBackPic_Zubat
gMonBackPic_Zubat:
  .incbin "build/graphics/pokemon/zubat/back.4bpp.lz"

  .globl gMonShinyPalette_Zubat
gMonShinyPalette_Zubat:
  .incbin "build/graphics/pokemon/zubat/shiny_palette.gbapal.lz"

	.globl gMonIcon_Zubat
gMonIcon_Zubat: @ 0x08C4B9A8 [041]
  .incbin "build/graphics/pokemon/zubat/icon.4bpp"
  .incbin "baserom.gba", 0xC4BDA8, 0x3BC

  .globl gMonPalette_Golbat
gMonPalette_Golbat:
  .incbin "build/graphics/pokemon/golbat/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc4c18a, 0x2

  .globl gMonBackPic_Golbat
gMonBackPic_Golbat:
  .incbin "build/graphics/pokemon/golbat/back.4bpp.lz"

  .globl gMonShinyPalette_Golbat
gMonShinyPalette_Golbat:
  .incbin "build/graphics/pokemon/golbat/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xC4C46E, 0x2
	.globl gMonIcon_Golbat
gMonIcon_Golbat: @ 0x08C4C470 [042]
  .incbin "build/graphics/pokemon/golbat/icon.4bpp"
  .incbin "baserom.gba", 0xC4C870, 0x254

  .globl gMonPalette_Oddish
gMonPalette_Oddish:
  .incbin "build/graphics/pokemon/oddish/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc4caea, 0x2

  .globl gMonBackPic_Oddish
gMonBackPic_Oddish:
  .incbin "build/graphics/pokemon/oddish/back.4bpp.lz"

  .globl gMonShinyPalette_Oddish
gMonShinyPalette_Oddish:
  .incbin "build/graphics/pokemon/oddish/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xC4CD8A, 0x2
	.globl gMonIcon_Oddish
gMonIcon_Oddish: @ 0x08C4CD8C [043]
  .incbin "build/graphics/pokemon/oddish/icon.4bpp"
  .incbin "baserom.gba", 0xC4D18C, 0x398

  .globl gMonPalette_Gloom
gMonPalette_Gloom:
  .incbin "build/graphics/pokemon/gloom/normal_palette.gbapal.lz"

  .globl gMonBackPic_Gloom
gMonBackPic_Gloom:
  .incbin "build/graphics/pokemon/gloom/back.4bpp.lz"

  .globl gMonShinyPalette_Gloom
gMonShinyPalette_Gloom:
  .incbin "build/graphics/pokemon/gloom/shiny_palette.gbapal.lz"

	.globl gMonIcon_Gloom
gMonIcon_Gloom: @ 0x08C4D8DC [044]
  .incbin "build/graphics/pokemon/gloom/icon.4bpp"
  .incbin "baserom.gba", 0xC4DCDC, 0x39C

  .globl gMonPalette_Vileplume
gMonPalette_Vileplume:
  .incbin "build/graphics/pokemon/vileplume/normal_palette.gbapal.lz"

  .globl gMonBackPic_Vileplume
gMonBackPic_Vileplume:
  .incbin "build/graphics/pokemon/vileplume/back.4bpp.lz"

  .globl gMonShinyPalette_Vileplume
gMonShinyPalette_Vileplume:
  .incbin "build/graphics/pokemon/vileplume/shiny_palette.gbapal.lz"

	.globl gMonIcon_Vileplume
gMonIcon_Vileplume: @ 0x08C4E4E0 [045]
  .incbin "build/graphics/pokemon/vileplume/icon.4bpp"
  .incbin "baserom.gba", 0xC4E8E0, 0x28C

  .globl gMonPalette_Paras
gMonPalette_Paras:
  .incbin "build/graphics/pokemon/paras/normal_palette.gbapal.lz"

  .globl gMonBackPic_Paras
gMonBackPic_Paras:
  .incbin "build/graphics/pokemon/paras/back.4bpp.lz"

  .globl gMonShinyPalette_Paras
gMonShinyPalette_Paras:
  .incbin "build/graphics/pokemon/paras/shiny_palette.gbapal.lz"

	.globl gMonIcon_Paras
gMonIcon_Paras: @ 0x08C4EE5C [046]
  .incbin "build/graphics/pokemon/paras/icon.4bpp"
  .incbin "baserom.gba", 0xC4F25C, 0x3E4

  .globl gMonPalette_Parasect
gMonPalette_Parasect:
  .incbin "build/graphics/pokemon/parasect/normal_palette.gbapal.lz"

  .globl gMonBackPic_Parasect
gMonBackPic_Parasect:
  .incbin "build/graphics/pokemon/parasect/back.4bpp.lz"

  .globl gMonShinyPalette_Parasect
gMonShinyPalette_Parasect:
  .incbin "build/graphics/pokemon/parasect/shiny_palette.gbapal.lz"

	.globl gMonIcon_Parasect
gMonIcon_Parasect: @ 0x08C4F98C [047]
  .incbin "build/graphics/pokemon/parasect/icon.4bpp"
  .incbin "baserom.gba", 0xC4FD8C, 0x398

  .globl gMonPalette_Venonat
gMonPalette_Venonat:
  .incbin "build/graphics/pokemon/venonat/normal_palette.gbapal.lz"

  .globl gMonBackPic_Venonat
gMonBackPic_Venonat:
  .incbin "build/graphics/pokemon/venonat/back.4bpp.lz"

  .globl gMonShinyPalette_Venonat
gMonShinyPalette_Venonat:
  .incbin "build/graphics/pokemon/venonat/shiny_palette.gbapal.lz"

	.globl gMonIcon_Venonat
gMonIcon_Venonat: @ 0x08C504A4 [048]
  .incbin "build/graphics/pokemon/venonat/icon.4bpp"
  .incbin "baserom.gba", 0xC508A4, 0x4C4

  .globl gMonPalette_Venomoth
gMonPalette_Venomoth:
  .incbin "build/graphics/pokemon/venomoth/normal_palette.gbapal.lz"

  .globl gMonBackPic_Venomoth
gMonBackPic_Venomoth:
  .incbin "build/graphics/pokemon/venomoth/back.4bpp.lz"

  .globl gMonShinyPalette_Venomoth
gMonShinyPalette_Venomoth:
  .incbin "build/graphics/pokemon/venomoth/shiny_palette.gbapal.lz"

	.globl gMonIcon_Venomoth
gMonIcon_Venomoth: @ 0x08C5117C [049]
  .incbin "build/graphics/pokemon/venomoth/icon.4bpp"
  .incbin "baserom.gba", 0xC5157C, 0x22C

  .globl gMonPalette_Diglett
gMonPalette_Diglett:
  .incbin "build/graphics/pokemon/diglett/normal_palette.gbapal.lz"

  .globl gMonBackPic_Diglett
gMonBackPic_Diglett:
  .incbin "build/graphics/pokemon/diglett/back.4bpp.lz"

  .globl gMonShinyPalette_Diglett
gMonShinyPalette_Diglett:
  .incbin "build/graphics/pokemon/diglett/shiny_palette.gbapal.lz"

	.globl gMonIcon_Diglett
gMonIcon_Diglett: @ 0x08C51A04 [050]
  .incbin "build/graphics/pokemon/diglett/icon.4bpp"
  .incbin "baserom.gba", 0xC51E04, 0x344

  .globl gMonPalette_Dugtrio
gMonPalette_Dugtrio:
  .incbin "build/graphics/pokemon/dugtrio/normal_palette.gbapal.lz"

  .globl gMonBackPic_Dugtrio
gMonBackPic_Dugtrio:
  .incbin "build/graphics/pokemon/dugtrio/back.4bpp.lz"

  .globl gMonShinyPalette_Dugtrio
gMonShinyPalette_Dugtrio:
  .incbin "build/graphics/pokemon/dugtrio/shiny_palette.gbapal.lz"

	.globl gMonIcon_Dugtrio
gMonIcon_Dugtrio: @ 0x08C52444 [051]
  .incbin "build/graphics/pokemon/dugtrio/icon.4bpp"
  .incbin "baserom.gba", 0xC52844, 0x30C

  .globl gMonPalette_Meowth
gMonPalette_Meowth:
  .incbin "build/graphics/pokemon/meowth/normal_palette.gbapal.lz"

  .globl gMonBackPic_Meowth
gMonBackPic_Meowth:
  .incbin "build/graphics/pokemon/meowth/back.4bpp.lz"

  .globl gMonShinyPalette_Meowth
gMonShinyPalette_Meowth:
  .incbin "build/graphics/pokemon/meowth/shiny_palette.gbapal.lz"

	.globl gMonIcon_Meowth
gMonIcon_Meowth: @ 0x08C52E84 [052]
  .incbin "build/graphics/pokemon/meowth/icon.4bpp"
  .incbin "baserom.gba", 0xC53284, 0x3D4

  .globl gMonPalette_Persian
gMonPalette_Persian:
  .incbin "build/graphics/pokemon/persian/normal_palette.gbapal.lz"

  .globl gMonBackPic_Persian
gMonBackPic_Persian:
  .incbin "build/graphics/pokemon/persian/back.4bpp.lz"

  .globl gMonShinyPalette_Persian
gMonShinyPalette_Persian:
  .incbin "build/graphics/pokemon/persian/shiny_palette.gbapal.lz"

	.globl gMonIcon_Persian
gMonIcon_Persian: @ 0x08C53A0C [053]
  .incbin "build/graphics/pokemon/persian/icon.4bpp"
  .incbin "baserom.gba", 0xC53E0C, 0x2F8

  .globl gMonPalette_Psyduck
gMonPalette_Psyduck:
  .incbin "build/graphics/pokemon/psyduck/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc5412a, 0x2

  .globl gMonBackPic_Psyduck
gMonBackPic_Psyduck:
  .incbin "build/graphics/pokemon/psyduck/back.4bpp.lz"

  .globl gMonShinyPalette_Psyduck
gMonShinyPalette_Psyduck:
  .incbin "build/graphics/pokemon/psyduck/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xC543EE, 0x2
	.globl gMonIcon_Psyduck
gMonIcon_Psyduck: @ 0x08C543F0 [054]
  .incbin "build/graphics/pokemon/psyduck/icon.4bpp"
  .incbin "baserom.gba", 0xC547F0, 0x3F8

  .globl gMonPalette_Golduck
gMonPalette_Golduck:
  .incbin "build/graphics/pokemon/golduck/normal_palette.gbapal.lz"

  .globl gMonBackPic_Golduck
gMonBackPic_Golduck:
  .incbin "build/graphics/pokemon/golduck/back.4bpp.lz"

  .globl gMonShinyPalette_Golduck
gMonShinyPalette_Golduck:
  .incbin "build/graphics/pokemon/golduck/shiny_palette.gbapal.lz"

	.globl gMonIcon_Golduck
gMonIcon_Golduck: @ 0x08C54F64 [055]
  .incbin "build/graphics/pokemon/golduck/icon.4bpp"
  .incbin "baserom.gba", 0xC55364, 0x338

  .globl gMonPalette_Mankey
gMonPalette_Mankey:
  .incbin "build/graphics/pokemon/mankey/normal_palette.gbapal.lz"

  .globl gMonBackPic_Mankey
gMonBackPic_Mankey:
  .incbin "build/graphics/pokemon/mankey/back.4bpp.lz"

  .globl gMonShinyPalette_Mankey
gMonShinyPalette_Mankey:
  .incbin "build/graphics/pokemon/mankey/shiny_palette.gbapal.lz"

	.globl gMonIcon_Mankey
gMonIcon_Mankey: @ 0x08C55A54 [056]
  .incbin "build/graphics/pokemon/mankey/icon.4bpp"
  .incbin "baserom.gba", 0xC55E54, 0x3D0

  .globl gMonPalette_Primeape
gMonPalette_Primeape:
  .incbin "build/graphics/pokemon/primeape/normal_palette.gbapal.lz"

  .globl gMonBackPic_Primeape
gMonBackPic_Primeape:
  .incbin "build/graphics/pokemon/primeape/back.4bpp.lz"

  .globl gMonShinyPalette_Primeape
gMonShinyPalette_Primeape:
  .incbin "build/graphics/pokemon/primeape/shiny_palette.gbapal.lz"

	.globl gMonIcon_Primeape
gMonIcon_Primeape: @ 0x08C565E4 [057]
  .incbin "build/graphics/pokemon/primeape/icon.4bpp"
  .incbin "baserom.gba", 0xC569E4, 0x378

  .globl gMonPalette_Growlithe
gMonPalette_Growlithe:
  .incbin "build/graphics/pokemon/growlithe/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc56d82, 0x2

  .globl gMonBackPic_Growlithe
gMonBackPic_Growlithe:
  .incbin "build/graphics/pokemon/growlithe/back.4bpp.lz"

  .globl gMonShinyPalette_Growlithe
gMonShinyPalette_Growlithe:
  .incbin "build/graphics/pokemon/growlithe/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xC570E6, 0x2
	.globl gMonIcon_Growlithe
gMonIcon_Growlithe: @ 0x08C570E8 [058]
  .incbin "build/graphics/pokemon/growlithe/icon.4bpp"
  .incbin "baserom.gba", 0xC574E8, 0x554

  .globl gMonPalette_Arcanine
gMonPalette_Arcanine:
  .incbin "build/graphics/pokemon/arcanine/normal_palette.gbapal.lz"

  .globl gMonBackPic_Arcanine
gMonBackPic_Arcanine:
  .incbin "build/graphics/pokemon/arcanine/back.4bpp.lz"

  .globl gMonShinyPalette_Arcanine
gMonShinyPalette_Arcanine:
  .incbin "build/graphics/pokemon/arcanine/shiny_palette.gbapal.lz"

	.globl gMonIcon_Arcanine
gMonIcon_Arcanine: @ 0x08C57E6C [059]
  .incbin "build/graphics/pokemon/arcanine/icon.4bpp"
  .incbin "baserom.gba", 0xC5826C, 0x2A8

  .globl gMonPalette_Poliwag
gMonPalette_Poliwag:
  .incbin "build/graphics/pokemon/poliwag/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc5853a, 0x2

  .globl gMonBackPic_Poliwag
gMonBackPic_Poliwag:
  .incbin "build/graphics/pokemon/poliwag/back.4bpp.lz"

  .globl gMonShinyPalette_Poliwag
gMonShinyPalette_Poliwag:
  .incbin "build/graphics/pokemon/poliwag/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xC587D2, 0x2
	.globl gMonIcon_Poliwag
gMonIcon_Poliwag: @ 0x08C587D4 [060]
  .incbin "build/graphics/pokemon/poliwag/icon.4bpp"
  .incbin "baserom.gba", 0xC58BD4, 0x3E4

  .globl gMonPalette_Poliwhirl
gMonPalette_Poliwhirl:
  .incbin "build/graphics/pokemon/poliwhirl/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc58fde, 0x2

  .globl gMonBackPic_Poliwhirl
gMonBackPic_Poliwhirl:
  .incbin "build/graphics/pokemon/poliwhirl/back.4bpp.lz"

  .globl gMonShinyPalette_Poliwhirl
gMonShinyPalette_Poliwhirl:
  .incbin "build/graphics/pokemon/poliwhirl/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xC592C6, 0x2
	.globl gMonIcon_Poliwhirl
gMonIcon_Poliwhirl: @ 0x08C592C8 [061]
  .incbin "build/graphics/pokemon/poliwhirl/icon.4bpp"
  .incbin "baserom.gba", 0xC596C8, 0x3E8

  .globl gMonPalette_Poliwrath
gMonPalette_Poliwrath:
  .incbin "build/graphics/pokemon/poliwrath/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc59ad6, 0x2

  .globl gMonBackPic_Poliwrath
gMonBackPic_Poliwrath:
  .incbin "build/graphics/pokemon/poliwrath/back.4bpp.lz"

  .globl gMonShinyPalette_Poliwrath
gMonShinyPalette_Poliwrath:
  .incbin "build/graphics/pokemon/poliwrath/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xC59E1E, 0x2
	.globl gMonIcon_Poliwrath
gMonIcon_Poliwrath: @ 0x08C59E20 [062]
  .incbin "build/graphics/pokemon/poliwrath/icon.4bpp"
  .incbin "baserom.gba", 0xC5A220, 0x304

  .globl gMonPalette_Abra
gMonPalette_Abra:
  .incbin "build/graphics/pokemon/abra/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc5a545, 0x3
  .globl gMonBackPic_Abra
gMonBackPic_Abra:
  .incbin "build/graphics/pokemon/abra/back.4bpp.lz"

  .globl gMonShinyPalette_Abra
gMonShinyPalette_Abra:
  .incbin "build/graphics/pokemon/abra/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xC5A87D, 0x3
	.globl gMonIcon_Abra
gMonIcon_Abra: @ 0x08C5A880 [063]
  .incbin "build/graphics/pokemon/abra/icon.4bpp"
  .incbin "baserom.gba", 0xC5AC80, 0x484

  .globl gMonPalette_Kadabra
gMonPalette_Kadabra:
  .incbin "build/graphics/pokemon/kadabra/normal_palette.gbapal.lz"

  .globl gMonBackPic_Kadabra
gMonBackPic_Kadabra:
  .incbin "build/graphics/pokemon/kadabra/back.4bpp.lz"

  .globl gMonShinyPalette_Kadabra
gMonShinyPalette_Kadabra:
  .incbin "build/graphics/pokemon/kadabra/shiny_palette.gbapal.lz"

	.globl gMonIcon_Kadabra
gMonIcon_Kadabra: @ 0x08C5B530 [064]
  .incbin "build/graphics/pokemon/kadabra/icon.4bpp"
  .incbin "baserom.gba", 0xC5B930, 0x41C

  .globl gMonPalette_Alakazam
gMonPalette_Alakazam:
  .incbin "build/graphics/pokemon/alakazam/normal_palette.gbapal.lz"

  .globl gMonBackPic_Alakazam
gMonBackPic_Alakazam:
  .incbin "build/graphics/pokemon/alakazam/back.4bpp.lz"

  .globl gMonShinyPalette_Alakazam
gMonShinyPalette_Alakazam:
  .incbin "build/graphics/pokemon/alakazam/shiny_palette.gbapal.lz"

	.globl gMonIcon_Alakazam
gMonIcon_Alakazam: @ 0x08C5C1E0 [065]
  .incbin "build/graphics/pokemon/alakazam/icon.4bpp"
  .incbin "baserom.gba", 0xC5C5E0, 0x2C4

  .globl gMonPalette_Machop
gMonPalette_Machop:
  .incbin "build/graphics/pokemon/machop/normal_palette.gbapal.lz"

  .globl gMonBackPic_Machop
gMonBackPic_Machop:
  .incbin "build/graphics/pokemon/machop/back.4bpp.lz"

  .globl gMonShinyPalette_Machop
gMonShinyPalette_Machop:
  .incbin "build/graphics/pokemon/machop/shiny_palette.gbapal.lz"

	.globl gMonIcon_Machop
gMonIcon_Machop: @ 0x08C5CBD4 [066]
  .incbin "build/graphics/pokemon/machop/icon.4bpp"
  .incbin "baserom.gba", 0xC5CFD4, 0x3D0

  .globl gMonPalette_Machoke
gMonPalette_Machoke:
  .incbin "build/graphics/pokemon/machoke/normal_palette.gbapal.lz"

  .globl gMonBackPic_Machoke
gMonBackPic_Machoke:
  .incbin "build/graphics/pokemon/machoke/back.4bpp.lz"

  .globl gMonShinyPalette_Machoke
gMonShinyPalette_Machoke:
  .incbin "build/graphics/pokemon/machoke/shiny_palette.gbapal.lz"

	.globl gMonIcon_Machoke
gMonIcon_Machoke: @ 0x08C5D744 [067]
  .incbin "build/graphics/pokemon/machoke/icon.4bpp"
  .incbin "baserom.gba", 0xC5DB44, 0x570

  .globl gMonPalette_Machamp
gMonPalette_Machamp:
  .incbin "build/graphics/pokemon/machamp/normal_palette.gbapal.lz"

  .globl gMonBackPic_Machamp
gMonBackPic_Machamp:
  .incbin "build/graphics/pokemon/machamp/back.4bpp.lz"

  .globl gMonShinyPalette_Machamp
gMonShinyPalette_Machamp:
  .incbin "build/graphics/pokemon/machamp/shiny_palette.gbapal.lz"

	.globl gMonIcon_Machamp
gMonIcon_Machamp: @ 0x08C5E560 [068]
  .incbin "build/graphics/pokemon/machamp/icon.4bpp"
  .incbin "baserom.gba", 0xC5E960, 0x2A0

  .globl gMonPalette_Bellsprout
gMonPalette_Bellsprout:
  .incbin "build/graphics/pokemon/bellsprout/normal_palette.gbapal.lz"

  .globl gMonBackPic_Bellsprout
gMonBackPic_Bellsprout:
  .incbin "build/graphics/pokemon/bellsprout/back.4bpp.lz"

  .globl gMonShinyPalette_Bellsprout
gMonShinyPalette_Bellsprout:
  .incbin "build/graphics/pokemon/bellsprout/shiny_palette.gbapal.lz"

	.globl gMonIcon_Bellsprout
gMonIcon_Bellsprout: @ 0x08C5EEEC [069]
  .incbin "build/graphics/pokemon/bellsprout/icon.4bpp"
  .incbin "baserom.gba", 0xC5F2EC, 0x344

  .globl gMonPalette_Weepinbell
gMonPalette_Weepinbell:
  .incbin "build/graphics/pokemon/weepinbell/normal_palette.gbapal.lz"

  .globl gMonBackPic_Weepinbell
gMonBackPic_Weepinbell:
  .incbin "build/graphics/pokemon/weepinbell/back.4bpp.lz"

  .globl gMonShinyPalette_Weepinbell
gMonShinyPalette_Weepinbell:
  .incbin "build/graphics/pokemon/weepinbell/shiny_palette.gbapal.lz"

	.globl gMonIcon_Weepinbell
gMonIcon_Weepinbell: @ 0x08C5F97C [070]
  .incbin "build/graphics/pokemon/weepinbell/icon.4bpp"
  .incbin "baserom.gba", 0xC5FD7C, 0x44C

  .globl gMonPalette_Victreebel
gMonPalette_Victreebel:
  .incbin "build/graphics/pokemon/victreebel/normal_palette.gbapal.lz"

  .globl gMonBackPic_Victreebel
gMonBackPic_Victreebel:
  .incbin "build/graphics/pokemon/victreebel/back.4bpp.lz"

  .globl gMonShinyPalette_Victreebel
gMonShinyPalette_Victreebel:
  .incbin "build/graphics/pokemon/victreebel/shiny_palette.gbapal.lz"

	.globl gMonIcon_Victreebel
gMonIcon_Victreebel: @ 0x08C605B0 [071]
  .incbin "build/graphics/pokemon/victreebel/icon.4bpp"
  .incbin "baserom.gba", 0xC609B0, 0x2C0

  .globl gMonPalette_Tentacool
gMonPalette_Tentacool:
  .incbin "build/graphics/pokemon/tentacool/normal_palette.gbapal.lz"

  .globl gMonBackPic_Tentacool
gMonBackPic_Tentacool:
  .incbin "build/graphics/pokemon/tentacool/back.4bpp.lz"

  .globl gMonShinyPalette_Tentacool
gMonShinyPalette_Tentacool:
  .incbin "build/graphics/pokemon/tentacool/shiny_palette.gbapal.lz"

	.globl gMonIcon_Tentacool
gMonIcon_Tentacool: @ 0x08C60F8C [072]
  .incbin "build/graphics/pokemon/tentacool/icon.4bpp"
  .incbin "baserom.gba", 0xC6138C, 0x4BC

  .globl gMonPalette_Tentacruel
gMonPalette_Tentacruel:
  .incbin "build/graphics/pokemon/tentacruel/normal_palette.gbapal.lz"

  .globl gMonBackPic_Tentacruel
gMonBackPic_Tentacruel:
  .incbin "build/graphics/pokemon/tentacruel/back.4bpp.lz"

  .globl gMonShinyPalette_Tentacruel
gMonShinyPalette_Tentacruel:
  .incbin "build/graphics/pokemon/tentacruel/shiny_palette.gbapal.lz"

	.globl gMonIcon_Tentacruel
gMonIcon_Tentacruel: @ 0x08C61C34 [073]
  .incbin "build/graphics/pokemon/tentacruel/icon.4bpp"
  .incbin "baserom.gba", 0xC62034, 0x28C

  .globl gMonPalette_Geodude
gMonPalette_Geodude:
  .incbin "build/graphics/pokemon/geodude/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc622db, 0x1
  .globl gMonBackPic_Geodude
gMonBackPic_Geodude:
  .incbin "build/graphics/pokemon/geodude/back.4bpp.lz"

  .globl gMonShinyPalette_Geodude
gMonShinyPalette_Geodude:
  .incbin "build/graphics/pokemon/geodude/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xC6258B, 0x1
	.globl gMonIcon_Geodude
gMonIcon_Geodude: @ 0x08C6258C [074]
  .incbin "build/graphics/pokemon/geodude/icon.4bpp"
  .incbin "baserom.gba", 0xC6298C, 0x428

  .globl gMonPalette_Graveler
gMonPalette_Graveler:
  .incbin "build/graphics/pokemon/graveler/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc62dd1, 0x3
  .globl gMonBackPic_Graveler
gMonBackPic_Graveler:
  .incbin "build/graphics/pokemon/graveler/back.4bpp.lz"

  .globl gMonShinyPalette_Graveler
gMonShinyPalette_Graveler:
  .incbin "build/graphics/pokemon/graveler/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xC6306D, 0x3
	.globl gMonIcon_Graveler
gMonIcon_Graveler: @ 0x08C63070 [075]
  .incbin "build/graphics/pokemon/graveler/icon.4bpp"
  .incbin "baserom.gba", 0xC63470, 0x49C

  .globl gMonPalette_Golem
gMonPalette_Golem:
  .incbin "build/graphics/pokemon/golem/normal_palette.gbapal.lz"

  .globl gMonBackPic_Golem
gMonBackPic_Golem:
  .incbin "build/graphics/pokemon/golem/back.4bpp.lz"

  .globl gMonShinyPalette_Golem
gMonShinyPalette_Golem:
  .incbin "build/graphics/pokemon/golem/shiny_palette.gbapal.lz"

	.globl gMonIcon_Golem
gMonIcon_Golem: @ 0x08C63C1C [076]
  .incbin "build/graphics/pokemon/golem/icon.4bpp"
  .incbin "baserom.gba", 0xC6401C, 0x3C8

  .globl gMonPalette_Ponyta
gMonPalette_Ponyta:
  .incbin "build/graphics/pokemon/ponyta/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc6440a, 0x2

  .globl gMonBackPic_Ponyta
gMonBackPic_Ponyta:
  .incbin "build/graphics/pokemon/ponyta/back.4bpp.lz"

  .globl gMonShinyPalette_Ponyta
gMonShinyPalette_Ponyta:
  .incbin "build/graphics/pokemon/ponyta/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xC6476E, 0x2
	.globl gMonIcon_Ponyta
gMonIcon_Ponyta: @ 0x08C64770 [077]
  .incbin "build/graphics/pokemon/ponyta/icon.4bpp"
  .incbin "baserom.gba", 0xC64B70, 0x4F0

  .globl gMonPalette_Rapidash
gMonPalette_Rapidash:
  .incbin "build/graphics/pokemon/rapidash/normal_palette.gbapal.lz"

  .globl gMonBackPic_Rapidash
gMonBackPic_Rapidash:
  .incbin "build/graphics/pokemon/rapidash/back.4bpp.lz"

  .globl gMonShinyPalette_Rapidash
gMonShinyPalette_Rapidash:
  .incbin "build/graphics/pokemon/rapidash/shiny_palette.gbapal.lz"

	.globl gMonIcon_Rapidash
gMonIcon_Rapidash: @ 0x08C654C0 [078]
  .incbin "build/graphics/pokemon/rapidash/icon.4bpp"
  .incbin "baserom.gba", 0xC658C0, 0x32C

  .globl gMonPalette_Slowpoke
gMonPalette_Slowpoke:
  .incbin "build/graphics/pokemon/slowpoke/normal_palette.gbapal.lz"

  .globl gMonBackPic_Slowpoke
gMonBackPic_Slowpoke:
  .incbin "build/graphics/pokemon/slowpoke/back.4bpp.lz"

  .globl gMonShinyPalette_Slowpoke
gMonShinyPalette_Slowpoke:
  .incbin "build/graphics/pokemon/slowpoke/shiny_palette.gbapal.lz"

	.globl gMonIcon_Slowpoke
gMonIcon_Slowpoke: @ 0x08C65EA0 [079]
  .incbin "build/graphics/pokemon/slowpoke/icon.4bpp"
  .incbin "baserom.gba", 0xC662A0, 0x4E0

  .globl gMonPalette_Slowbro
gMonPalette_Slowbro:
  .incbin "build/graphics/pokemon/slowbro/normal_palette.gbapal.lz"

  .globl gMonBackPic_Slowbro
gMonBackPic_Slowbro:
  .incbin "build/graphics/pokemon/slowbro/back.4bpp.lz"

  .globl gMonShinyPalette_Slowbro
gMonShinyPalette_Slowbro:
  .incbin "build/graphics/pokemon/slowbro/shiny_palette.gbapal.lz"

	.globl gMonIcon_Slowbro
gMonIcon_Slowbro: @ 0x08C66B6C [080]
  .incbin "build/graphics/pokemon/slowbro/icon.4bpp"
  .incbin "baserom.gba", 0xC66F6C, 0x1F8

  .globl gMonPalette_Magnemite
gMonPalette_Magnemite:
  .incbin "build/graphics/pokemon/magnemite/normal_palette.gbapal.lz"

  .globl gMonBackPic_Magnemite
gMonBackPic_Magnemite:
  .incbin "build/graphics/pokemon/magnemite/back.4bpp.lz"

  .globl gMonShinyPalette_Magnemite
gMonShinyPalette_Magnemite:
  .incbin "build/graphics/pokemon/magnemite/shiny_palette.gbapal.lz"

	.globl gMonIcon_Magnemite
gMonIcon_Magnemite: @ 0x08C67398 [081]
  .incbin "build/graphics/pokemon/magnemite/icon.4bpp"
  .incbin "baserom.gba", 0xC67798, 0x424

  .globl gMonPalette_Magneton
gMonPalette_Magneton:
  .incbin "build/graphics/pokemon/magneton/normal_palette.gbapal.lz"

  .globl gMonBackPic_Magneton
gMonBackPic_Magneton:
  .incbin "build/graphics/pokemon/magneton/back.4bpp.lz"

  .globl gMonShinyPalette_Magneton
gMonShinyPalette_Magneton:
  .incbin "build/graphics/pokemon/magneton/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xC67F8A, 0x2
	.globl gMonIcon_Magneton
gMonIcon_Magneton: @ 0x08C67F8C [082]
  .incbin "build/graphics/pokemon/magneton/icon.4bpp"
  .incbin "baserom.gba", 0xC6838C, 0x39C

  .globl gMonPalette_Farfetchd
gMonPalette_Farfetchd:
  .incbin "build/graphics/pokemon/farfetchd/normal_palette.gbapal.lz"

  .globl gMonBackPic_Farfetchd
gMonBackPic_Farfetchd:
  .incbin "build/graphics/pokemon/farfetchd/back.4bpp.lz"

  .globl gMonShinyPalette_Farfetchd
gMonShinyPalette_Farfetchd:
  .incbin "build/graphics/pokemon/farfetchd/shiny_palette.gbapal.lz"

	.globl gMonIcon_Farfetchd
gMonIcon_Farfetchd: @ 0x08C68AE4 [083]
  .incbin "build/graphics/pokemon/farfetchd/icon.4bpp"
  .incbin "baserom.gba", 0xC68EE4, 0x374

  .globl gMonPalette_Doduo
gMonPalette_Doduo:
  .incbin "build/graphics/pokemon/doduo/normal_palette.gbapal.lz"

  .globl gMonBackPic_Doduo
gMonBackPic_Doduo:
  .incbin "build/graphics/pokemon/doduo/back.4bpp.lz"

  .globl gMonShinyPalette_Doduo
gMonShinyPalette_Doduo:
  .incbin "build/graphics/pokemon/doduo/shiny_palette.gbapal.lz"

	.globl gMonIcon_Doduo
gMonIcon_Doduo: @ 0x08C695B8 [084]
  .incbin "build/graphics/pokemon/doduo/icon.4bpp"
  .incbin "baserom.gba", 0xC699B8, 0x4FC

  .globl gMonPalette_Dodrio
gMonPalette_Dodrio:
  .incbin "build/graphics/pokemon/dodrio/normal_palette.gbapal.lz"

  .globl gMonBackPic_Dodrio
gMonBackPic_Dodrio:
  .incbin "build/graphics/pokemon/dodrio/back.4bpp.lz"

  .globl gMonShinyPalette_Dodrio
gMonShinyPalette_Dodrio:
  .incbin "build/graphics/pokemon/dodrio/shiny_palette.gbapal.lz"

	.globl gMonIcon_Dodrio
gMonIcon_Dodrio: @ 0x08C6A368 [085]
  .incbin "build/graphics/pokemon/dodrio/icon.4bpp"
  .incbin "baserom.gba", 0xC6A768, 0x328

  .globl gMonPalette_Seel
gMonPalette_Seel:
  .incbin "build/graphics/pokemon/seel/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc6aab6, 0x2

  .globl gMonBackPic_Seel
gMonBackPic_Seel:
  .incbin "build/graphics/pokemon/seel/back.4bpp.lz"

  .globl gMonShinyPalette_Seel
gMonShinyPalette_Seel:
  .incbin "build/graphics/pokemon/seel/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xC6ADCA, 0x2
	.globl gMonIcon_Seel
gMonIcon_Seel: @ 0x08C6ADCC [086]
  .incbin "build/graphics/pokemon/seel/icon.4bpp"
  .incbin "baserom.gba", 0xC6B1CC, 0x3E8

  .globl gMonPalette_Dewgong
gMonPalette_Dewgong:
  .incbin "build/graphics/pokemon/dewgong/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc6b5d1, 0x3
  .globl gMonBackPic_Dewgong
gMonBackPic_Dewgong:
  .incbin "build/graphics/pokemon/dewgong/back.4bpp.lz"

  .globl gMonShinyPalette_Dewgong
gMonShinyPalette_Dewgong:
  .incbin "build/graphics/pokemon/dewgong/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xC6B885, 0x3
	.globl gMonIcon_Dewgong
gMonIcon_Dewgong: @ 0x08C6B888 [087]
  .incbin "build/graphics/pokemon/dewgong/icon.4bpp"
  .incbin "baserom.gba", 0xC6BC88, 0x33C

  .globl gMonPalette_Grimer
gMonPalette_Grimer:
  .incbin "build/graphics/pokemon/grimer/normal_palette.gbapal.lz"

  .globl gMonBackPic_Grimer
gMonBackPic_Grimer:
  .incbin "build/graphics/pokemon/grimer/back.4bpp.lz"

  .globl gMonShinyPalette_Grimer
gMonShinyPalette_Grimer:
  .incbin "build/graphics/pokemon/grimer/shiny_palette.gbapal.lz"

	.globl gMonIcon_Grimer
gMonIcon_Grimer: @ 0x08C6C2F0 [088]
  .incbin "build/graphics/pokemon/grimer/icon.4bpp"
  .incbin "baserom.gba", 0xC6C6F0, 0x46C

  .globl gMonPalette_Muk
gMonPalette_Muk:
  .incbin "build/graphics/pokemon/muk/normal_palette.gbapal.lz"

  .globl gMonBackPic_Muk
gMonBackPic_Muk:
  .incbin "build/graphics/pokemon/muk/back.4bpp.lz"

  .globl gMonShinyPalette_Muk
gMonShinyPalette_Muk:
  .incbin "build/graphics/pokemon/muk/shiny_palette.gbapal.lz"

	.globl gMonIcon_Muk
gMonIcon_Muk: @ 0x08C6CEFC [089]
  .incbin "build/graphics/pokemon/muk/icon.4bpp"
  .incbin "baserom.gba", 0xC6D2FC, 0x288

  .globl gMonPalette_Shellder
gMonPalette_Shellder:
  .incbin "build/graphics/pokemon/shellder/normal_palette.gbapal.lz"

  .globl gMonBackPic_Shellder
gMonBackPic_Shellder:
  .incbin "build/graphics/pokemon/shellder/back.4bpp.lz"

  .globl gMonShinyPalette_Shellder
gMonShinyPalette_Shellder:
  .incbin "build/graphics/pokemon/shellder/shiny_palette.gbapal.lz"

	.globl gMonIcon_Shellder
gMonIcon_Shellder: @ 0x08C6D8E0 [090]
  .incbin "build/graphics/pokemon/shellder/icon.4bpp"
  .incbin "baserom.gba", 0xC6DCE0, 0x458

  .globl gMonPalette_Cloyster
gMonPalette_Cloyster:
  .incbin "build/graphics/pokemon/cloyster/normal_palette.gbapal.lz"

  .globl gMonBackPic_Cloyster
gMonBackPic_Cloyster:
  .incbin "build/graphics/pokemon/cloyster/back.4bpp.lz"

  .globl gMonShinyPalette_Cloyster
gMonShinyPalette_Cloyster:
  .incbin "build/graphics/pokemon/cloyster/shiny_palette.gbapal.lz"

	.globl gMonIcon_Cloyster
gMonIcon_Cloyster: @ 0x08C6E58C [091]
  .incbin "build/graphics/pokemon/cloyster/icon.4bpp"
  .incbin "baserom.gba", 0xC6E98C, 0x3D8

  .globl gMonPalette_Gastly
gMonPalette_Gastly:
  .incbin "build/graphics/pokemon/gastly/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc6ed8a, 0x2

  .globl gMonBackPic_Gastly
gMonBackPic_Gastly:
  .incbin "build/graphics/pokemon/gastly/back.4bpp.lz"

  .globl gMonShinyPalette_Gastly
gMonShinyPalette_Gastly:
  .incbin "build/graphics/pokemon/gastly/shiny_palette.gbapal.lz"

	.globl gMonIcon_Gastly
gMonIcon_Gastly: @ 0x08C6F0D8 [092]
  .incbin "build/graphics/pokemon/gastly/icon.4bpp"
  .incbin "baserom.gba", 0xC6F4D8, 0x420

  .globl gMonPalette_Haunter
gMonPalette_Haunter:
  .incbin "build/graphics/pokemon/haunter/normal_palette.gbapal.lz"

  .globl gMonBackPic_Haunter
gMonBackPic_Haunter:
  .incbin "build/graphics/pokemon/haunter/back.4bpp.lz"

  .globl gMonShinyPalette_Haunter
gMonShinyPalette_Haunter:
  .incbin "build/graphics/pokemon/haunter/shiny_palette.gbapal.lz"

	.globl gMonIcon_Haunter
gMonIcon_Haunter: @ 0x08C6FC68 [093]
  .incbin "build/graphics/pokemon/haunter/icon.4bpp"
  .incbin "baserom.gba", 0xC70068, 0x3BC

  .globl gMonPalette_Gengar
gMonPalette_Gengar:
  .incbin "build/graphics/pokemon/gengar/normal_palette.gbapal.lz"

  .globl gMonBackPic_Gengar
gMonBackPic_Gengar:
  .incbin "build/graphics/pokemon/gengar/back.4bpp.lz"

  .globl gMonShinyPalette_Gengar
gMonShinyPalette_Gengar:
  .incbin "build/graphics/pokemon/gengar/shiny_palette.gbapal.lz"

	.globl gMonIcon_Gengar
gMonIcon_Gengar: @ 0x08C70754 [094]
  .incbin "build/graphics/pokemon/gengar/icon.4bpp"
  .incbin "baserom.gba", 0xC70B54, 0x498

  .globl gMonPalette_Onix
gMonPalette_Onix:
  .incbin "build/graphics/pokemon/onix/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc71007, 0x1
  .globl gMonBackPic_Onix
gMonBackPic_Onix:
  .incbin "build/graphics/pokemon/onix/back.4bpp.lz"

  .globl gMonShinyPalette_Onix
gMonShinyPalette_Onix:
  .incbin "build/graphics/pokemon/onix/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xC7139F, 0x1
	.globl gMonIcon_Onix
gMonIcon_Onix: @ 0x08C713A0 [095]
  .incbin "build/graphics/pokemon/onix/icon.4bpp"
  .incbin "baserom.gba", 0xC717A0, 0x398

  .globl gMonPalette_Drowzee
gMonPalette_Drowzee:
  .incbin "build/graphics/pokemon/drowzee/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc71b5a, 0x2
  .globl gMonBackPic_Drowzee
gMonBackPic_Drowzee:
  .incbin "build/graphics/pokemon/drowzee/back.4bpp.lz"

  .globl gMonShinyPalette_Drowzee
gMonShinyPalette_Drowzee:
  .incbin "build/graphics/pokemon/drowzee/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xC71DDA, 0x2
	.globl gMonIcon_Drowzee
gMonIcon_Drowzee: @ 0x08C71DDC [096]
  .incbin "build/graphics/pokemon/drowzee/icon.4bpp"
  .incbin "baserom.gba", 0xC721DC, 0x40C

  .globl gMonPalette_Hypno
gMonPalette_Hypno:
  .incbin "build/graphics/pokemon/hypno/normal_palette.gbapal.lz"

  .globl gMonBackPic_Hypno
gMonBackPic_Hypno:
  .incbin "build/graphics/pokemon/hypno/back.4bpp.lz"

  .globl gMonShinyPalette_Hypno
gMonShinyPalette_Hypno:
  .incbin "build/graphics/pokemon/hypno/shiny_palette.gbapal.lz"

	.globl gMonIcon_Hypno
gMonIcon_Hypno: @ 0x08C72960 [097]
  .incbin "build/graphics/pokemon/hypno/icon.4bpp"
  .incbin "baserom.gba", 0xC72D60, 0x2D8

  .globl gMonPalette_Krabby
gMonPalette_Krabby:
  .incbin "build/graphics/pokemon/krabby/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc7305e, 0x2

  .globl gMonBackPic_Krabby
gMonBackPic_Krabby:
  .incbin "build/graphics/pokemon/krabby/back.4bpp.lz"

  .globl gMonShinyPalette_Krabby
gMonShinyPalette_Krabby:
  .incbin "build/graphics/pokemon/krabby/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xC73412, 0x2
	.globl gMonIcon_Krabby
gMonIcon_Krabby: @ 0x08C73414 [098]
  .incbin "build/graphics/pokemon/krabby/icon.4bpp"
  .incbin "baserom.gba", 0xC73814, 0x554

  .globl gMonPalette_Kingler
gMonPalette_Kingler:
  .incbin "build/graphics/pokemon/kingler/normal_palette.gbapal.lz"

  .globl gMonBackPic_Kingler
gMonBackPic_Kingler:
  .incbin "build/graphics/pokemon/kingler/back.4bpp.lz"

  .globl gMonShinyPalette_Kingler
gMonShinyPalette_Kingler:
  .incbin "build/graphics/pokemon/kingler/shiny_palette.gbapal.lz"

	.globl gMonIcon_Kingler
gMonIcon_Kingler: @ 0x08C74134 [099]
  .incbin "build/graphics/pokemon/kingler/icon.4bpp"
  .incbin "baserom.gba", 0xC74534, 0x228

  .globl gMonPalette_Voltorb
gMonPalette_Voltorb:
  .incbin "build/graphics/pokemon/voltorb/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc7477e, 0x2
  .globl gMonBackPic_Voltorb
gMonBackPic_Voltorb:
  .incbin "build/graphics/pokemon/voltorb/back.4bpp.lz"

  .globl gMonShinyPalette_Voltorb
gMonShinyPalette_Voltorb:
  .incbin "build/graphics/pokemon/voltorb/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xC74A16, 0x2
	.globl gMonIcon_Voltorb
gMonIcon_Voltorb: @ 0x08C74A18 [100]
  .incbin "build/graphics/pokemon/voltorb/icon.4bpp"
  .incbin "baserom.gba", 0xC74E18, 0x28C

  .globl gMonPalette_Electrode
gMonPalette_Electrode:
  .incbin "build/graphics/pokemon/electrode/normal_palette.gbapal.lz"

  .globl gMonBackPic_Electrode
gMonBackPic_Electrode:
  .incbin "build/graphics/pokemon/electrode/back.4bpp.lz"

  .globl gMonShinyPalette_Electrode
gMonShinyPalette_Electrode:
  .incbin "build/graphics/pokemon/electrode/shiny_palette.gbapal.lz"

	.globl gMonIcon_Electrode
gMonIcon_Electrode: @ 0x08C7535C [101]
  .incbin "build/graphics/pokemon/electrode/icon.4bpp"
  .incbin "baserom.gba", 0xC7575C, 0x424

  .globl gMonPalette_Exeggcute
gMonPalette_Exeggcute:
  .incbin "build/graphics/pokemon/exeggcute/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc75ba2, 0x2
  .globl gMonBackPic_Exeggcute
gMonBackPic_Exeggcute:
  .incbin "build/graphics/pokemon/exeggcute/back.4bpp.lz"

  .globl gMonShinyPalette_Exeggcute
gMonShinyPalette_Exeggcute:
  .incbin "build/graphics/pokemon/exeggcute/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xC75ECE, 0x2
	.globl gMonIcon_Exeggcute
gMonIcon_Exeggcute: @ 0x08C75ED0 [102]
  .incbin "build/graphics/pokemon/exeggcute/icon.4bpp"
  .incbin "baserom.gba", 0xC762D0, 0x520

  .globl gMonPalette_Exeggutor
gMonPalette_Exeggutor:
  .incbin "build/graphics/pokemon/exeggutor/normal_palette.gbapal.lz"

  .globl gMonBackPic_Exeggutor
gMonBackPic_Exeggutor:
  .incbin "build/graphics/pokemon/exeggutor/back.4bpp.lz"

  .globl gMonShinyPalette_Exeggutor
gMonShinyPalette_Exeggutor:
  .incbin "build/graphics/pokemon/exeggutor/shiny_palette.gbapal.lz"

	.globl gMonIcon_Exeggutor
gMonIcon_Exeggutor: @ 0x08C76CE0 [103]
  .incbin "build/graphics/pokemon/exeggutor/icon.4bpp"
  .incbin "baserom.gba", 0xC770E0, 0x2F0

  .globl gMonPalette_Cubone
gMonPalette_Cubone:
  .incbin "build/graphics/pokemon/cubone/normal_palette.gbapal.lz"

  .globl gMonBackPic_Cubone
gMonBackPic_Cubone:
  .incbin "build/graphics/pokemon/cubone/back.4bpp.lz"

  .globl gMonShinyPalette_Cubone
gMonShinyPalette_Cubone:
  .incbin "build/graphics/pokemon/cubone/shiny_palette.gbapal.lz"

	.globl gMonIcon_Cubone
gMonIcon_Cubone: @ 0x08C77760 [104]
  .incbin "build/graphics/pokemon/cubone/icon.4bpp"
  .incbin "baserom.gba", 0xC77B60, 0x3A8

  .globl gMonPalette_Marowak
gMonPalette_Marowak:
  .incbin "build/graphics/pokemon/marowak/normal_palette.gbapal.lz"

  .globl gMonBackPic_Marowak
gMonBackPic_Marowak:
  .incbin "build/graphics/pokemon/marowak/back.4bpp.lz"

  .globl gMonShinyPalette_Marowak
gMonShinyPalette_Marowak:
  .incbin "build/graphics/pokemon/marowak/shiny_palette.gbapal.lz"

	.globl gMonIcon_Marowak
gMonIcon_Marowak: @ 0x08C782A0 [105]
  .incbin "build/graphics/pokemon/marowak/icon.4bpp"
  .incbin "baserom.gba", 0xC786A0, 0x420

  .globl gMonPalette_Hitmonlee
gMonPalette_Hitmonlee:
  .incbin "build/graphics/pokemon/hitmonlee/normal_palette.gbapal.lz"

  .globl gMonBackPic_Hitmonlee
gMonBackPic_Hitmonlee:
  .incbin "build/graphics/pokemon/hitmonlee/back.4bpp.lz"

  .globl gMonShinyPalette_Hitmonlee
gMonShinyPalette_Hitmonlee:
  .incbin "build/graphics/pokemon/hitmonlee/shiny_palette.gbapal.lz"

	.globl gMonIcon_Hitmonlee
gMonIcon_Hitmonlee: @ 0x08C78DB4 [106]
  .incbin "build/graphics/pokemon/hitmonlee/icon.4bpp"
  .incbin "baserom.gba", 0xC791B4, 0x360

  .globl gMonPalette_Hitmonchan
gMonPalette_Hitmonchan:
  .incbin "build/graphics/pokemon/hitmonchan/normal_palette.gbapal.lz"

  .globl gMonBackPic_Hitmonchan
gMonBackPic_Hitmonchan:
  .incbin "build/graphics/pokemon/hitmonchan/back.4bpp.lz"

  .globl gMonShinyPalette_Hitmonchan
gMonShinyPalette_Hitmonchan:
  .incbin "build/graphics/pokemon/hitmonchan/shiny_palette.gbapal.lz"

	.globl gMonIcon_Hitmonchan
gMonIcon_Hitmonchan: @ 0x08C798A8 [107]
  .incbin "build/graphics/pokemon/hitmonchan/icon.4bpp"
  .incbin "baserom.gba", 0xC79CA8, 0x3D8

  .globl gMonPalette_Lickitung
gMonPalette_Lickitung:
  .incbin "build/graphics/pokemon/lickitung/normal_palette.gbapal.lz"

  .globl gMonBackPic_Lickitung
gMonBackPic_Lickitung:
  .incbin "build/graphics/pokemon/lickitung/back.4bpp.lz"

  .globl gMonShinyPalette_Lickitung
gMonShinyPalette_Lickitung:
  .incbin "build/graphics/pokemon/lickitung/shiny_palette.gbapal.lz"

	.globl gMonIcon_Lickitung
gMonIcon_Lickitung: @ 0x08C7A390 [108]
  .incbin "build/graphics/pokemon/lickitung/icon.4bpp"
  .incbin "baserom.gba", 0xC7A790, 0x37C

  .globl gMonPalette_Koffing
gMonPalette_Koffing:
  .incbin "build/graphics/pokemon/koffing/normal_palette.gbapal.lz"

  .globl gMonBackPic_Koffing
gMonBackPic_Koffing:
  .incbin "build/graphics/pokemon/koffing/back.4bpp.lz"

  .globl gMonShinyPalette_Koffing
gMonShinyPalette_Koffing:
  .incbin "build/graphics/pokemon/koffing/shiny_palette.gbapal.lz"

	.globl gMonIcon_Koffing
gMonIcon_Koffing: @ 0x08C7AE5C [109]
  .incbin "build/graphics/pokemon/koffing/icon.4bpp"
  .incbin "baserom.gba", 0xC7B25C, 0x4A8

  .globl gMonPalette_Weezing
gMonPalette_Weezing:
  .incbin "build/graphics/pokemon/weezing/normal_palette.gbapal.lz"

  .globl gMonBackPic_Weezing
gMonBackPic_Weezing:
  .incbin "build/graphics/pokemon/weezing/back.4bpp.lz"

  .globl gMonShinyPalette_Weezing
gMonShinyPalette_Weezing:
  .incbin "build/graphics/pokemon/weezing/shiny_palette.gbapal.lz"

	.globl gMonIcon_Weezing
gMonIcon_Weezing: @ 0x08C7BA84 [110]
  .incbin "build/graphics/pokemon/weezing/icon.4bpp"
  .incbin "baserom.gba", 0xC7BE84, 0x424

  .globl gMonPalette_Rhyhorn
gMonPalette_Rhyhorn:
  .incbin "build/graphics/pokemon/rhyhorn/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc7c2c7, 0x1
  .globl gMonBackPic_Rhyhorn
gMonBackPic_Rhyhorn:
  .incbin "build/graphics/pokemon/rhyhorn/back.4bpp.lz"

  .globl gMonShinyPalette_Rhyhorn
gMonShinyPalette_Rhyhorn:
  .incbin "build/graphics/pokemon/rhyhorn/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xC7C62F, 0x1
	.globl gMonIcon_Rhyhorn
gMonIcon_Rhyhorn: @ 0x08C7C630 [111]
  .incbin "build/graphics/pokemon/rhyhorn/icon.4bpp"
  .incbin "baserom.gba", 0xC7CA30, 0x528

  .globl gMonPalette_Rhydon
gMonPalette_Rhydon:
  .incbin "build/graphics/pokemon/rhydon/normal_palette.gbapal.lz"

  .globl gMonBackPic_Rhydon
gMonBackPic_Rhydon:
  .incbin "build/graphics/pokemon/rhydon/back.4bpp.lz"

  .globl gMonShinyPalette_Rhydon
gMonShinyPalette_Rhydon:
  .incbin "build/graphics/pokemon/rhydon/shiny_palette.gbapal.lz"

	.globl gMonIcon_Rhydon
gMonIcon_Rhydon: @ 0x08C7D3F8 [112]
  .incbin "build/graphics/pokemon/rhydon/icon.4bpp"
  .incbin "baserom.gba", 0xC7D7F8, 0x374

  .globl gMonPalette_Chansey
gMonPalette_Chansey:
  .incbin "build/graphics/pokemon/chansey/normal_palette.gbapal.lz"

  .globl gMonBackPic_Chansey
gMonBackPic_Chansey:
  .incbin "build/graphics/pokemon/chansey/back.4bpp.lz"

  .globl gMonShinyPalette_Chansey
gMonShinyPalette_Chansey:
  .incbin "build/graphics/pokemon/chansey/shiny_palette.gbapal.lz"

	.globl gMonIcon_Chansey
gMonIcon_Chansey: @ 0x08C7DE88 [113]
  .incbin "build/graphics/pokemon/chansey/icon.4bpp"
  .incbin "baserom.gba", 0xC7E288, 0x3F4

  .globl gMonPalette_Tangela
gMonPalette_Tangela:
  .incbin "build/graphics/pokemon/tangela/normal_palette.gbapal.lz"

  .globl gMonBackPic_Tangela
gMonBackPic_Tangela:
  .incbin "build/graphics/pokemon/tangela/back.4bpp.lz"

  .globl gMonShinyPalette_Tangela
gMonShinyPalette_Tangela:
  .incbin "build/graphics/pokemon/tangela/shiny_palette.gbapal.lz"

	.globl gMonIcon_Tangela
gMonIcon_Tangela: @ 0x08C7EA70 [114]
  .incbin "build/graphics/pokemon/tangela/icon.4bpp"
  .incbin "baserom.gba", 0xC7EE70, 0x518

  .globl gMonPalette_Kangaskhan
gMonPalette_Kangaskhan:
  .incbin "build/graphics/pokemon/kangaskhan/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc7f3af, 0x1

  .globl gMonBackPic_Kangaskhan
gMonBackPic_Kangaskhan:
  .incbin "build/graphics/pokemon/kangaskhan/back.4bpp.lz"

  .globl gMonShinyPalette_Kangaskhan
gMonShinyPalette_Kangaskhan:
  .incbin "build/graphics/pokemon/kangaskhan/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xC7F807, 0x1
	.globl gMonIcon_Kangaskhan
gMonIcon_Kangaskhan: @ 0x08C7F808 [115]
  .incbin "build/graphics/pokemon/kangaskhan/icon.4bpp"
  .incbin "baserom.gba", 0xC7FC08, 0x298

  .globl gMonPalette_Horsea
gMonPalette_Horsea:
  .incbin "build/graphics/pokemon/horsea/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc7fec6, 0x2

  .globl gMonBackPic_Horsea
gMonBackPic_Horsea:
  .incbin "build/graphics/pokemon/horsea/back.4bpp.lz"

  .globl gMonShinyPalette_Horsea
gMonShinyPalette_Horsea:
  .incbin "build/graphics/pokemon/horsea/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xC801CE, 0x2
	.globl gMonIcon_Horsea
gMonIcon_Horsea: @ 0x08C801D0 [116]
  .incbin "build/graphics/pokemon/horsea/icon.4bpp"
  .incbin "baserom.gba", 0xC805D0, 0x3E0

  .globl gMonPalette_Seadra
gMonPalette_Seadra:
  .incbin "build/graphics/pokemon/seadra/normal_palette.gbapal.lz"

  .globl gMonBackPic_Seadra
gMonBackPic_Seadra:
  .incbin "build/graphics/pokemon/seadra/back.4bpp.lz"

  .globl gMonShinyPalette_Seadra
gMonShinyPalette_Seadra:
  .incbin "build/graphics/pokemon/seadra/shiny_palette.gbapal.lz"

	.globl gMonIcon_Seadra
gMonIcon_Seadra: @ 0x08C80DA0 [117]
  .incbin "build/graphics/pokemon/seadra/icon.4bpp"
  .incbin "baserom.gba", 0xC811A0, 0x388

  .globl gMonPalette_Goldeen
gMonPalette_Goldeen:
  .incbin "build/graphics/pokemon/goldeen/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc8154e, 0x2

  .globl gMonBackPic_Goldeen
gMonBackPic_Goldeen:
  .incbin "build/graphics/pokemon/goldeen/back.4bpp.lz"

  .globl gMonShinyPalette_Goldeen
gMonShinyPalette_Goldeen:
  .incbin "build/graphics/pokemon/goldeen/shiny_palette.gbapal.lz"

	.globl gMonIcon_Goldeen
gMonIcon_Goldeen: @ 0x08C818E8 [118]
  .incbin "build/graphics/pokemon/goldeen/icon.4bpp"
  .incbin "baserom.gba", 0xC81CE8, 0x494

  .globl gMonPalette_Seaking
gMonPalette_Seaking:
  .incbin "build/graphics/pokemon/seaking/normal_palette.gbapal.lz"

  .globl gMonBackPic_Seaking
gMonBackPic_Seaking:
  .incbin "build/graphics/pokemon/seaking/back.4bpp.lz"

  .globl gMonShinyPalette_Seaking
gMonShinyPalette_Seaking:
  .incbin "build/graphics/pokemon/seaking/shiny_palette.gbapal.lz"

	.globl gMonIcon_Seaking
gMonIcon_Seaking: @ 0x08C8251C [119]
  .incbin "build/graphics/pokemon/seaking/icon.4bpp"
  .incbin "baserom.gba", 0xC8291C, 0x304

  .globl gMonPalette_Staryu
gMonPalette_Staryu:
  .incbin "build/graphics/pokemon/staryu/normal_palette.gbapal.lz"

  .globl gMonBackPic_Staryu
gMonBackPic_Staryu:
  .incbin "build/graphics/pokemon/staryu/back.4bpp.lz"

  .globl gMonShinyPalette_Staryu
gMonShinyPalette_Staryu:
  .incbin "build/graphics/pokemon/staryu/shiny_palette.gbapal.lz"

	.globl gMonIcon_Staryu
gMonIcon_Staryu: @ 0x08C82EFC [120]
  .incbin "build/graphics/pokemon/staryu/icon.4bpp"
  .incbin "baserom.gba", 0xC832FC, 0x448

  .globl gMonPalette_Starmie
gMonPalette_Starmie:
  .incbin "build/graphics/pokemon/starmie/normal_palette.gbapal.lz"

  .globl gMonBackPic_Starmie
gMonBackPic_Starmie:
  .incbin "build/graphics/pokemon/starmie/back.4bpp.lz"

  .globl gMonShinyPalette_Starmie
gMonShinyPalette_Starmie:
  .incbin "build/graphics/pokemon/starmie/shiny_palette.gbapal.lz"

	.globl gMonIcon_Starmie
gMonIcon_Starmie: @ 0x08C83A38 [121]
  .incbin "build/graphics/pokemon/starmie/icon.4bpp"
  .incbin "baserom.gba", 0xC83E38, 0x3D0

  .globl gMonPalette_MrMime
gMonPalette_MrMime:
  .incbin "build/graphics/pokemon/mr_mime/normal_palette.gbapal.lz"

  .globl gMonBackPic_MrMime
gMonBackPic_MrMime:
  .incbin "build/graphics/pokemon/mr_mime/back.4bpp.lz"

  .globl gMonShinyPalette_MrMime
gMonShinyPalette_MrMime:
  .incbin "build/graphics/pokemon/mr_mime/shiny_palette.gbapal.lz"

	.globl gMonIcon_MrMime
gMonIcon_MrMime: @ 0x08C8458C [122]
  .incbin "build/graphics/pokemon/mr_mime/icon.4bpp"
  .incbin "baserom.gba", 0xC8498C, 0x4CC

  .globl gMonPalette_Scyther
gMonPalette_Scyther:
  .incbin "build/graphics/pokemon/scyther/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc84e7e, 0x2

  .globl gMonBackPic_Scyther
gMonBackPic_Scyther:
  .incbin "build/graphics/pokemon/scyther/back.4bpp.lz"

  .globl gMonShinyPalette_Scyther
gMonShinyPalette_Scyther:
  .incbin "build/graphics/pokemon/scyther/shiny_palette.gbapal.lz"

	.globl gMonIcon_Scyther
gMonIcon_Scyther: @ 0x08C85250 [123]
  .incbin "build/graphics/pokemon/scyther/icon.4bpp"
  .incbin "baserom.gba", 0xC85650, 0x4BC

  .globl gMonPalette_Jynx
gMonPalette_Jynx:
  .incbin "build/graphics/pokemon/jynx/normal_palette.gbapal.lz"

  .globl gMonBackPic_Jynx
gMonBackPic_Jynx:
  .incbin "build/graphics/pokemon/jynx/back.4bpp.lz"

  .globl gMonShinyPalette_Jynx
gMonShinyPalette_Jynx:
  .incbin "build/graphics/pokemon/jynx/shiny_palette.gbapal.lz"

	.globl gMonIcon_Jynx
gMonIcon_Jynx: @ 0x08C85E54 [124]
  .incbin "build/graphics/pokemon/jynx/icon.4bpp"
  .incbin "baserom.gba", 0xC86254, 0x49C

  .globl gMonPalette_Electabuzz
gMonPalette_Electabuzz:
  .incbin "build/graphics/pokemon/electabuzz/normal_palette.gbapal.lz"

  .globl gMonBackPic_Electabuzz
gMonBackPic_Electabuzz:
  .incbin "build/graphics/pokemon/electabuzz/back.4bpp.lz"

  .globl gMonShinyPalette_Electabuzz
gMonShinyPalette_Electabuzz:
  .incbin "build/graphics/pokemon/electabuzz/shiny_palette.gbapal.lz"

	.globl gMonIcon_Electabuzz
gMonIcon_Electabuzz: @ 0x08C86A50 [125]
  .incbin "build/graphics/pokemon/electabuzz/icon.4bpp"
  .incbin "baserom.gba", 0xC86E50, 0x4C8

  .globl gMonPalette_Magmar
gMonPalette_Magmar:
  .incbin "build/graphics/pokemon/magmar/normal_palette.gbapal.lz"

  .globl gMonBackPic_Magmar
gMonBackPic_Magmar:
  .incbin "build/graphics/pokemon/magmar/back.4bpp.lz"

  .globl gMonShinyPalette_Magmar
gMonShinyPalette_Magmar:
  .incbin "build/graphics/pokemon/magmar/shiny_palette.gbapal.lz"

	.globl gMonIcon_Magmar
gMonIcon_Magmar: @ 0x08C876B0 [126]
  .incbin "build/graphics/pokemon/magmar/icon.4bpp"
  .incbin "baserom.gba", 0xC87AB0, 0x448

  .globl gMonPalette_Pinsir
gMonPalette_Pinsir:
  .incbin "build/graphics/pokemon/pinsir/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc87f1a, 0x2
  .globl gMonBackPic_Pinsir
gMonBackPic_Pinsir:
  .incbin "build/graphics/pokemon/pinsir/back.4bpp.lz"

  .globl gMonShinyPalette_Pinsir
gMonShinyPalette_Pinsir:
  .incbin "build/graphics/pokemon/pinsir/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xC88292, 0x2
	.globl gMonIcon_Pinsir
gMonIcon_Pinsir: @ 0x08C88294 [127]
  .incbin "build/graphics/pokemon/pinsir/icon.4bpp"
  .incbin "baserom.gba", 0xC88694, 0x4F0

  .globl gMonPalette_Tauros
gMonPalette_Tauros:
  .incbin "build/graphics/pokemon/tauros/normal_palette.gbapal.lz"

  .globl gMonBackPic_Tauros
gMonBackPic_Tauros:
  .incbin "build/graphics/pokemon/tauros/back.4bpp.lz"

  .globl gMonShinyPalette_Tauros
gMonShinyPalette_Tauros:
  .incbin "build/graphics/pokemon/tauros/shiny_palette.gbapal.lz"

	.globl gMonIcon_Tauros
gMonIcon_Tauros: @ 0x08C88E88 [128]
  .incbin "build/graphics/pokemon/tauros/icon.4bpp"
  .incbin "baserom.gba", 0xC89288, 0x370

  .globl gMonPalette_Magikarp
gMonPalette_Magikarp:
  .incbin "build/graphics/pokemon/magikarp/normal_palette.gbapal.lz"

  .globl gMonBackPic_Magikarp
gMonBackPic_Magikarp:
  .incbin "build/graphics/pokemon/magikarp/back.4bpp.lz"

  .globl gMonShinyPalette_Magikarp
gMonShinyPalette_Magikarp:
  .incbin "build/graphics/pokemon/magikarp/shiny_palette.gbapal.lz"

	.globl gMonIcon_Magikarp
gMonIcon_Magikarp: @ 0x08C89978 [129]
  .incbin "build/graphics/pokemon/magikarp/icon.4bpp"
  .incbin "baserom.gba", 0xC89D78, 0x588

  .globl gMonPalette_Gyarados
gMonPalette_Gyarados:
  .incbin "build/graphics/pokemon/gyarados/normal_palette.gbapal.lz"

  .globl gMonBackPic_Gyarados
gMonBackPic_Gyarados:
  .incbin "build/graphics/pokemon/gyarados/back.4bpp.lz"

  .globl gMonShinyPalette_Gyarados
gMonShinyPalette_Gyarados:
  .incbin "build/graphics/pokemon/gyarados/shiny_palette.gbapal.lz"

	.globl gMonIcon_Gyarados
gMonIcon_Gyarados: @ 0x08C8A824 [130]
  .incbin "build/graphics/pokemon/gyarados/icon.4bpp"
  .incbin "baserom.gba", 0xC8AC24, 0x3E0

  .globl gMonPalette_Lapras
gMonPalette_Lapras:
  .incbin "build/graphics/pokemon/lapras/normal_palette.gbapal.lz"

  .globl gMonBackPic_Lapras
gMonBackPic_Lapras:
  .incbin "build/graphics/pokemon/lapras/back.4bpp.lz"

  .globl gMonShinyPalette_Lapras
gMonShinyPalette_Lapras:
  .incbin "build/graphics/pokemon/lapras/shiny_palette.gbapal.lz"

	.globl gMonIcon_Lapras
gMonIcon_Lapras: @ 0x08C8B398 [131]
  .incbin "build/graphics/pokemon/lapras/icon.4bpp"
  .incbin "baserom.gba", 0xC8B798, 0x210

  .globl gMonPalette_Ditto
gMonPalette_Ditto:
  .incbin "build/graphics/pokemon/ditto/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc8b9c5, 0x3
  .globl gMonBackPic_Ditto
gMonBackPic_Ditto:
  .incbin "build/graphics/pokemon/ditto/back.4bpp.lz"

  .globl gMonShinyPalette_Ditto
gMonShinyPalette_Ditto:
  .incbin "build/graphics/pokemon/ditto/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xC8BBE5, 0x3
	.globl gMonIcon_Ditto
gMonIcon_Ditto: @ 0x08C8BBE8 [132]
  .incbin "build/graphics/pokemon/ditto/icon.4bpp"
  .incbin "baserom.gba", 0xC8BFE8, 0x2C4

  .globl gMonPalette_Eevee
gMonPalette_Eevee:
  .incbin "build/graphics/pokemon/eevee/normal_palette.gbapal.lz"

  .globl gMonBackPic_Eevee
gMonBackPic_Eevee:
  .incbin "build/graphics/pokemon/eevee/back.4bpp.lz"

  .globl gMonShinyPalette_Eevee
gMonShinyPalette_Eevee:
  .incbin "build/graphics/pokemon/eevee/shiny_palette.gbapal.lz"

	.globl gMonIcon_Eevee
gMonIcon_Eevee: @ 0x08C8C61C [133]
  .incbin "build/graphics/pokemon/eevee/icon.4bpp"
  .incbin "baserom.gba", 0xC8CA1C, 0x3B4

  .globl gMonPalette_Vaporeon
gMonPalette_Vaporeon:
  .incbin "build/graphics/pokemon/vaporeon/normal_palette.gbapal.lz"

  .globl gMonBackPic_Vaporeon
gMonBackPic_Vaporeon:
  .incbin "build/graphics/pokemon/vaporeon/back.4bpp.lz"

  .globl gMonShinyPalette_Vaporeon
gMonShinyPalette_Vaporeon:
  .incbin "build/graphics/pokemon/vaporeon/shiny_palette.gbapal.lz"

	.globl gMonIcon_Vaporeon
gMonIcon_Vaporeon: @ 0x08C8D0E8 [134]
  .incbin "build/graphics/pokemon/vaporeon/icon.4bpp"
  .incbin "baserom.gba", 0xC8D4E8, 0x3C0

  .globl gMonPalette_Jolteon
gMonPalette_Jolteon:
  .incbin "build/graphics/pokemon/jolteon/normal_palette.gbapal.lz"

  .globl gMonBackPic_Jolteon
gMonBackPic_Jolteon:
  .incbin "build/graphics/pokemon/jolteon/back.4bpp.lz"

  .globl gMonShinyPalette_Jolteon
gMonShinyPalette_Jolteon:
  .incbin "build/graphics/pokemon/jolteon/shiny_palette.gbapal.lz"

	.globl gMonIcon_Jolteon
gMonIcon_Jolteon: @ 0x08C8DC88 [135]
  .incbin "build/graphics/pokemon/jolteon/icon.4bpp"
  .incbin "baserom.gba", 0xC8E088, 0x39C

  .globl gMonPalette_Flareon
gMonPalette_Flareon:
  .incbin "build/graphics/pokemon/flareon/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc8e44a, 0x2

  .globl gMonBackPic_Flareon
gMonBackPic_Flareon:
  .incbin "build/graphics/pokemon/flareon/back.4bpp.lz"

  .globl gMonShinyPalette_Flareon
gMonShinyPalette_Flareon:
  .incbin "build/graphics/pokemon/flareon/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xC8E802, 0x2
	.globl gMonIcon_Flareon
gMonIcon_Flareon: @ 0x08C8E804 [136]
  .incbin "build/graphics/pokemon/flareon/icon.4bpp"
  .incbin "baserom.gba", 0xC8EC04, 0x2DC

  .globl gMonPalette_Porygon
gMonPalette_Porygon:
  .incbin "build/graphics/pokemon/porygon/normal_palette.gbapal.lz"

  .globl gMonBackPic_Porygon
gMonBackPic_Porygon:
  .incbin "build/graphics/pokemon/porygon/back.4bpp.lz"

  .globl gMonShinyPalette_Porygon
gMonShinyPalette_Porygon:
  .incbin "build/graphics/pokemon/porygon/shiny_palette.gbapal.lz"

	.globl gMonIcon_Porygon
gMonIcon_Porygon: @ 0x08C8F1E0 [137]
  .incbin "build/graphics/pokemon/porygon/icon.4bpp"
  .incbin "baserom.gba", 0xC8F5E0, 0x2C8

  .globl gMonPalette_Omanyte
gMonPalette_Omanyte:
  .incbin "build/graphics/pokemon/omanyte/normal_palette.gbapal.lz"

  .globl gMonBackPic_Omanyte
gMonBackPic_Omanyte:
  .incbin "build/graphics/pokemon/omanyte/back.4bpp.lz"

  .globl gMonShinyPalette_Omanyte
gMonShinyPalette_Omanyte:
  .incbin "build/graphics/pokemon/omanyte/shiny_palette.gbapal.lz"

	.globl gMonIcon_Omanyte
gMonIcon_Omanyte: @ 0x08C8FC44 [138]
  .incbin "build/graphics/pokemon/omanyte/icon.4bpp"
  .incbin "baserom.gba", 0xC90044, 0x3E0

  .globl gMonPalette_Omastar
gMonPalette_Omastar:
  .incbin "build/graphics/pokemon/omastar/normal_palette.gbapal.lz"

  .globl gMonBackPic_Omastar
gMonBackPic_Omastar:
  .incbin "build/graphics/pokemon/omastar/back.4bpp.lz"

  .globl gMonShinyPalette_Omastar
gMonShinyPalette_Omastar:
  .incbin "build/graphics/pokemon/omastar/shiny_palette.gbapal.lz"

	.globl gMonIcon_Omastar
gMonIcon_Omastar: @ 0x08C907B4 [139]
  .incbin "build/graphics/pokemon/omastar/icon.4bpp"
  .incbin "baserom.gba", 0xC90BB4, 0x290

  .globl gMonPalette_Kabuto
gMonPalette_Kabuto:
  .incbin "build/graphics/pokemon/kabuto/normal_palette.gbapal.lz"

  .globl gMonBackPic_Kabuto
gMonBackPic_Kabuto:
  .incbin "build/graphics/pokemon/kabuto/back.4bpp.lz"

  .globl gMonShinyPalette_Kabuto
gMonShinyPalette_Kabuto:
  .incbin "build/graphics/pokemon/kabuto/shiny_palette.gbapal.lz"

	.globl gMonIcon_Kabuto
gMonIcon_Kabuto: @ 0x08C9112C [140]
  .incbin "build/graphics/pokemon/kabuto/icon.4bpp"
  .incbin "baserom.gba", 0xC9152C, 0x420

  .globl gMonPalette_Kabutops
gMonPalette_Kabutops:
  .incbin "build/graphics/pokemon/kabutops/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc9196e, 0x2
  .globl gMonBackPic_Kabutops
gMonBackPic_Kabutops:
  .incbin "build/graphics/pokemon/kabutops/back.4bpp.lz"

  .globl gMonShinyPalette_Kabutops
gMonShinyPalette_Kabutops:
  .incbin "build/graphics/pokemon/kabutops/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xC91D36, 0x2
	.globl gMonIcon_Kabutops
gMonIcon_Kabutops: @ 0x08C91D38 [141]
  .incbin "build/graphics/pokemon/kabutops/icon.4bpp"
  .incbin "baserom.gba", 0xC92138, 0x4A0

  .globl gMonPalette_Aerodactyl
gMonPalette_Aerodactyl:
  .incbin "build/graphics/pokemon/aerodactyl/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc925fe, 0x2

  .globl gMonBackPic_Aerodactyl
gMonBackPic_Aerodactyl:
  .incbin "build/graphics/pokemon/aerodactyl/back.4bpp.lz"

  .globl gMonShinyPalette_Aerodactyl
gMonShinyPalette_Aerodactyl:
  .incbin "build/graphics/pokemon/aerodactyl/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xC9292A, 0x2
	.globl gMonIcon_Aerodactyl
gMonIcon_Aerodactyl: @ 0x08C9292C [142]
  .incbin "build/graphics/pokemon/aerodactyl/icon.4bpp"
  .incbin "baserom.gba", 0xC92D2C, 0x464

  .globl gMonPalette_Snorlax
gMonPalette_Snorlax:
  .incbin "build/graphics/pokemon/snorlax/normal_palette.gbapal.lz"

  .globl gMonBackPic_Snorlax
gMonBackPic_Snorlax:
  .incbin "build/graphics/pokemon/snorlax/back.4bpp.lz"

  .globl gMonShinyPalette_Snorlax
gMonShinyPalette_Snorlax:
  .incbin "build/graphics/pokemon/snorlax/shiny_palette.gbapal.lz"

	.globl gMonIcon_Snorlax
gMonIcon_Snorlax: @ 0x08C933FC [143]
  .incbin "build/graphics/pokemon/snorlax/icon.4bpp"
  .incbin "baserom.gba", 0xC937FC, 0x518

  .globl gMonPalette_Articuno
gMonPalette_Articuno:
  .incbin "build/graphics/pokemon/articuno/normal_palette.gbapal.lz"

  .globl gMonBackPic_Articuno
gMonBackPic_Articuno:
  .incbin "build/graphics/pokemon/articuno/back.4bpp.lz"

  .globl gMonShinyPalette_Articuno
gMonShinyPalette_Articuno:
  .incbin "build/graphics/pokemon/articuno/shiny_palette.gbapal.lz"

	.globl gMonIcon_Articuno
gMonIcon_Articuno: @ 0x08C93FC0 [144]
  .incbin "build/graphics/pokemon/articuno/icon.4bpp"
  .incbin "baserom.gba", 0xC943C0, 0x494

  .globl gMonPalette_Zapdos
gMonPalette_Zapdos:
  .incbin "build/graphics/pokemon/zapdos/normal_palette.gbapal.lz"

  .globl gMonBackPic_Zapdos
gMonBackPic_Zapdos:
  .incbin "build/graphics/pokemon/zapdos/back.4bpp.lz"

  .globl gMonShinyPalette_Zapdos
gMonShinyPalette_Zapdos:
  .incbin "build/graphics/pokemon/zapdos/shiny_palette.gbapal.lz"

	.globl gMonIcon_Zapdos
gMonIcon_Zapdos: @ 0x08C94BE0 [145]
  .incbin "build/graphics/pokemon/zapdos/icon.4bpp"
  .incbin "baserom.gba", 0xC94FE0, 0x5D0

  .globl gMonPalette_Moltres
gMonPalette_Moltres:
  .incbin "build/graphics/pokemon/moltres/normal_palette.gbapal.lz"

  .globl gMonBackPic_Moltres
gMonBackPic_Moltres:
  .incbin "build/graphics/pokemon/moltres/back.4bpp.lz"

  .globl gMonShinyPalette_Moltres
gMonShinyPalette_Moltres:
  .incbin "build/graphics/pokemon/moltres/shiny_palette.gbapal.lz"

	.globl gMonIcon_Moltres
gMonIcon_Moltres: @ 0x08C9593C [146]
  .incbin "build/graphics/pokemon/moltres/icon.4bpp"
  .incbin "baserom.gba", 0xC95D3C, 0x2D8

  .globl gMonPalette_Dratini
gMonPalette_Dratini:
  .incbin "build/graphics/pokemon/dratini/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc96036, 0x2
  .globl gMonBackPic_Dratini
gMonBackPic_Dratini:
  .incbin "build/graphics/pokemon/dratini/back.4bpp.lz"

  .globl gMonShinyPalette_Dratini
gMonShinyPalette_Dratini:
  .incbin "build/graphics/pokemon/dratini/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xC962EA, 0x2
	.globl gMonIcon_Dratini
gMonIcon_Dratini: @ 0x08C962EC [147]
  .incbin "build/graphics/pokemon/dratini/icon.4bpp"
  .incbin "baserom.gba", 0xC966EC, 0x380

  .globl gMonPalette_Dragonair
gMonPalette_Dragonair:
  .incbin "build/graphics/pokemon/dragonair/normal_palette.gbapal.lz"

  .globl gMonBackPic_Dragonair
gMonBackPic_Dragonair:
  .incbin "build/graphics/pokemon/dragonair/back.4bpp.lz"

  .globl gMonShinyPalette_Dragonair
gMonShinyPalette_Dragonair:
  .incbin "build/graphics/pokemon/dragonair/shiny_palette.gbapal.lz"

	.globl gMonIcon_Dragonair
gMonIcon_Dragonair: @ 0x08C96DCC [148]
  .incbin "build/graphics/pokemon/dragonair/icon.4bpp"
  .incbin "baserom.gba", 0xC971CC, 0x590

  .globl gMonPalette_Dragonite
gMonPalette_Dragonite:
  .incbin "build/graphics/pokemon/dragonite/normal_palette.gbapal.lz"

  .globl gMonBackPic_Dragonite
gMonBackPic_Dragonite:
  .incbin "build/graphics/pokemon/dragonite/back.4bpp.lz"

  .globl gMonShinyPalette_Dragonite
gMonShinyPalette_Dragonite:
  .incbin "build/graphics/pokemon/dragonite/shiny_palette.gbapal.lz"

	.globl gMonIcon_Dragonite
gMonIcon_Dragonite: @ 0x08C97AA8 [149]
  .incbin "build/graphics/pokemon/dragonite/icon.4bpp"
  .incbin "baserom.gba", 0xC97EA8, 0x45C

  .globl gMonPalette_Mewtwo
gMonPalette_Mewtwo:
  .incbin "build/graphics/pokemon/mewtwo/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc98326, 0x2
  .globl gMonBackPic_Mewtwo
gMonBackPic_Mewtwo:
  .incbin "build/graphics/pokemon/mewtwo/back.4bpp.lz"

  .globl gMonShinyPalette_Mewtwo
gMonShinyPalette_Mewtwo:
  .incbin "build/graphics/pokemon/mewtwo/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xC98716, 0x2
	.globl gMonIcon_Mewtwo
gMonIcon_Mewtwo: @ 0x08C98718 [150]
  .incbin "build/graphics/pokemon/mewtwo/icon.4bpp"
  .incbin "baserom.gba", 0xC98B18, 0x2A0

  .globl gMonPalette_Mew
gMonPalette_Mew:
  .incbin "build/graphics/pokemon/mew/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc98dda, 0x2
  .globl gMonBackPic_Mew
gMonBackPic_Mew:
  .incbin "build/graphics/pokemon/mew/back.4bpp.lz"

  .globl gMonShinyPalette_Mew
gMonShinyPalette_Mew:
  .incbin "build/graphics/pokemon/mew/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xC990CA, 0x2
	.globl gMonIcon_Mew
gMonIcon_Mew: @ 0x08C990CC [151]
  .incbin "build/graphics/pokemon/mew/icon.4bpp"
  .incbin "baserom.gba", 0xC994CC, 0x288

  .globl gMonPalette_Chikorita
gMonPalette_Chikorita:
  .incbin "build/graphics/pokemon/chikorita/normal_palette.gbapal.lz"

  .globl gMonBackPic_Chikorita
gMonBackPic_Chikorita:
  .incbin "build/graphics/pokemon/chikorita/back.4bpp.lz"

  .globl gMonShinyPalette_Chikorita
gMonShinyPalette_Chikorita:
  .incbin "build/graphics/pokemon/chikorita/shiny_palette.gbapal.lz"

	.globl gMonIcon_Chikorita
gMonIcon_Chikorita: @ 0x08C99A68 [152]
  .incbin "build/graphics/pokemon/chikorita/icon.4bpp"
  .incbin "baserom.gba", 0xC99E68, 0x3F4

  .globl gMonPalette_Bayleef
gMonPalette_Bayleef:
  .incbin "build/graphics/pokemon/bayleef/normal_palette.gbapal.lz"

  .globl gMonBackPic_Bayleef
gMonBackPic_Bayleef:
  .incbin "build/graphics/pokemon/bayleef/back.4bpp.lz"

  .globl gMonShinyPalette_Bayleef
gMonShinyPalette_Bayleef:
  .incbin "build/graphics/pokemon/bayleef/shiny_palette.gbapal.lz"

	.globl gMonIcon_Bayleef
gMonIcon_Bayleef: @ 0x08C9A63C [153]
  .incbin "build/graphics/pokemon/bayleef/icon.4bpp"
  .incbin "baserom.gba", 0xC9AA3C, 0x57C

  .globl gMonPalette_Meganium
gMonPalette_Meganium:
  .incbin "build/graphics/pokemon/meganium/normal_palette.gbapal.lz"

  .globl gMonBackPic_Meganium
gMonBackPic_Meganium:
  .incbin "build/graphics/pokemon/meganium/back.4bpp.lz"

  .globl gMonShinyPalette_Meganium
gMonShinyPalette_Meganium:
  .incbin "build/graphics/pokemon/meganium/shiny_palette.gbapal.lz"

	.globl gMonIcon_Meganium
gMonIcon_Meganium: @ 0x08C9B358 [154]
  .incbin "build/graphics/pokemon/meganium/icon.4bpp"
  .incbin "baserom.gba", 0xC9B758, 0x2AC

  .globl gMonPalette_Cyndaquil
gMonPalette_Cyndaquil:
  .incbin "build/graphics/pokemon/cyndaquil/normal_palette.gbapal.lz"

  .globl gMonBackPic_Cyndaquil
gMonBackPic_Cyndaquil:
  .incbin "build/graphics/pokemon/cyndaquil/back.4bpp.lz"

  .globl gMonShinyPalette_Cyndaquil
gMonShinyPalette_Cyndaquil:
  .incbin "build/graphics/pokemon/cyndaquil/shiny_palette.gbapal.lz"

	.globl gMonIcon_Cyndaquil
gMonIcon_Cyndaquil: @ 0x08C9BD80 [155]
  .incbin "build/graphics/pokemon/cyndaquil/icon.4bpp"
  .incbin "baserom.gba", 0xC9C180, 0x33C

  .globl gMonPalette_Quilava
gMonPalette_Quilava:
  .incbin "build/graphics/pokemon/quilava/normal_palette.gbapal.lz"

  .globl gMonBackPic_Quilava
gMonBackPic_Quilava:
  .incbin "build/graphics/pokemon/quilava/back.4bpp.lz"

  .globl gMonShinyPalette_Quilava
gMonShinyPalette_Quilava:
  .incbin "build/graphics/pokemon/quilava/shiny_palette.gbapal.lz"

	.globl gMonIcon_Quilava
gMonIcon_Quilava: @ 0x08C9C880 [156]
  .incbin "build/graphics/pokemon/quilava/icon.4bpp"
  .incbin "baserom.gba", 0xC9CC80, 0x448

  .globl gMonPalette_Typhlosion
gMonPalette_Typhlosion:
  .incbin "build/graphics/pokemon/typhlosion/normal_palette.gbapal.lz"

  .globl gMonBackPic_Typhlosion
gMonBackPic_Typhlosion:
  .incbin "build/graphics/pokemon/typhlosion/back.4bpp.lz"

  .globl gMonShinyPalette_Typhlosion
gMonShinyPalette_Typhlosion:
  .incbin "build/graphics/pokemon/typhlosion/shiny_palette.gbapal.lz"

	.globl gMonIcon_Typhlosion
gMonIcon_Typhlosion: @ 0x08C9D51C [157]
  .incbin "build/graphics/pokemon/typhlosion/icon.4bpp"
  .incbin "baserom.gba", 0xC9D91C, 0x2C4

  .globl gMonPalette_Totodile
gMonPalette_Totodile:
  .incbin "build/graphics/pokemon/totodile/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc9dc06, 0x2

  .globl gMonBackPic_Totodile
gMonBackPic_Totodile:
  .incbin "build/graphics/pokemon/totodile/back.4bpp.lz"

  .globl gMonShinyPalette_Totodile
gMonShinyPalette_Totodile:
  .incbin "build/graphics/pokemon/totodile/shiny_palette.gbapal.lz"

	.globl gMonIcon_Totodile
gMonIcon_Totodile: @ 0x08C9DF10 [158]
  .incbin "build/graphics/pokemon/totodile/icon.4bpp"
  .incbin "baserom.gba", 0xC9E310, 0x388

  .globl gMonPalette_Croconaw
gMonPalette_Croconaw:
  .incbin "build/graphics/pokemon/croconaw/normal_palette.gbapal.lz"

  .globl gMonBackPic_Croconaw
gMonBackPic_Croconaw:
  .incbin "build/graphics/pokemon/croconaw/back.4bpp.lz"

  .globl gMonShinyPalette_Croconaw
gMonShinyPalette_Croconaw:
  .incbin "build/graphics/pokemon/croconaw/shiny_palette.gbapal.lz"

	.globl gMonIcon_Croconaw
gMonIcon_Croconaw: @ 0x08C9EA38 [159]
  .incbin "build/graphics/pokemon/croconaw/icon.4bpp"
  .incbin "baserom.gba", 0xC9EE38, 0x58C

  .globl gMonPalette_Feraligatr
gMonPalette_Feraligatr:
  .incbin "build/graphics/pokemon/feraligatr/normal_palette.gbapal.lz"

  .globl gMonBackPic_Feraligatr
gMonBackPic_Feraligatr:
  .incbin "build/graphics/pokemon/feraligatr/back.4bpp.lz"

  .globl gMonShinyPalette_Feraligatr
gMonShinyPalette_Feraligatr:
  .incbin "build/graphics/pokemon/feraligatr/shiny_palette.gbapal.lz"

	.globl gMonIcon_Feraligatr
gMonIcon_Feraligatr: @ 0x08C9F8E0 [160]
  .incbin "build/graphics/pokemon/feraligatr/icon.4bpp"
  .incbin "baserom.gba", 0xC9FCE0, 0x2FC

  .globl gMonPalette_Sentret
gMonPalette_Sentret:
  .incbin "build/graphics/pokemon/sentret/normal_palette.gbapal.lz"

  .globl gMonBackPic_Sentret
gMonBackPic_Sentret:
  .incbin "build/graphics/pokemon/sentret/back.4bpp.lz"

  .globl gMonShinyPalette_Sentret
gMonShinyPalette_Sentret:
  .incbin "build/graphics/pokemon/sentret/shiny_palette.gbapal.lz"

	.globl gMonIcon_Sentret
gMonIcon_Sentret: @ 0x08CA02D0 [161]
  .incbin "build/graphics/pokemon/sentret/icon.4bpp"
  .incbin "baserom.gba", 0xCA06D0, 0x354

  .globl gMonPalette_Furret
gMonPalette_Furret:
  .incbin "build/graphics/pokemon/furret/normal_palette.gbapal.lz"

  .globl gMonBackPic_Furret
gMonBackPic_Furret:
  .incbin "build/graphics/pokemon/furret/back.4bpp.lz"

  .globl gMonShinyPalette_Furret
gMonShinyPalette_Furret:
  .incbin "build/graphics/pokemon/furret/shiny_palette.gbapal.lz"

	.globl gMonIcon_Furret
gMonIcon_Furret: @ 0x08CA0D9C [162]
  .incbin "build/graphics/pokemon/furret/icon.4bpp"
  .incbin "baserom.gba", 0xCA119C, 0x2A4

  .globl gMonPalette_Hoothoot
gMonPalette_Hoothoot:
  .incbin "build/graphics/pokemon/hoothoot/normal_palette.gbapal.lz"

  .globl gMonBackPic_Hoothoot
gMonBackPic_Hoothoot:
  .incbin "build/graphics/pokemon/hoothoot/back.4bpp.lz"

  .globl gMonShinyPalette_Hoothoot
gMonShinyPalette_Hoothoot:
  .incbin "build/graphics/pokemon/hoothoot/shiny_palette.gbapal.lz"

	.globl gMonIcon_Hoothoot
gMonIcon_Hoothoot: @ 0x08CA1798 [163]
  .incbin "build/graphics/pokemon/hoothoot/icon.4bpp"
  .incbin "baserom.gba", 0xCA1B98, 0x374

  .globl gMonPalette_Noctowl
gMonPalette_Noctowl:
  .incbin "build/graphics/pokemon/noctowl/normal_palette.gbapal.lz"

  .globl gMonBackPic_Noctowl
gMonBackPic_Noctowl:
  .incbin "build/graphics/pokemon/noctowl/back.4bpp.lz"

  .globl gMonShinyPalette_Noctowl
gMonShinyPalette_Noctowl:
  .incbin "build/graphics/pokemon/noctowl/shiny_palette.gbapal.lz"

	.globl gMonIcon_Noctowl
gMonIcon_Noctowl: @ 0x08CA22B8 [164]
  .incbin "build/graphics/pokemon/noctowl/icon.4bpp"
  .incbin "baserom.gba", 0xCA26B8, 0x314

  .globl gMonPalette_Ledyba
gMonPalette_Ledyba:
  .incbin "build/graphics/pokemon/ledyba/normal_palette.gbapal.lz"

  .globl gMonBackPic_Ledyba
gMonBackPic_Ledyba:
  .incbin "build/graphics/pokemon/ledyba/back.4bpp.lz"

  .globl gMonShinyPalette_Ledyba
gMonShinyPalette_Ledyba:
  .incbin "build/graphics/pokemon/ledyba/shiny_palette.gbapal.lz"

	.globl gMonIcon_Ledyba
gMonIcon_Ledyba: @ 0x08CA2D4C [165]
  .incbin "build/graphics/pokemon/ledyba/icon.4bpp"
  .incbin "baserom.gba", 0xCA314C, 0x3A8

  .globl gMonPalette_Ledian
gMonPalette_Ledian:
  .incbin "build/graphics/pokemon/ledian/normal_palette.gbapal.lz"

  .globl gMonBackPic_Ledian
gMonBackPic_Ledian:
  .incbin "build/graphics/pokemon/ledian/back.4bpp.lz"

  .globl gMonShinyPalette_Ledian
gMonShinyPalette_Ledian:
  .incbin "build/graphics/pokemon/ledian/shiny_palette.gbapal.lz"

	.globl gMonIcon_Ledian
gMonIcon_Ledian: @ 0x08CA389C [166]
  .incbin "build/graphics/pokemon/ledian/icon.4bpp"
  .incbin "baserom.gba", 0xCA3C9C, 0x294

  .globl gMonPalette_Spinarak
gMonPalette_Spinarak:
  .incbin "build/graphics/pokemon/spinarak/normal_palette.gbapal.lz"

  .globl gMonBackPic_Spinarak
gMonBackPic_Spinarak:
  .incbin "build/graphics/pokemon/spinarak/back.4bpp.lz"

  .globl gMonShinyPalette_Spinarak
gMonShinyPalette_Spinarak:
  .incbin "build/graphics/pokemon/spinarak/shiny_palette.gbapal.lz"

	.globl gMonIcon_Spinarak
gMonIcon_Spinarak: @ 0x08CA41E4 [167]
  .incbin "build/graphics/pokemon/spinarak/icon.4bpp"
  .incbin "baserom.gba", 0xCA45E4, 0x3E0

  .globl gMonPalette_Ariados
gMonPalette_Ariados:
  .incbin "build/graphics/pokemon/ariados/normal_palette.gbapal.lz"

  .globl gMonBackPic_Ariados
gMonBackPic_Ariados:
  .incbin "build/graphics/pokemon/ariados/back.4bpp.lz"

  .globl gMonShinyPalette_Ariados
gMonShinyPalette_Ariados:
  .incbin "build/graphics/pokemon/ariados/shiny_palette.gbapal.lz"

	.globl gMonIcon_Ariados
gMonIcon_Ariados: @ 0x08CA4D8C [168]
  .incbin "build/graphics/pokemon/ariados/icon.4bpp"
  .incbin "baserom.gba", 0xCA518C, 0x3D0

  .globl gMonPalette_Crobat
gMonPalette_Crobat:
  .incbin "build/graphics/pokemon/crobat/normal_palette.gbapal.lz"

  .globl gMonBackPic_Crobat
gMonBackPic_Crobat:
  .incbin "build/graphics/pokemon/crobat/back.4bpp.lz"

  .globl gMonShinyPalette_Crobat
gMonShinyPalette_Crobat:
  .incbin "build/graphics/pokemon/crobat/shiny_palette.gbapal.lz"

	.globl gMonIcon_Crobat
gMonIcon_Crobat: @ 0x08CA58B4 [169]
  .incbin "build/graphics/pokemon/crobat/icon.4bpp"
  .incbin "baserom.gba", 0xCA5CB4, 0x2F8

  .globl gMonPalette_Chinchou
gMonPalette_Chinchou:
  .incbin "build/graphics/pokemon/chinchou/normal_palette.gbapal.lz"

  .globl gMonBackPic_Chinchou
gMonBackPic_Chinchou:
  .incbin "build/graphics/pokemon/chinchou/back.4bpp.lz"

  .globl gMonShinyPalette_Chinchou
gMonShinyPalette_Chinchou:
  .incbin "build/graphics/pokemon/chinchou/shiny_palette.gbapal.lz"

	.globl gMonIcon_Chinchou
gMonIcon_Chinchou: @ 0x08CA62F4 [170]
  .incbin "build/graphics/pokemon/chinchou/icon.4bpp"
  .incbin "baserom.gba", 0xCA66F4, 0x390

  .globl gMonPalette_Lanturn
gMonPalette_Lanturn:
  .incbin "build/graphics/pokemon/lanturn/normal_palette.gbapal.lz"

  .globl gMonBackPic_Lanturn
gMonBackPic_Lanturn:
  .incbin "build/graphics/pokemon/lanturn/back.4bpp.lz"

  .globl gMonShinyPalette_Lanturn
gMonShinyPalette_Lanturn:
  .incbin "build/graphics/pokemon/lanturn/shiny_palette.gbapal.lz"

	.globl gMonIcon_Lanturn
gMonIcon_Lanturn: @ 0x08CA6DD4 [171]
  .incbin "build/graphics/pokemon/lanturn/icon.4bpp"
  .incbin "baserom.gba", 0xCA71D4, 0x23C

  .globl gMonPalette_Pichu
gMonPalette_Pichu:
  .incbin "build/graphics/pokemon/pichu/normal_palette.gbapal.lz"

  .globl gMonBackPic_Pichu
gMonBackPic_Pichu:
  .incbin "build/graphics/pokemon/pichu/back.4bpp.lz"

  .globl gMonShinyPalette_Pichu
gMonShinyPalette_Pichu:
  .incbin "build/graphics/pokemon/pichu/shiny_palette.gbapal.lz"

	.globl gMonIcon_Pichu
gMonIcon_Pichu: @ 0x08CA76BC [172]
  .incbin "build/graphics/pokemon/pichu/icon.4bpp"
  .incbin "baserom.gba", 0xCA7ABC, 0x200

  .globl gMonPalette_Cleffa
gMonPalette_Cleffa:
  .incbin "build/graphics/pokemon/cleffa/normal_palette.gbapal.lz"

  .globl gMonBackPic_Cleffa
gMonBackPic_Cleffa:
  .incbin "build/graphics/pokemon/cleffa/back.4bpp.lz"

  .globl gMonShinyPalette_Cleffa
gMonShinyPalette_Cleffa:
  .incbin "build/graphics/pokemon/cleffa/shiny_palette.gbapal.lz"

	.globl gMonIcon_Cleffa
gMonIcon_Cleffa: @ 0x08CA7F48 [173]
  .incbin "build/graphics/pokemon/cleffa/icon.4bpp"
  .incbin "baserom.gba", 0xCA8348, 0x208

  .globl gMonPalette_Igglybuff
gMonPalette_Igglybuff:
  .incbin "build/graphics/pokemon/igglybuff/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xca8576, 0x2

  .globl gMonBackPic_Igglybuff
gMonBackPic_Igglybuff:
  .incbin "build/graphics/pokemon/igglybuff/back.4bpp.lz"

  .globl gMonShinyPalette_Igglybuff
gMonShinyPalette_Igglybuff:
  .incbin "build/graphics/pokemon/igglybuff/shiny_palette.gbapal.lz"

	.globl gMonIcon_Igglybuff
gMonIcon_Igglybuff: @ 0x08CA87DC [174]
  .incbin "build/graphics/pokemon/igglybuff/icon.4bpp"
  .incbin "baserom.gba", 0xCA8BDC, 0x1F4

  .globl gMonPalette_Togepi
gMonPalette_Togepi:
  .incbin "build/graphics/pokemon/togepi/normal_palette.gbapal.lz"

  .globl gMonBackPic_Togepi
gMonBackPic_Togepi:
  .incbin "build/graphics/pokemon/togepi/back.4bpp.lz"

  .globl gMonShinyPalette_Togepi
gMonShinyPalette_Togepi:
  .incbin "build/graphics/pokemon/togepi/shiny_palette.gbapal.lz"

	.globl gMonIcon_Togepi
gMonIcon_Togepi: @ 0x08CA9094 [175]
  .incbin "build/graphics/pokemon/togepi/icon.4bpp"
  .incbin "baserom.gba", 0xCA9494, 0x294

  .globl gMonPalette_Togetic
gMonPalette_Togetic:
  .incbin "build/graphics/pokemon/togetic/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xca974e, 0x2

  .globl gMonBackPic_Togetic
gMonBackPic_Togetic:
  .incbin "build/graphics/pokemon/togetic/back.4bpp.lz"

  .globl gMonShinyPalette_Togetic
gMonShinyPalette_Togetic:
  .incbin "build/graphics/pokemon/togetic/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xCA9AA2, 0x2
	.globl gMonIcon_Togetic
gMonIcon_Togetic: @ 0x08CA9AA4 [176]
  .incbin "build/graphics/pokemon/togetic/icon.4bpp"
  .incbin "baserom.gba", 0xCA9EA4, 0x1EC

  .globl gMonPalette_Natu
gMonPalette_Natu:
  .incbin "build/graphics/pokemon/natu/normal_palette.gbapal.lz"

  .globl gMonBackPic_Natu
gMonBackPic_Natu:
  .incbin "build/graphics/pokemon/natu/back.4bpp.lz"

  .globl gMonShinyPalette_Natu
gMonShinyPalette_Natu:
  .incbin "build/graphics/pokemon/natu/shiny_palette.gbapal.lz"

	.globl gMonIcon_Natu
gMonIcon_Natu: @ 0x08CAA2F4 [177]
  .incbin "build/graphics/pokemon/natu/icon.4bpp"
  .incbin "baserom.gba", 0xCAA6F4, 0x2FC

  .globl gMonPalette_Xatu
gMonPalette_Xatu:
  .incbin "build/graphics/pokemon/xatu/normal_palette.gbapal.lz"

  .globl gMonBackPic_Xatu
gMonBackPic_Xatu:
  .incbin "build/graphics/pokemon/xatu/back.4bpp.lz"

  .globl gMonShinyPalette_Xatu
gMonShinyPalette_Xatu:
  .incbin "build/graphics/pokemon/xatu/shiny_palette.gbapal.lz"

	.globl gMonIcon_Xatu
gMonIcon_Xatu: @ 0x08CAADB8 [178]
  .incbin "build/graphics/pokemon/xatu/icon.4bpp"
  .incbin "baserom.gba", 0xCAB1B8, 0x2D4

  .globl gMonPalette_Mareep
gMonPalette_Mareep:
  .incbin "build/graphics/pokemon/mareep/normal_palette.gbapal.lz"

  .globl gMonBackPic_Mareep
gMonBackPic_Mareep:
  .incbin "build/graphics/pokemon/mareep/back.4bpp.lz"

  .globl gMonShinyPalette_Mareep
gMonShinyPalette_Mareep:
  .incbin "build/graphics/pokemon/mareep/shiny_palette.gbapal.lz"

	.globl gMonIcon_Mareep
gMonIcon_Mareep: @ 0x08CAB7D0 [179]
  .incbin "build/graphics/pokemon/mareep/icon.4bpp"
  .incbin "baserom.gba", 0xCABBD0, 0x320

  .globl gMonPalette_Flaaffy
gMonPalette_Flaaffy:
  .incbin "build/graphics/pokemon/flaaffy/normal_palette.gbapal.lz"

  .globl gMonBackPic_Flaaffy
gMonBackPic_Flaaffy:
  .incbin "build/graphics/pokemon/flaaffy/back.4bpp.lz"

  .globl gMonShinyPalette_Flaaffy
gMonShinyPalette_Flaaffy:
  .incbin "build/graphics/pokemon/flaaffy/shiny_palette.gbapal.lz"

	.globl gMonIcon_Flaaffy
gMonIcon_Flaaffy: @ 0x08CAC25C [180]
  .incbin "build/graphics/pokemon/flaaffy/icon.4bpp"
  .incbin "baserom.gba", 0xCAC65C, 0x37C

  .globl gMonPalette_Ampharos
gMonPalette_Ampharos:
  .incbin "build/graphics/pokemon/ampharos/normal_palette.gbapal.lz"

  .globl gMonBackPic_Ampharos
gMonBackPic_Ampharos:
  .incbin "build/graphics/pokemon/ampharos/back.4bpp.lz"

  .globl gMonShinyPalette_Ampharos
gMonShinyPalette_Ampharos:
  .incbin "build/graphics/pokemon/ampharos/shiny_palette.gbapal.lz"

	.globl gMonIcon_Ampharos
gMonIcon_Ampharos: @ 0x08CACDA0 [181]
  .incbin "build/graphics/pokemon/ampharos/icon.4bpp"
  .incbin "baserom.gba", 0xCAD1A0, 0x290

  .globl gMonPalette_Bellossom
gMonPalette_Bellossom:
  .incbin "build/graphics/pokemon/bellossom/normal_palette.gbapal.lz"

  .globl gMonBackPic_Bellossom
gMonBackPic_Bellossom:
  .incbin "build/graphics/pokemon/bellossom/back.4bpp.lz"

  .globl gMonShinyPalette_Bellossom
gMonShinyPalette_Bellossom:
  .incbin "build/graphics/pokemon/bellossom/shiny_palette.gbapal.lz"

	.globl gMonIcon_Bellossom
gMonIcon_Bellossom: @ 0x08CAD7A4 [182]
  .incbin "build/graphics/pokemon/bellossom/icon.4bpp"
  .incbin "baserom.gba", 0xCADBA4, 0x2E4

  .globl gMonPalette_Marill
gMonPalette_Marill:
  .incbin "build/graphics/pokemon/marill/normal_palette.gbapal.lz"

  .globl gMonBackPic_Marill
gMonBackPic_Marill:
  .incbin "build/graphics/pokemon/marill/back.4bpp.lz"

  .globl gMonShinyPalette_Marill
gMonShinyPalette_Marill:
  .incbin "build/graphics/pokemon/marill/shiny_palette.gbapal.lz"

	.globl gMonIcon_Marill
gMonIcon_Marill: @ 0x08CAE184 [183]
  .incbin "build/graphics/pokemon/marill/icon.4bpp"
  .incbin "baserom.gba", 0xCAE584, 0x320

  .globl gMonPalette_Azumarill
gMonPalette_Azumarill:
  .incbin "build/graphics/pokemon/azumarill/normal_palette.gbapal.lz"

  .globl gMonBackPic_Azumarill
gMonBackPic_Azumarill:
  .incbin "build/graphics/pokemon/azumarill/back.4bpp.lz"

  .globl gMonShinyPalette_Azumarill
gMonShinyPalette_Azumarill:
  .incbin "build/graphics/pokemon/azumarill/shiny_palette.gbapal.lz"

	.globl gMonIcon_Azumarill
gMonIcon_Azumarill: @ 0x08CAEBB0 [184]
  .incbin "build/graphics/pokemon/azumarill/icon.4bpp"
  .incbin "baserom.gba", 0xCAEFB0, 0x338

  .globl gMonPalette_Sudowoodo
gMonPalette_Sudowoodo:
  .incbin "build/graphics/pokemon/sudowoodo/normal_palette.gbapal.lz"

  .globl gMonBackPic_Sudowoodo
gMonBackPic_Sudowoodo:
  .incbin "build/graphics/pokemon/sudowoodo/back.4bpp.lz"

  .globl gMonShinyPalette_Sudowoodo
gMonShinyPalette_Sudowoodo:
  .incbin "build/graphics/pokemon/sudowoodo/shiny_palette.gbapal.lz"

	.globl gMonIcon_Sudowoodo
gMonIcon_Sudowoodo: @ 0x08CAF694 [185]
  .incbin "build/graphics/pokemon/sudowoodo/icon.4bpp"
  .incbin "baserom.gba", 0xCAFA94, 0x35C

  .globl gMonPalette_Politoed
gMonPalette_Politoed:
  .incbin "build/graphics/pokemon/politoed/normal_palette.gbapal.lz"

  .globl gMonBackPic_Politoed
gMonBackPic_Politoed:
  .incbin "build/graphics/pokemon/politoed/back.4bpp.lz"

  .globl gMonShinyPalette_Politoed
gMonShinyPalette_Politoed:
  .incbin "build/graphics/pokemon/politoed/shiny_palette.gbapal.lz"

	.globl gMonIcon_Politoed
gMonIcon_Politoed: @ 0x08CB00FC [186]
  .incbin "build/graphics/pokemon/politoed/icon.4bpp"
  .incbin "baserom.gba", 0xCB04FC, 0x2D4

  .globl gMonPalette_Hoppip
gMonPalette_Hoppip:
  .incbin "build/graphics/pokemon/hoppip/normal_palette.gbapal.lz"

  .globl gMonBackPic_Hoppip
gMonBackPic_Hoppip:
  .incbin "build/graphics/pokemon/hoppip/back.4bpp.lz"

  .globl gMonShinyPalette_Hoppip
gMonShinyPalette_Hoppip:
  .incbin "build/graphics/pokemon/hoppip/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xCB0AFF, 0x1
	.globl gMonIcon_Hoppip
gMonIcon_Hoppip: @ 0x08CB0B00 [187]
  .incbin "build/graphics/pokemon/hoppip/icon.4bpp"
  .incbin "baserom.gba", 0xCB0F00, 0x2A8

  .globl gMonPalette_Skiploom
gMonPalette_Skiploom:
  .incbin "build/graphics/pokemon/skiploom/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcb11cf, 0x1

  .globl gMonBackPic_Skiploom
gMonBackPic_Skiploom:
  .incbin "build/graphics/pokemon/skiploom/back.4bpp.lz"

  .globl gMonShinyPalette_Skiploom
gMonShinyPalette_Skiploom:
  .incbin "build/graphics/pokemon/skiploom/shiny_palette.gbapal.lz"

	.globl gMonIcon_Skiploom
gMonIcon_Skiploom: @ 0x08CB14D8 [188]
  .incbin "build/graphics/pokemon/skiploom/icon.4bpp"
  .incbin "baserom.gba", 0xCB18D8, 0x38C

  .globl gMonPalette_Jumpluff
gMonPalette_Jumpluff:
  .incbin "build/graphics/pokemon/jumpluff/normal_palette.gbapal.lz"

  .globl gMonBackPic_Jumpluff
gMonBackPic_Jumpluff:
  .incbin "build/graphics/pokemon/jumpluff/back.4bpp.lz"

  .globl gMonShinyPalette_Jumpluff
gMonShinyPalette_Jumpluff:
  .incbin "build/graphics/pokemon/jumpluff/shiny_palette.gbapal.lz"

	.globl gMonIcon_Jumpluff
gMonIcon_Jumpluff: @ 0x08CB20AC [189]
  .incbin "build/graphics/pokemon/jumpluff/icon.4bpp"
  .incbin "baserom.gba", 0xCB24AC, 0x31C

  .globl gMonPalette_Aipom
gMonPalette_Aipom:
  .incbin "build/graphics/pokemon/aipom/normal_palette.gbapal.lz"

  .globl gMonBackPic_Aipom
gMonBackPic_Aipom:
  .incbin "build/graphics/pokemon/aipom/back.4bpp.lz"

  .globl gMonShinyPalette_Aipom
gMonShinyPalette_Aipom:
  .incbin "build/graphics/pokemon/aipom/shiny_palette.gbapal.lz"

	.globl gMonIcon_Aipom
gMonIcon_Aipom: @ 0x08CB2B0C [190]
  .incbin "build/graphics/pokemon/aipom/icon.4bpp"
  .incbin "baserom.gba", 0xCB2F0C, 0x258

  .globl gMonPalette_Sunkern
gMonPalette_Sunkern:
  .incbin "build/graphics/pokemon/sunkern/normal_palette.gbapal.lz"

  .globl gMonBackPic_Sunkern
gMonBackPic_Sunkern:
  .incbin "build/graphics/pokemon/sunkern/back.4bpp.lz"

  .globl gMonShinyPalette_Sunkern
gMonShinyPalette_Sunkern:
  .incbin "build/graphics/pokemon/sunkern/shiny_palette.gbapal.lz"

	.globl gMonIcon_Sunkern
gMonIcon_Sunkern: @ 0x08CB3478 [191]
  .incbin "build/graphics/pokemon/sunkern/icon.4bpp"
  .incbin "baserom.gba", 0xCB3878, 0x378

  .globl gMonPalette_Sunflora
gMonPalette_Sunflora:
  .incbin "build/graphics/pokemon/sunflora/normal_palette.gbapal.lz"

  .globl gMonBackPic_Sunflora
gMonBackPic_Sunflora:
  .incbin "build/graphics/pokemon/sunflora/back.4bpp.lz"

  .globl gMonShinyPalette_Sunflora
gMonShinyPalette_Sunflora:
  .incbin "build/graphics/pokemon/sunflora/shiny_palette.gbapal.lz"

	.globl gMonIcon_Sunflora
gMonIcon_Sunflora: @ 0x08CB3FE0 [192]
  .incbin "build/graphics/pokemon/sunflora/icon.4bpp"
  .incbin "baserom.gba", 0xCB43E0, 0x3A4

  .globl gMonPalette_Yanma
gMonPalette_Yanma:
  .incbin "build/graphics/pokemon/yanma/normal_palette.gbapal.lz"

  .globl gMonBackPic_Yanma
gMonBackPic_Yanma:
  .incbin "build/graphics/pokemon/yanma/back.4bpp.lz"

  .globl gMonShinyPalette_Yanma
gMonShinyPalette_Yanma:
  .incbin "build/graphics/pokemon/yanma/shiny_palette.gbapal.lz"

	.globl gMonIcon_Yanma
gMonIcon_Yanma: @ 0x08CB4B88 [193]
  .incbin "build/graphics/pokemon/yanma/icon.4bpp"
  .incbin "baserom.gba", 0xCB4F88, 0x260

  .globl gMonPalette_Wooper
gMonPalette_Wooper:
  .incbin "build/graphics/pokemon/wooper/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcb520e, 0x2

  .globl gMonBackPic_Wooper
gMonBackPic_Wooper:
  .incbin "build/graphics/pokemon/wooper/back.4bpp.lz"

  .globl gMonShinyPalette_Wooper
gMonShinyPalette_Wooper:
  .incbin "build/graphics/pokemon/wooper/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xCB54C2, 0x2
	.globl gMonIcon_Wooper
gMonIcon_Wooper: @ 0x08CB54C4 [194]
  .incbin "build/graphics/pokemon/wooper/icon.4bpp"
  .incbin "baserom.gba", 0xCB58C4, 0x394

  .globl gMonPalette_Quagsire
gMonPalette_Quagsire:
  .incbin "build/graphics/pokemon/quagsire/normal_palette.gbapal.lz"

  .globl gMonBackPic_Quagsire
gMonBackPic_Quagsire:
  .incbin "build/graphics/pokemon/quagsire/back.4bpp.lz"

  .globl gMonShinyPalette_Quagsire
gMonShinyPalette_Quagsire:
  .incbin "build/graphics/pokemon/quagsire/shiny_palette.gbapal.lz"

	.globl gMonIcon_Quagsire
gMonIcon_Quagsire: @ 0x08CB5FA4 [195]
  .incbin "build/graphics/pokemon/quagsire/icon.4bpp"
  .incbin "baserom.gba", 0xCB63A4, 0x360

  .globl gMonPalette_Espeon
gMonPalette_Espeon:
  .incbin "build/graphics/pokemon/espeon/normal_palette.gbapal.lz"

  .globl gMonBackPic_Espeon
gMonBackPic_Espeon:
  .incbin "build/graphics/pokemon/espeon/back.4bpp.lz"

  .globl gMonShinyPalette_Espeon
gMonShinyPalette_Espeon:
  .incbin "build/graphics/pokemon/espeon/shiny_palette.gbapal.lz"

	.globl gMonIcon_Espeon
gMonIcon_Espeon: @ 0x08CB6A28 [196]
  .incbin "build/graphics/pokemon/espeon/icon.4bpp"
  .incbin "baserom.gba", 0xCB6E28, 0x334

  .globl gMonPalette_Umbreon
gMonPalette_Umbreon:
  .incbin "build/graphics/pokemon/umbreon/normal_palette.gbapal.lz"

  .globl gMonBackPic_Umbreon
gMonBackPic_Umbreon:
  .incbin "build/graphics/pokemon/umbreon/back.4bpp.lz"

  .globl gMonShinyPalette_Umbreon
gMonShinyPalette_Umbreon:
  .incbin "build/graphics/pokemon/umbreon/shiny_palette.gbapal.lz"

	.globl gMonIcon_Umbreon
gMonIcon_Umbreon: @ 0x08CB74C0 [197]
  .incbin "build/graphics/pokemon/umbreon/icon.4bpp"
  .incbin "baserom.gba", 0xCB78C0, 0x300

  .globl gMonPalette_Murkrow
gMonPalette_Murkrow:
  .incbin "build/graphics/pokemon/murkrow/normal_palette.gbapal.lz"

  .globl gMonBackPic_Murkrow
gMonBackPic_Murkrow:
  .incbin "build/graphics/pokemon/murkrow/back.4bpp.lz"

  .globl gMonShinyPalette_Murkrow
gMonShinyPalette_Murkrow:
  .incbin "build/graphics/pokemon/murkrow/shiny_palette.gbapal.lz"

	.globl gMonIcon_Murkrow
gMonIcon_Murkrow: @ 0x08CB7F28 [198]
  .incbin "build/graphics/pokemon/murkrow/icon.4bpp"
  .incbin "baserom.gba", 0xCB8328, 0x3D4

  .globl gMonPalette_Slowking
gMonPalette_Slowking:
  .incbin "build/graphics/pokemon/slowking/normal_palette.gbapal.lz"

  .globl gMonBackPic_Slowking
gMonBackPic_Slowking:
  .incbin "build/graphics/pokemon/slowking/back.4bpp.lz"

  .globl gMonShinyPalette_Slowking
gMonShinyPalette_Slowking:
  .incbin "build/graphics/pokemon/slowking/shiny_palette.gbapal.lz"

	.globl gMonIcon_Slowking
gMonIcon_Slowking: @ 0x08CB8AD8 [199]
  .incbin "build/graphics/pokemon/slowking/icon.4bpp"
  .incbin "baserom.gba", 0xCB8ED8, 0x2E0

  .globl gMonPalette_Misdreavus
gMonPalette_Misdreavus:
  .incbin "build/graphics/pokemon/misdreavus/normal_palette.gbapal.lz"

  .globl gMonBackPic_Misdreavus
gMonBackPic_Misdreavus:
  .incbin "build/graphics/pokemon/misdreavus/back.4bpp.lz"

  .globl gMonShinyPalette_Misdreavus
gMonShinyPalette_Misdreavus:
  .incbin "build/graphics/pokemon/misdreavus/shiny_palette.gbapal.lz"

	.globl gMonIcon_Misdreavus
gMonIcon_Misdreavus: @ 0x08CB952C [200]
  .incbin "build/graphics/pokemon/misdreavus/icon.4bpp"
  .incbin "baserom.gba", 0xCB992C, 0x1F4

  .globl gMonPalette_Unown
  .globl gMonPalette_UnownB
  .globl gMonPalette_UnownC
  .globl gMonPalette_UnownD
  .globl gMonPalette_UnownE
  .globl gMonPalette_UnownF
  .globl gMonPalette_UnownG
  .globl gMonPalette_UnownH
  .globl gMonPalette_UnownI
  .globl gMonPalette_UnownJ
  .globl gMonPalette_UnownK
  .globl gMonPalette_UnownL
  .globl gMonPalette_UnownM
  .globl gMonPalette_UnownN
  .globl gMonPalette_UnownO
  .globl gMonPalette_UnownP
  .globl gMonPalette_UnownQ
  .globl gMonPalette_UnownR
  .globl gMonPalette_UnownS
  .globl gMonPalette_UnownT
  .globl gMonPalette_UnownU
  .globl gMonPalette_UnownV
  .globl gMonPalette_UnownW
  .globl gMonPalette_UnownX
  .globl gMonPalette_UnownY
  .globl gMonPalette_UnownZ
  .globl gMonPalette_UnownEmark
  .globl gMonPalette_UnownQmark
gMonPalette_Unown:
gMonPalette_UnownB:
gMonPalette_UnownC:
gMonPalette_UnownD:
gMonPalette_UnownE:
gMonPalette_UnownF:
gMonPalette_UnownG:
gMonPalette_UnownH:
gMonPalette_UnownI:
gMonPalette_UnownJ:
gMonPalette_UnownK:
gMonPalette_UnownL:
gMonPalette_UnownM:
gMonPalette_UnownN:
gMonPalette_UnownO:
gMonPalette_UnownP:
gMonPalette_UnownQ:
gMonPalette_UnownR:
gMonPalette_UnownS:
gMonPalette_UnownT:
gMonPalette_UnownU:
gMonPalette_UnownV:
gMonPalette_UnownW:
gMonPalette_UnownX:
gMonPalette_UnownY:
gMonPalette_UnownZ:
gMonPalette_UnownEmark:
gMonPalette_UnownQmark:
  .incbin "build/graphics/pokemon/unown_qmark/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcb9b3d, 0x3

  .globl gMonBackPic_Unown
gMonBackPic_Unown:
  .incbin "build/graphics/pokemon/unown/back.4bpp.lz"

  .globl gMonShinyPalette_Unown
  .globl gMonShinyPalette_UnownB
  .globl gMonShinyPalette_UnownC
  .globl gMonShinyPalette_UnownD
  .globl gMonShinyPalette_UnownE
  .globl gMonShinyPalette_UnownF
  .globl gMonShinyPalette_UnownG
  .globl gMonShinyPalette_UnownH
  .globl gMonShinyPalette_UnownI
  .globl gMonShinyPalette_UnownJ
  .globl gMonShinyPalette_UnownK
  .globl gMonShinyPalette_UnownL
  .globl gMonShinyPalette_UnownM
  .globl gMonShinyPalette_UnownN
  .globl gMonShinyPalette_UnownO
  .globl gMonShinyPalette_UnownP
  .globl gMonShinyPalette_UnownQ
  .globl gMonShinyPalette_UnownR
  .globl gMonShinyPalette_UnownS
  .globl gMonShinyPalette_UnownT
  .globl gMonShinyPalette_UnownU
  .globl gMonShinyPalette_UnownV
  .globl gMonShinyPalette_UnownW
  .globl gMonShinyPalette_UnownX
  .globl gMonShinyPalette_UnownY
  .globl gMonShinyPalette_UnownZ
  .globl gMonShinyPalette_UnownEmark
  .globl gMonShinyPalette_UnownQmark
gMonShinyPalette_Unown:
gMonShinyPalette_UnownB:
gMonShinyPalette_UnownC:
gMonShinyPalette_UnownD:
gMonShinyPalette_UnownE:
gMonShinyPalette_UnownF:
gMonShinyPalette_UnownG:
gMonShinyPalette_UnownH:
gMonShinyPalette_UnownI:
gMonShinyPalette_UnownJ:
gMonShinyPalette_UnownK:
gMonShinyPalette_UnownL:
gMonShinyPalette_UnownM:
gMonShinyPalette_UnownN:
gMonShinyPalette_UnownO:
gMonShinyPalette_UnownP:
gMonShinyPalette_UnownQ:
gMonShinyPalette_UnownR:
gMonShinyPalette_UnownS:
gMonShinyPalette_UnownT:
gMonShinyPalette_UnownU:
gMonShinyPalette_UnownV:
gMonShinyPalette_UnownW:
gMonShinyPalette_UnownX:
gMonShinyPalette_UnownY:
gMonShinyPalette_UnownZ:
gMonShinyPalette_UnownEmark:
gMonShinyPalette_UnownQmark:
  .incbin "build/graphics/pokemon/unown_qmark/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xCB9D5D, 0x3
	.globl gMonIcon_Unown
gMonIcon_Unown: @ 0x08CB9D60 [201]
  .incbin "build/graphics/pokemon/unown/icon.4bpp"
  .incbin "baserom.gba", 0xCBA160, 0x370

  .globl gMonPalette_Wobbuffet
gMonPalette_Wobbuffet:
  .incbin "build/graphics/pokemon/wobbuffet/normal_palette.gbapal.lz"

  .globl gMonBackPic_Wobbuffet
gMonBackPic_Wobbuffet:
  .incbin "build/graphics/pokemon/wobbuffet/back.4bpp.lz"

  .globl gMonShinyPalette_Wobbuffet
gMonShinyPalette_Wobbuffet:
  .incbin "build/graphics/pokemon/wobbuffet/shiny_palette.gbapal.lz"

	.globl gMonIcon_Wobbuffet
gMonIcon_Wobbuffet: @ 0x08CBA764 [202]
  .incbin "build/graphics/pokemon/wobbuffet/icon.4bpp"
  .incbin "baserom.gba", 0xCBAB64, 0x424

  .globl gMonPalette_Girafarig
gMonPalette_Girafarig:
  .incbin "build/graphics/pokemon/girafarig/normal_palette.gbapal.lz"

  .globl gMonBackPic_Girafarig
gMonBackPic_Girafarig:
  .incbin "build/graphics/pokemon/girafarig/back.4bpp.lz"

  .globl gMonShinyPalette_Girafarig
gMonShinyPalette_Girafarig:
  .incbin "build/graphics/pokemon/girafarig/shiny_palette.gbapal.lz"

	.globl gMonIcon_Girafarig
gMonIcon_Girafarig: @ 0x08CBB384 [203]
  .incbin "build/graphics/pokemon/girafarig/icon.4bpp"
  .incbin "baserom.gba", 0xCBB784, 0x360

  .globl gMonPalette_Pineco
gMonPalette_Pineco:
  .incbin "build/graphics/pokemon/pineco/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcbbb05, 0x3

  .globl gMonBackPic_Pineco
gMonBackPic_Pineco:
  .incbin "build/graphics/pokemon/pineco/back.4bpp.lz"

  .globl gMonShinyPalette_Pineco
gMonShinyPalette_Pineco:
  .incbin "build/graphics/pokemon/pineco/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xCBBE01, 0x3
	.globl gMonIcon_Pineco
gMonIcon_Pineco: @ 0x08CBBE04 [204]
  .incbin "build/graphics/pokemon/pineco/icon.4bpp"
  .incbin "baserom.gba", 0xCBC204, 0x43C

  .globl gMonPalette_Forretress
gMonPalette_Forretress:
  .incbin "build/graphics/pokemon/forretress/normal_palette.gbapal.lz"

  .globl gMonBackPic_Forretress
gMonBackPic_Forretress:
  .incbin "build/graphics/pokemon/forretress/back.4bpp.lz"

  .globl gMonShinyPalette_Forretress
gMonShinyPalette_Forretress:
  .incbin "build/graphics/pokemon/forretress/shiny_palette.gbapal.lz"

	.globl gMonIcon_Forretress
gMonIcon_Forretress: @ 0x08CBC950 [205]
  .incbin "build/graphics/pokemon/forretress/icon.4bpp"
  .incbin "baserom.gba", 0xCBCD50, 0x330

  .globl gMonPalette_Dunsparce
gMonPalette_Dunsparce:
  .incbin "build/graphics/pokemon/dunsparce/normal_palette.gbapal.lz"

  .globl gMonBackPic_Dunsparce
gMonBackPic_Dunsparce:
  .incbin "build/graphics/pokemon/dunsparce/back.4bpp.lz"

  .globl gMonShinyPalette_Dunsparce
gMonShinyPalette_Dunsparce:
  .incbin "build/graphics/pokemon/dunsparce/shiny_palette.gbapal.lz"

	.globl gMonIcon_Dunsparce
gMonIcon_Dunsparce: @ 0x08CBD3CC [206]
  .incbin "build/graphics/pokemon/dunsparce/icon.4bpp"
  .incbin "baserom.gba", 0xCBD7CC, 0x448

  .globl gMonPalette_Gligar
gMonPalette_Gligar:
  .incbin "build/graphics/pokemon/gligar/normal_palette.gbapal.lz"

  .globl gMonBackPic_Gligar
gMonBackPic_Gligar:
  .incbin "build/graphics/pokemon/gligar/back.4bpp.lz"

  .globl gMonShinyPalette_Gligar
gMonShinyPalette_Gligar:
  .incbin "build/graphics/pokemon/gligar/shiny_palette.gbapal.lz"

	.globl gMonIcon_Gligar
gMonIcon_Gligar: @ 0x08CBE03C [207]
  .incbin "build/graphics/pokemon/gligar/icon.4bpp"
  .incbin "baserom.gba", 0xCBE43C, 0x4E8

  .globl gMonPalette_Steelix
gMonPalette_Steelix:
  .incbin "build/graphics/pokemon/steelix/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcbe945, 0x3

  .globl gMonBackPic_Steelix
gMonBackPic_Steelix:
  .incbin "build/graphics/pokemon/steelix/back.4bpp.lz"

  .globl gMonShinyPalette_Steelix
gMonShinyPalette_Steelix:
  .incbin "build/graphics/pokemon/steelix/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xCBED75, 0x3
	.globl gMonIcon_Steelix
gMonIcon_Steelix: @ 0x08CBED78 [208]
  .incbin "build/graphics/pokemon/steelix/icon.4bpp"
  .incbin "baserom.gba", 0xCBF178, 0x2F4

  .globl gMonPalette_Snubbull
gMonPalette_Snubbull:
  .incbin "build/graphics/pokemon/snubbull/normal_palette.gbapal.lz"

  .globl gMonBackPic_Snubbull
gMonBackPic_Snubbull:
  .incbin "build/graphics/pokemon/snubbull/back.4bpp.lz"

  .globl gMonShinyPalette_Snubbull
gMonShinyPalette_Snubbull:
  .incbin "build/graphics/pokemon/snubbull/shiny_palette.gbapal.lz"

	.globl gMonIcon_Snubbull
gMonIcon_Snubbull: @ 0x08CBF7E4 [209]
  .incbin "build/graphics/pokemon/snubbull/icon.4bpp"
  .incbin "baserom.gba", 0xCBFBE4, 0x3AC

  .globl gMonPalette_Granbull
gMonPalette_Granbull:
  .incbin "build/graphics/pokemon/granbull/normal_palette.gbapal.lz"

  .globl gMonBackPic_Granbull
gMonBackPic_Granbull:
  .incbin "build/graphics/pokemon/granbull/back.4bpp.lz"

  .globl gMonShinyPalette_Granbull
gMonShinyPalette_Granbull:
  .incbin "build/graphics/pokemon/granbull/shiny_palette.gbapal.lz"

	.globl gMonIcon_Granbull
gMonIcon_Granbull: @ 0x08CC0304 [210]
  .incbin "build/graphics/pokemon/granbull/icon.4bpp"
  .incbin "baserom.gba", 0xCC0704, 0x2E0

  .globl gMonPalette_Qwilfish
gMonPalette_Qwilfish:
  .incbin "build/graphics/pokemon/qwilfish/normal_palette.gbapal.lz"

  .globl gMonBackPic_Qwilfish
gMonBackPic_Qwilfish:
  .incbin "build/graphics/pokemon/qwilfish/back.4bpp.lz"

  .globl gMonShinyPalette_Qwilfish
gMonShinyPalette_Qwilfish:
  .incbin "build/graphics/pokemon/qwilfish/shiny_palette.gbapal.lz"

	.globl gMonIcon_Qwilfish
gMonIcon_Qwilfish: @ 0x08CC0D14 [211]
  .incbin "build/graphics/pokemon/qwilfish/icon.4bpp"
  .incbin "baserom.gba", 0xCC1114, 0x508

  .globl gMonPalette_Scizor
gMonPalette_Scizor:
  .incbin "build/graphics/pokemon/scizor/normal_palette.gbapal.lz"

  .globl gMonBackPic_Scizor
gMonBackPic_Scizor:
  .incbin "build/graphics/pokemon/scizor/back.4bpp.lz"

  .globl gMonShinyPalette_Scizor
gMonShinyPalette_Scizor:
  .incbin "build/graphics/pokemon/scizor/shiny_palette.gbapal.lz"

	.globl gMonIcon_Scizor
gMonIcon_Scizor: @ 0x08CC19EC [212]
  .incbin "build/graphics/pokemon/scizor/icon.4bpp"
  .incbin "baserom.gba", 0xCC1DEC, 0x2E8

  .globl gMonPalette_Shuckle
gMonPalette_Shuckle:
  .incbin "build/graphics/pokemon/shuckle/normal_palette.gbapal.lz"

  .globl gMonBackPic_Shuckle
gMonBackPic_Shuckle:
  .incbin "build/graphics/pokemon/shuckle/back.4bpp.lz"

  .globl gMonShinyPalette_Shuckle
gMonShinyPalette_Shuckle:
  .incbin "build/graphics/pokemon/shuckle/shiny_palette.gbapal.lz"

	.globl gMonIcon_Shuckle
gMonIcon_Shuckle: @ 0x08CC237C [213]
  .incbin "build/graphics/pokemon/shuckle/icon.4bpp"
  .incbin "baserom.gba", 0xCC277C, 0x410

  .globl gMonPalette_Heracross
gMonPalette_Heracross:
  .incbin "build/graphics/pokemon/heracross/normal_palette.gbapal.lz"

  .globl gMonBackPic_Heracross
gMonBackPic_Heracross:
  .incbin "build/graphics/pokemon/heracross/back.4bpp.lz"

  .globl gMonShinyPalette_Heracross
gMonShinyPalette_Heracross:
  .incbin "build/graphics/pokemon/heracross/shiny_palette.gbapal.lz"

	.globl gMonIcon_Heracross
gMonIcon_Heracross: @ 0x08CC2F4C [214]
  .incbin "build/graphics/pokemon/heracross/icon.4bpp"
  .incbin "baserom.gba", 0xCC334C, 0x364

  .globl gMonPalette_Sneasel
gMonPalette_Sneasel:
  .incbin "build/graphics/pokemon/sneasel/normal_palette.gbapal.lz"

  .globl gMonBackPic_Sneasel
gMonBackPic_Sneasel:
  .incbin "build/graphics/pokemon/sneasel/back.4bpp.lz"

  .globl gMonShinyPalette_Sneasel
gMonShinyPalette_Sneasel:
  .incbin "build/graphics/pokemon/sneasel/shiny_palette.gbapal.lz"

	.globl gMonIcon_Sneasel
gMonIcon_Sneasel: @ 0x08CC3A24 [215]
  .incbin "build/graphics/pokemon/sneasel/icon.4bpp"
  .incbin "baserom.gba", 0xCC3E24, 0x28C

  .globl gMonPalette_Teddiursa
gMonPalette_Teddiursa:
  .incbin "build/graphics/pokemon/teddiursa/normal_palette.gbapal.lz"

  .globl gMonBackPic_Teddiursa
gMonBackPic_Teddiursa:
  .incbin "build/graphics/pokemon/teddiursa/back.4bpp.lz"

  .globl gMonShinyPalette_Teddiursa
gMonShinyPalette_Teddiursa:
  .incbin "build/graphics/pokemon/teddiursa/shiny_palette.gbapal.lz"

	.globl gMonIcon_Teddiursa
gMonIcon_Teddiursa: @ 0x08CC4378 [216]
  .incbin "build/graphics/pokemon/teddiursa/icon.4bpp"
  .incbin "baserom.gba", 0xCC4778, 0x458

  .globl gMonPalette_Ursaring
gMonPalette_Ursaring:
  .incbin "build/graphics/pokemon/ursaring/normal_palette.gbapal.lz"

  .globl gMonBackPic_Ursaring
gMonBackPic_Ursaring:
  .incbin "build/graphics/pokemon/ursaring/back.4bpp.lz"

  .globl gMonShinyPalette_Ursaring
gMonShinyPalette_Ursaring:
  .incbin "build/graphics/pokemon/ursaring/shiny_palette.gbapal.lz"

	.globl gMonIcon_Ursaring
gMonIcon_Ursaring: @ 0x08CC4FA8 [217]
  .incbin "build/graphics/pokemon/ursaring/icon.4bpp"
  .incbin "baserom.gba", 0xCC53A8, 0x294

  .globl gMonPalette_Slugma
gMonPalette_Slugma:
  .incbin "build/graphics/pokemon/slugma/normal_palette.gbapal.lz"

  .globl gMonBackPic_Slugma
gMonBackPic_Slugma:
  .incbin "build/graphics/pokemon/slugma/back.4bpp.lz"

  .globl gMonShinyPalette_Slugma
gMonShinyPalette_Slugma:
  .incbin "build/graphics/pokemon/slugma/shiny_palette.gbapal.lz"

	.globl gMonIcon_Slugma
gMonIcon_Slugma: @ 0x08CC596C [218]
  .incbin "build/graphics/pokemon/slugma/icon.4bpp"
  .incbin "baserom.gba", 0xCC5D6C, 0x368

  .globl gMonPalette_Magcargo
gMonPalette_Magcargo:
  .incbin "build/graphics/pokemon/magcargo/normal_palette.gbapal.lz"

  .globl gMonBackPic_Magcargo
gMonBackPic_Magcargo:
  .incbin "build/graphics/pokemon/magcargo/back.4bpp.lz"

  .globl gMonShinyPalette_Magcargo
gMonShinyPalette_Magcargo:
  .incbin "build/graphics/pokemon/magcargo/shiny_palette.gbapal.lz"

	.globl gMonIcon_Magcargo
gMonIcon_Magcargo: @ 0x08CC653C [219]
  .incbin "build/graphics/pokemon/magcargo/icon.4bpp"
  .incbin "baserom.gba", 0xCC693C, 0x21C

  .globl gMonPalette_Swinub
gMonPalette_Swinub:
  .incbin "build/graphics/pokemon/swinub/normal_palette.gbapal.lz"

  .globl gMonBackPic_Swinub
gMonBackPic_Swinub:
  .incbin "build/graphics/pokemon/swinub/back.4bpp.lz"

  .globl gMonShinyPalette_Swinub
gMonShinyPalette_Swinub:
  .incbin "build/graphics/pokemon/swinub/shiny_palette.gbapal.lz"

	.globl gMonIcon_Swinub
gMonIcon_Swinub: @ 0x08CC6DE4 [220]
  .incbin "build/graphics/pokemon/swinub/icon.4bpp"
  .incbin "baserom.gba", 0xCC71E4, 0x348

  .globl gMonPalette_Piloswine
gMonPalette_Piloswine:
  .incbin "build/graphics/pokemon/piloswine/normal_palette.gbapal.lz"

  .globl gMonBackPic_Piloswine
gMonBackPic_Piloswine:
  .incbin "build/graphics/pokemon/piloswine/back.4bpp.lz"

  .globl gMonShinyPalette_Piloswine
gMonShinyPalette_Piloswine:
  .incbin "build/graphics/pokemon/piloswine/shiny_palette.gbapal.lz"

	.globl gMonIcon_Piloswine
gMonIcon_Piloswine: @ 0x08CC77C8 [221]
  .incbin "build/graphics/pokemon/piloswine/icon.4bpp"
  .incbin "baserom.gba", 0xCC7BC8, 0x308

  .globl gMonPalette_Corsola
gMonPalette_Corsola:
  .incbin "build/graphics/pokemon/corsola/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcc7ef6, 0x2

  .globl gMonBackPic_Corsola
gMonBackPic_Corsola:
  .incbin "build/graphics/pokemon/corsola/back.4bpp.lz"

  .globl gMonShinyPalette_Corsola
gMonShinyPalette_Corsola:
  .incbin "build/graphics/pokemon/corsola/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xCC81DE, 0x2
	.globl gMonIcon_Corsola
gMonIcon_Corsola: @ 0x08CC81E0 [222]
  .incbin "build/graphics/pokemon/corsola/icon.4bpp"
  .incbin "baserom.gba", 0xCC85E0, 0x288

  .globl gMonPalette_Remoraid
gMonPalette_Remoraid:
  .incbin "build/graphics/pokemon/remoraid/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcc888e, 0x2

  .globl gMonBackPic_Remoraid
gMonBackPic_Remoraid:
  .incbin "build/graphics/pokemon/remoraid/back.4bpp.lz"

  .globl gMonShinyPalette_Remoraid
gMonShinyPalette_Remoraid:
  .incbin "build/graphics/pokemon/remoraid/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xCC8BCA, 0x2
	.globl gMonIcon_Remoraid
gMonIcon_Remoraid: @ 0x08CC8BCC [223]
  .incbin "build/graphics/pokemon/remoraid/icon.4bpp"
  .incbin "baserom.gba", 0xCC8FCC, 0x354

  .globl gMonPalette_Octillery
gMonPalette_Octillery:
  .incbin "build/graphics/pokemon/octillery/normal_palette.gbapal.lz"

  .globl gMonBackPic_Octillery
gMonBackPic_Octillery:
  .incbin "build/graphics/pokemon/octillery/back.4bpp.lz"

  .globl gMonShinyPalette_Octillery
gMonShinyPalette_Octillery:
  .incbin "build/graphics/pokemon/octillery/shiny_palette.gbapal.lz"

	.globl gMonIcon_Octillery
gMonIcon_Octillery: @ 0x08CC9628 [224]
  .incbin "build/graphics/pokemon/octillery/icon.4bpp"
  .incbin "baserom.gba", 0xCC9A28, 0x390

  .globl gMonPalette_Delibird
gMonPalette_Delibird:
  .incbin "build/graphics/pokemon/delibird/normal_palette.gbapal.lz"

  .globl gMonBackPic_Delibird
gMonBackPic_Delibird:
  .incbin "build/graphics/pokemon/delibird/back.4bpp.lz"

  .globl gMonShinyPalette_Delibird
gMonShinyPalette_Delibird:
  .incbin "build/graphics/pokemon/delibird/shiny_palette.gbapal.lz"

	.globl gMonIcon_Delibird
gMonIcon_Delibird: @ 0x08CCA1C8 [225]
  .incbin "build/graphics/pokemon/delibird/icon.4bpp"
  .incbin "baserom.gba", 0xCCA5C8, 0x4BC

  .globl gMonPalette_Mantine
gMonPalette_Mantine:
  .incbin "build/graphics/pokemon/mantine/normal_palette.gbapal.lz"

  .globl gMonBackPic_Mantine
gMonBackPic_Mantine:
  .incbin "build/graphics/pokemon/mantine/back.4bpp.lz"

  .globl gMonShinyPalette_Mantine
gMonShinyPalette_Mantine:
  .incbin "build/graphics/pokemon/mantine/shiny_palette.gbapal.lz"

	.globl gMonIcon_Mantine
gMonIcon_Mantine: @ 0x08CCAD74 [226]
  .incbin "build/graphics/pokemon/mantine/icon.4bpp"
  .incbin "baserom.gba", 0xCCB174, 0x500

  .globl gMonPalette_Skarmory
gMonPalette_Skarmory:
  .incbin "build/graphics/pokemon/skarmory/normal_palette.gbapal.lz"

  .globl gMonBackPic_Skarmory
gMonBackPic_Skarmory:
  .incbin "build/graphics/pokemon/skarmory/back.4bpp.lz"

  .globl gMonShinyPalette_Skarmory
gMonShinyPalette_Skarmory:
  .incbin "build/graphics/pokemon/skarmory/shiny_palette.gbapal.lz"

	.globl gMonIcon_Skarmory
gMonIcon_Skarmory: @ 0x08CCB9C8 [227]
  .incbin "build/graphics/pokemon/skarmory/icon.4bpp"
  .incbin "baserom.gba", 0xCCBDC8, 0x2D8

  .globl gMonPalette_Houndour
gMonPalette_Houndour:
  .incbin "build/graphics/pokemon/houndour/normal_palette.gbapal.lz"

  .globl gMonBackPic_Houndour
gMonBackPic_Houndour:
  .incbin "build/graphics/pokemon/houndour/back.4bpp.lz"

  .globl gMonShinyPalette_Houndour
gMonShinyPalette_Houndour:
  .incbin "build/graphics/pokemon/houndour/shiny_palette.gbapal.lz"

	.globl gMonIcon_Houndour
gMonIcon_Houndour: @ 0x08CCC370 [228]
  .incbin "build/graphics/pokemon/houndour/icon.4bpp"
  .incbin "baserom.gba", 0xCCC770, 0x420

  .globl gMonPalette_Houndoom
gMonPalette_Houndoom:
  .incbin "build/graphics/pokemon/houndoom/normal_palette.gbapal.lz"

  .globl gMonBackPic_Houndoom
gMonBackPic_Houndoom:
  .incbin "build/graphics/pokemon/houndoom/back.4bpp.lz"

  .globl gMonShinyPalette_Houndoom
gMonShinyPalette_Houndoom:
  .incbin "build/graphics/pokemon/houndoom/shiny_palette.gbapal.lz"

	.globl gMonIcon_Houndoom
gMonIcon_Houndoom: @ 0x08CCCF04 [229]
  .incbin "build/graphics/pokemon/houndoom/icon.4bpp"
  .incbin "baserom.gba", 0xCCD304, 0x440

  .globl gMonPalette_Kingdra
gMonPalette_Kingdra:
  .incbin "build/graphics/pokemon/kingdra/normal_palette.gbapal.lz"

  .globl gMonBackPic_Kingdra
gMonBackPic_Kingdra:
  .incbin "build/graphics/pokemon/kingdra/back.4bpp.lz"

  .globl gMonShinyPalette_Kingdra
gMonShinyPalette_Kingdra:
  .incbin "build/graphics/pokemon/kingdra/shiny_palette.gbapal.lz"

	.globl gMonIcon_Kingdra
gMonIcon_Kingdra: @ 0x08CCDB48 [230]
  .incbin "build/graphics/pokemon/kingdra/icon.4bpp"
  .incbin "baserom.gba", 0xCCDF48, 0x27C

  .globl gMonPalette_Phanpy
gMonPalette_Phanpy:
  .incbin "build/graphics/pokemon/phanpy/normal_palette.gbapal.lz"

  .globl gMonBackPic_Phanpy
gMonBackPic_Phanpy:
  .incbin "build/graphics/pokemon/phanpy/back.4bpp.lz"

  .globl gMonShinyPalette_Phanpy
gMonShinyPalette_Phanpy:
  .incbin "build/graphics/pokemon/phanpy/shiny_palette.gbapal.lz"

	.globl gMonIcon_Phanpy
gMonIcon_Phanpy: @ 0x08CCE4D8 [231]
  .incbin "build/graphics/pokemon/phanpy/icon.4bpp"
  .incbin "baserom.gba", 0xCCE8D8, 0x494

  .globl gMonPalette_Donphan
gMonPalette_Donphan:
  .incbin "build/graphics/pokemon/donphan/normal_palette.gbapal.lz"

  .globl gMonBackPic_Donphan
gMonBackPic_Donphan:
  .incbin "build/graphics/pokemon/donphan/back.4bpp.lz"

  .globl gMonShinyPalette_Donphan
gMonShinyPalette_Donphan:
  .incbin "build/graphics/pokemon/donphan/shiny_palette.gbapal.lz"

	.globl gMonIcon_Donphan
gMonIcon_Donphan: @ 0x08CCF0B8 [232]
  .incbin "build/graphics/pokemon/donphan/icon.4bpp"
  .incbin "baserom.gba", 0xCCF4B8, 0x2A8

  .globl gMonPalette_Porygon2
gMonPalette_Porygon2:
  .incbin "build/graphics/pokemon/porygon2/normal_palette.gbapal.lz"

  .globl gMonBackPic_Porygon2
gMonBackPic_Porygon2:
  .incbin "build/graphics/pokemon/porygon2/back.4bpp.lz"

  .globl gMonShinyPalette_Porygon2
gMonShinyPalette_Porygon2:
  .incbin "build/graphics/pokemon/porygon2/shiny_palette.gbapal.lz"

	.globl gMonIcon_Porygon2
gMonIcon_Porygon2: @ 0x08CCFACC [233]
  .incbin "build/graphics/pokemon/porygon2/icon.4bpp"
  .incbin "baserom.gba", 0xCCFECC, 0x434

  .globl gMonPalette_Stantler
gMonPalette_Stantler:
  .incbin "build/graphics/pokemon/stantler/normal_palette.gbapal.lz"

  .globl gMonBackPic_Stantler
gMonBackPic_Stantler:
  .incbin "build/graphics/pokemon/stantler/back.4bpp.lz"

  .globl gMonShinyPalette_Stantler
gMonShinyPalette_Stantler:
  .incbin "build/graphics/pokemon/stantler/shiny_palette.gbapal.lz"

	.globl gMonIcon_Stantler
gMonIcon_Stantler: @ 0x08CD069C [234]
  .incbin "build/graphics/pokemon/stantler/icon.4bpp"
  .incbin "baserom.gba", 0xCD0A9C, 0x3B4

  .globl gMonPalette_Smeargle
gMonPalette_Smeargle:
  .incbin "build/graphics/pokemon/smeargle/normal_palette.gbapal.lz"

  .globl gMonBackPic_Smeargle
gMonBackPic_Smeargle:
  .incbin "build/graphics/pokemon/smeargle/back.4bpp.lz"

  .globl gMonShinyPalette_Smeargle
gMonShinyPalette_Smeargle:
  .incbin "build/graphics/pokemon/smeargle/shiny_palette.gbapal.lz"

	.globl gMonIcon_Smeargle
gMonIcon_Smeargle: @ 0x08CD11C4 [235]
  .incbin "build/graphics/pokemon/smeargle/icon.4bpp"
  .incbin "baserom.gba", 0xCD15C4, 0x2AC

  .globl gMonPalette_Tyrogue
gMonPalette_Tyrogue:
  .incbin "build/graphics/pokemon/tyrogue/normal_palette.gbapal.lz"

  .globl gMonBackPic_Tyrogue
gMonBackPic_Tyrogue:
  .incbin "build/graphics/pokemon/tyrogue/back.4bpp.lz"

  .globl gMonShinyPalette_Tyrogue
gMonShinyPalette_Tyrogue:
  .incbin "build/graphics/pokemon/tyrogue/shiny_palette.gbapal.lz"

	.globl gMonIcon_Tyrogue
gMonIcon_Tyrogue: @ 0x08CD1BDC [236]
  .incbin "build/graphics/pokemon/tyrogue/icon.4bpp"
  .incbin "baserom.gba", 0xCD1FDC, 0x3AC

  .globl gMonPalette_Hitmontop
gMonPalette_Hitmontop:
  .incbin "build/graphics/pokemon/hitmontop/normal_palette.gbapal.lz"

  .globl gMonBackPic_Hitmontop
gMonBackPic_Hitmontop:
  .incbin "build/graphics/pokemon/hitmontop/back.4bpp.lz"

  .globl gMonShinyPalette_Hitmontop
gMonShinyPalette_Hitmontop:
  .incbin "build/graphics/pokemon/hitmontop/shiny_palette.gbapal.lz"

	.globl gMonIcon_Hitmontop
gMonIcon_Hitmontop: @ 0x08CD2800 [237]
  .incbin "build/graphics/pokemon/hitmontop/icon.4bpp"
  .incbin "baserom.gba", 0xCD2C00, 0x278

  .globl gMonPalette_Smoochum
gMonPalette_Smoochum:
  .incbin "build/graphics/pokemon/smoochum/normal_palette.gbapal.lz"

  .globl gMonBackPic_Smoochum
gMonBackPic_Smoochum:
  .incbin "build/graphics/pokemon/smoochum/back.4bpp.lz"

  .globl gMonShinyPalette_Smoochum
gMonShinyPalette_Smoochum:
  .incbin "build/graphics/pokemon/smoochum/shiny_palette.gbapal.lz"

	.globl gMonIcon_Smoochum
gMonIcon_Smoochum: @ 0x08CD3140 [238]
  .incbin "build/graphics/pokemon/smoochum/icon.4bpp"
  .incbin "baserom.gba", 0xCD3540, 0x328

  .globl gMonPalette_Elekid
gMonPalette_Elekid:
  .incbin "build/graphics/pokemon/elekid/normal_palette.gbapal.lz"

  .globl gMonBackPic_Elekid
gMonBackPic_Elekid:
  .incbin "build/graphics/pokemon/elekid/back.4bpp.lz"

  .globl gMonShinyPalette_Elekid
gMonShinyPalette_Elekid:
  .incbin "build/graphics/pokemon/elekid/shiny_palette.gbapal.lz"

	.globl gMonIcon_Elekid
gMonIcon_Elekid: @ 0x08CD3C10 [239]
  .incbin "build/graphics/pokemon/elekid/icon.4bpp"
  .incbin "baserom.gba", 0xCD4010, 0x2A4

  .globl gMonPalette_Magby
gMonPalette_Magby:
  .incbin "build/graphics/pokemon/magby/normal_palette.gbapal.lz"

  .globl gMonBackPic_Magby
gMonBackPic_Magby:
  .incbin "build/graphics/pokemon/magby/back.4bpp.lz"

  .globl gMonShinyPalette_Magby
gMonShinyPalette_Magby:
  .incbin "build/graphics/pokemon/magby/shiny_palette.gbapal.lz"

	.globl gMonIcon_Magby
gMonIcon_Magby: @ 0x08CD45B0 [240]
  .incbin "build/graphics/pokemon/magby/icon.4bpp"
  .incbin "baserom.gba", 0xCD49B0, 0x3D0

  .globl gMonPalette_Miltank
gMonPalette_Miltank:
  .incbin "build/graphics/pokemon/miltank/normal_palette.gbapal.lz"

  .globl gMonBackPic_Miltank
gMonBackPic_Miltank:
  .incbin "build/graphics/pokemon/miltank/back.4bpp.lz"

  .globl gMonShinyPalette_Miltank
gMonShinyPalette_Miltank:
  .incbin "build/graphics/pokemon/miltank/shiny_palette.gbapal.lz"

	.globl gMonIcon_Miltank
gMonIcon_Miltank: @ 0x08CD516C [241]
  .incbin "build/graphics/pokemon/miltank/icon.4bpp"
  .incbin "baserom.gba", 0xCD556C, 0x408

  .globl gMonPalette_Blissey
gMonPalette_Blissey:
  .incbin "build/graphics/pokemon/blissey/normal_palette.gbapal.lz"

  .globl gMonBackPic_Blissey
gMonBackPic_Blissey:
  .incbin "build/graphics/pokemon/blissey/back.4bpp.lz"

  .globl gMonShinyPalette_Blissey
gMonShinyPalette_Blissey:
  .incbin "build/graphics/pokemon/blissey/shiny_palette.gbapal.lz"

	.globl gMonIcon_Blissey
gMonIcon_Blissey: @ 0x08CD5C90 [242]
  .incbin "build/graphics/pokemon/blissey/icon.4bpp"
  .incbin "baserom.gba", 0xCD6090, 0x59C

  .globl gMonPalette_Raikou
gMonPalette_Raikou:
  .incbin "build/graphics/pokemon/raikou/normal_palette.gbapal.lz"

  .globl gMonBackPic_Raikou
gMonBackPic_Raikou:
  .incbin "build/graphics/pokemon/raikou/back.4bpp.lz"

  .globl gMonShinyPalette_Raikou
gMonShinyPalette_Raikou:
  .incbin "build/graphics/pokemon/raikou/shiny_palette.gbapal.lz"

	.globl gMonIcon_Raikou
gMonIcon_Raikou: @ 0x08CD6A24 [243]
  .incbin "build/graphics/pokemon/raikou/icon.4bpp"
  .incbin "baserom.gba", 0xCD6E24, 0x61C

  .globl gMonPalette_Entei
gMonPalette_Entei:
  .incbin "build/graphics/pokemon/entei/normal_palette.gbapal.lz"

  .globl gMonBackPic_Entei
gMonBackPic_Entei:
  .incbin "build/graphics/pokemon/entei/back.4bpp.lz"

  .globl gMonShinyPalette_Entei
gMonShinyPalette_Entei:
  .incbin "build/graphics/pokemon/entei/shiny_palette.gbapal.lz"

	.globl gMonIcon_Entei
gMonIcon_Entei: @ 0x08CD78B4 [244]
  .incbin "build/graphics/pokemon/entei/icon.4bpp"
  .incbin "baserom.gba", 0xCD7CB4, 0x5A4

  .globl gMonPalette_Suicune
gMonPalette_Suicune:
  .incbin "build/graphics/pokemon/suicune/normal_palette.gbapal.lz"

  .globl gMonBackPic_Suicune
gMonBackPic_Suicune:
  .incbin "build/graphics/pokemon/suicune/back.4bpp.lz"

  .globl gMonShinyPalette_Suicune
gMonShinyPalette_Suicune:
  .incbin "build/graphics/pokemon/suicune/shiny_palette.gbapal.lz"

	.globl gMonIcon_Suicune
gMonIcon_Suicune: @ 0x08CD8784 [245]
  .incbin "build/graphics/pokemon/suicune/icon.4bpp"
  .incbin "baserom.gba", 0xCD8B84, 0x27C

  .globl gMonPalette_Larvitar
gMonPalette_Larvitar:
  .incbin "build/graphics/pokemon/larvitar/normal_palette.gbapal.lz"

  .globl gMonBackPic_Larvitar
gMonBackPic_Larvitar:
  .incbin "build/graphics/pokemon/larvitar/back.4bpp.lz"

  .globl gMonShinyPalette_Larvitar
gMonShinyPalette_Larvitar:
  .incbin "build/graphics/pokemon/larvitar/shiny_palette.gbapal.lz"

	.globl gMonIcon_Larvitar
gMonIcon_Larvitar: @ 0x08CD90FC [246]
  .incbin "build/graphics/pokemon/larvitar/icon.4bpp"
  .incbin "baserom.gba", 0xCD94FC, 0x310

  .globl gMonPalette_Pupitar
gMonPalette_Pupitar:
  .incbin "build/graphics/pokemon/pupitar/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcd9831, 0x3

  .globl gMonBackPic_Pupitar
gMonBackPic_Pupitar:
  .incbin "build/graphics/pokemon/pupitar/back.4bpp.lz"

  .globl gMonShinyPalette_Pupitar
gMonShinyPalette_Pupitar:
  .incbin "build/graphics/pokemon/pupitar/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xCD9B92, 0x2
	.globl gMonIcon_Pupitar
gMonIcon_Pupitar: @ 0x08CD9B94 [247]
  .incbin "build/graphics/pokemon/pupitar/icon.4bpp"
  .incbin "baserom.gba", 0xCD9F94, 0x55C

  .globl gMonPalette_Tyranitar
gMonPalette_Tyranitar:
  .incbin "build/graphics/pokemon/tyranitar/normal_palette.gbapal.lz"

  .globl gMonBackPic_Tyranitar
gMonBackPic_Tyranitar:
  .incbin "build/graphics/pokemon/tyranitar/back.4bpp.lz"

  .globl gMonShinyPalette_Tyranitar
gMonShinyPalette_Tyranitar:
  .incbin "build/graphics/pokemon/tyranitar/shiny_palette.gbapal.lz"

	.globl gMonIcon_Tyranitar
gMonIcon_Tyranitar: @ 0x08CDA92C [248]
  .incbin "build/graphics/pokemon/tyranitar/icon.4bpp"
  .incbin "baserom.gba", 0xCDAD2C, 0x4E4

  .globl gMonPalette_Lugia
gMonPalette_Lugia:
  .incbin "build/graphics/pokemon/lugia/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcdb236, 0x2

  .globl gMonBackPic_Lugia
gMonBackPic_Lugia:
  .incbin "build/graphics/pokemon/lugia/back.4bpp.lz"

  .globl gMonShinyPalette_Lugia
gMonShinyPalette_Lugia:
  .incbin "build/graphics/pokemon/lugia/shiny_palette.gbapal.lz"

	.globl gMonIcon_Lugia
gMonIcon_Lugia: @ 0x08CDB634 [249]
  .incbin "build/graphics/pokemon/lugia/icon.4bpp"
  .incbin "baserom.gba", 0xCDBA34, 0x674

  .globl gMonPalette_HoOh
gMonPalette_HoOh:
  .incbin "build/graphics/pokemon/ho_oh/normal_palette.gbapal.lz"

  .globl gMonBackPic_HoOh
gMonBackPic_HoOh:
  .incbin "build/graphics/pokemon/ho_oh/back.4bpp.lz"

  .globl gMonShinyPalette_HoOh
gMonShinyPalette_HoOh:
  .incbin "build/graphics/pokemon/ho_oh/shiny_palette.gbapal.lz"

	.globl gMonIcon_HoOh
gMonIcon_HoOh: @ 0x08CDC508 [250]
  .incbin "build/graphics/pokemon/ho_oh/icon.4bpp"
  .incbin "baserom.gba", 0xCDC908, 0x298

  .globl gMonPalette_Celebi
gMonPalette_Celebi:
  .incbin "build/graphics/pokemon/celebi/normal_palette.gbapal.lz"

  .globl gMonBackPic_Celebi
gMonBackPic_Celebi:
  .incbin "build/graphics/pokemon/celebi/back.4bpp.lz"

  .globl gMonShinyPalette_Celebi
gMonShinyPalette_Celebi:
  .incbin "build/graphics/pokemon/celebi/shiny_palette.gbapal.lz"

	.globl gMonIcon_Celebi
gMonIcon_Celebi: @ 0x08CDCF9C [251]
  .incbin "build/graphics/pokemon/celebi/icon.4bpp"
  .incbin "baserom.gba", 0xCDD39C, 0x1A0

  .globl gMonPalette_OldUnownB
  .globl gMonPalette_OldUnownC
  .globl gMonPalette_OldUnownD
  .globl gMonPalette_OldUnownE
  .globl gMonPalette_OldUnownF
  .globl gMonPalette_OldUnownG
  .globl gMonPalette_OldUnownH
  .globl gMonPalette_OldUnownI
  .globl gMonPalette_OldUnownJ
  .globl gMonPalette_OldUnownK
  .globl gMonPalette_OldUnownL
  .globl gMonPalette_OldUnownM
  .globl gMonPalette_OldUnownN
  .globl gMonPalette_OldUnownO
  .globl gMonPalette_OldUnownP
  .globl gMonPalette_OldUnownQ
  .globl gMonPalette_OldUnownR
  .globl gMonPalette_OldUnownS
  .globl gMonPalette_OldUnownT
  .globl gMonPalette_OldUnownU
  .globl gMonPalette_OldUnownV
  .globl gMonPalette_OldUnownW
  .globl gMonPalette_OldUnownX
  .globl gMonPalette_OldUnownY
  .globl gMonPalette_OldUnownZ
gMonPalette_OldUnownB:
gMonPalette_OldUnownC:
gMonPalette_OldUnownD:
gMonPalette_OldUnownE:
gMonPalette_OldUnownF:
gMonPalette_OldUnownG:
gMonPalette_OldUnownH:
gMonPalette_OldUnownI:
gMonPalette_OldUnownJ:
gMonPalette_OldUnownK:
gMonPalette_OldUnownL:
gMonPalette_OldUnownM:
gMonPalette_OldUnownN:
gMonPalette_OldUnownO:
gMonPalette_OldUnownP:
gMonPalette_OldUnownQ:
gMonPalette_OldUnownR:
gMonPalette_OldUnownS:
gMonPalette_OldUnownT:
gMonPalette_OldUnownU:
gMonPalette_OldUnownV:
gMonPalette_OldUnownW:
gMonPalette_OldUnownX:
gMonPalette_OldUnownY:
gMonPalette_OldUnownZ:
  .incbin "build/graphics/pokemon/old_unown_z/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcdd54e, 0x2

  .globl gMonBackPic_OldUnownB
  .globl gMonBackPic_OldUnownC
  .globl gMonBackPic_OldUnownD
  .globl gMonBackPic_OldUnownE
  .globl gMonBackPic_OldUnownF
  .globl gMonBackPic_OldUnownG
  .globl gMonBackPic_OldUnownH
  .globl gMonBackPic_OldUnownI
  .globl gMonBackPic_OldUnownJ
  .globl gMonBackPic_OldUnownK
  .globl gMonBackPic_OldUnownL
  .globl gMonBackPic_OldUnownM
  .globl gMonBackPic_OldUnownN
  .globl gMonBackPic_OldUnownO
  .globl gMonBackPic_OldUnownP
  .globl gMonBackPic_OldUnownQ
  .globl gMonBackPic_OldUnownR
  .globl gMonBackPic_OldUnownS
  .globl gMonBackPic_OldUnownT
  .globl gMonBackPic_OldUnownU
  .globl gMonBackPic_OldUnownV
  .globl gMonBackPic_OldUnownW
  .globl gMonBackPic_OldUnownX
  .globl gMonBackPic_OldUnownY
  .globl gMonBackPic_OldUnownZ
gMonBackPic_OldUnownB:
gMonBackPic_OldUnownC:
gMonBackPic_OldUnownD:
gMonBackPic_OldUnownE:
gMonBackPic_OldUnownF:
gMonBackPic_OldUnownG:
gMonBackPic_OldUnownH:
gMonBackPic_OldUnownI:
gMonBackPic_OldUnownJ:
gMonBackPic_OldUnownK:
gMonBackPic_OldUnownL:
gMonBackPic_OldUnownM:
gMonBackPic_OldUnownN:
gMonBackPic_OldUnownO:
gMonBackPic_OldUnownP:
gMonBackPic_OldUnownQ:
gMonBackPic_OldUnownR:
gMonBackPic_OldUnownS:
gMonBackPic_OldUnownT:
gMonBackPic_OldUnownU:
gMonBackPic_OldUnownV:
gMonBackPic_OldUnownW:
gMonBackPic_OldUnownX:
gMonBackPic_OldUnownY:
gMonBackPic_OldUnownZ:
  .incbin "build/graphics/pokemon/old_unown_z/back.4bpp.lz"

  .globl gMonShinyPalette_OldUnownB
  .globl gMonShinyPalette_OldUnownC
  .globl gMonShinyPalette_OldUnownD
  .globl gMonShinyPalette_OldUnownE
  .globl gMonShinyPalette_OldUnownF
  .globl gMonShinyPalette_OldUnownG
  .globl gMonShinyPalette_OldUnownH
  .globl gMonShinyPalette_OldUnownI
  .globl gMonShinyPalette_OldUnownJ
  .globl gMonShinyPalette_OldUnownK
  .globl gMonShinyPalette_OldUnownL
  .globl gMonShinyPalette_OldUnownM
  .globl gMonShinyPalette_OldUnownN
  .globl gMonShinyPalette_OldUnownO
  .globl gMonShinyPalette_OldUnownP
  .globl gMonShinyPalette_OldUnownQ
  .globl gMonShinyPalette_OldUnownR
  .globl gMonShinyPalette_OldUnownS
  .globl gMonShinyPalette_OldUnownT
  .globl gMonShinyPalette_OldUnownU
  .globl gMonShinyPalette_OldUnownV
  .globl gMonShinyPalette_OldUnownW
  .globl gMonShinyPalette_OldUnownX
  .globl gMonShinyPalette_OldUnownY
  .globl gMonShinyPalette_OldUnownZ
gMonShinyPalette_OldUnownB:
gMonShinyPalette_OldUnownC:
gMonShinyPalette_OldUnownD:
gMonShinyPalette_OldUnownE:
gMonShinyPalette_OldUnownF:
gMonShinyPalette_OldUnownG:
gMonShinyPalette_OldUnownH:
gMonShinyPalette_OldUnownI:
gMonShinyPalette_OldUnownJ:
gMonShinyPalette_OldUnownK:
gMonShinyPalette_OldUnownL:
gMonShinyPalette_OldUnownM:
gMonShinyPalette_OldUnownN:
gMonShinyPalette_OldUnownO:
gMonShinyPalette_OldUnownP:
gMonShinyPalette_OldUnownQ:
gMonShinyPalette_OldUnownR:
gMonShinyPalette_OldUnownS:
gMonShinyPalette_OldUnownT:
gMonShinyPalette_OldUnownU:
gMonShinyPalette_OldUnownV:
gMonShinyPalette_OldUnownW:
gMonShinyPalette_OldUnownX:
gMonShinyPalette_OldUnownY:
gMonShinyPalette_OldUnownZ:
  .incbin "build/graphics/pokemon/old_unown_z/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xcdd6e6, 0x30a

  .globl gMonPalette_Treecko
gMonPalette_Treecko:
  .incbin "build/graphics/pokemon/treecko/normal_palette.gbapal.lz"

  .globl gMonBackPic_Treecko
gMonBackPic_Treecko:
  .incbin "build/graphics/pokemon/treecko/back.4bpp.lz"

  .globl gMonShinyPalette_Treecko
gMonShinyPalette_Treecko:
  .incbin "build/graphics/pokemon/treecko/shiny_palette.gbapal.lz"

  .globl gMonIcon_Treecko
gMonIcon_Treecko: @ 0x08CDDD40 [277]
  .incbin "build/graphics/pokemon/treecko/icon.4bpp"
  .incbin "baserom.gba", 0xCDE140, 0x4AC

  .globl gMonPalette_Grovyle
gMonPalette_Grovyle:
  .incbin "build/graphics/pokemon/grovyle/normal_palette.gbapal.lz"

  .globl gMonBackPic_Grovyle
gMonBackPic_Grovyle:
  .incbin "build/graphics/pokemon/grovyle/back.4bpp.lz"

  .globl gMonShinyPalette_Grovyle
gMonShinyPalette_Grovyle:
  .incbin "build/graphics/pokemon/grovyle/shiny_palette.gbapal.lz"

  .globl gMonIcon_Grovyle
gMonIcon_Grovyle: @ 0x08CDE978 [278]
  .incbin "build/graphics/pokemon/grovyle/icon.4bpp"
  .incbin "baserom.gba", 0xCDED78, 0x524

  .globl gMonPalette_Sceptile
gMonPalette_Sceptile:
  .incbin "build/graphics/pokemon/sceptile/normal_palette.gbapal.lz"

  .globl gMonBackPic_Sceptile
gMonBackPic_Sceptile:
  .incbin "build/graphics/pokemon/sceptile/back.4bpp.lz"

  .globl gMonShinyPalette_Sceptile
gMonShinyPalette_Sceptile:
  .incbin "build/graphics/pokemon/sceptile/shiny_palette.gbapal.lz"

  .globl gMonIcon_Sceptile
gMonIcon_Sceptile: @ 0x08CDF6E8 [279]
  .incbin "build/graphics/pokemon/sceptile/icon.4bpp"
  .incbin "baserom.gba", 0xCDFAE8, 0x2BC

  .globl gMonPalette_Torchic
gMonPalette_Torchic:
  .incbin "build/graphics/pokemon/torchic/normal_palette.gbapal.lz"

  .globl gMonBackPic_Torchic
gMonBackPic_Torchic:
  .incbin "build/graphics/pokemon/torchic/back.4bpp.lz"

  .globl gMonShinyPalette_Torchic
gMonShinyPalette_Torchic:
  .incbin "build/graphics/pokemon/torchic/shiny_palette.gbapal.lz"

  .globl gMonIcon_Torchic
gMonIcon_Torchic: @ 0x08CE00CC [280]
  .incbin "build/graphics/pokemon/torchic/icon.4bpp"
  .incbin "baserom.gba", 0xCE04CC, 0x40C

  .globl gMonPalette_Combusken
gMonPalette_Combusken:
  .incbin "build/graphics/pokemon/combusken/normal_palette.gbapal.lz"

  .globl gMonBackPic_Combusken
gMonBackPic_Combusken:
  .incbin "build/graphics/pokemon/combusken/back.4bpp.lz"

  .globl gMonShinyPalette_Combusken
gMonShinyPalette_Combusken:
  .incbin "build/graphics/pokemon/combusken/shiny_palette.gbapal.lz"

  .globl gMonIcon_Combusken
gMonIcon_Combusken: @ 0x08CE0CF8 [281]
  .incbin "build/graphics/pokemon/combusken/icon.4bpp"
  .incbin "baserom.gba", 0xCE10F8, 0x770

  .globl gMonPalette_Blaziken
gMonPalette_Blaziken:
  .incbin "build/graphics/pokemon/blaziken/normal_palette.gbapal.lz"

  .globl gMonBackPic_Blaziken
gMonBackPic_Blaziken:
  .incbin "build/graphics/pokemon/blaziken/back.4bpp.lz"

  .globl gMonShinyPalette_Blaziken
gMonShinyPalette_Blaziken:
  .incbin "build/graphics/pokemon/blaziken/shiny_palette.gbapal.lz"

  .globl gMonIcon_Blaziken
gMonIcon_Blaziken: @ 0x08CE1C94 [282]
  .incbin "build/graphics/pokemon/blaziken/icon.4bpp"
  .incbin "baserom.gba", 0xCE2094, 0x2D8

  .globl gMonPalette_Mudkip
gMonPalette_Mudkip:
  .incbin "build/graphics/pokemon/mudkip/normal_palette.gbapal.lz"

  .globl gMonBackPic_Mudkip
gMonBackPic_Mudkip:
  .incbin "build/graphics/pokemon/mudkip/back.4bpp.lz"

  .globl gMonShinyPalette_Mudkip
gMonShinyPalette_Mudkip:
  .incbin "build/graphics/pokemon/mudkip/shiny_palette.gbapal.lz"

  .globl gMonIcon_Mudkip
gMonIcon_Mudkip: @ 0x08CE269C [283]
  .incbin "build/graphics/pokemon/mudkip/icon.4bpp"
  .incbin "baserom.gba", 0xCE2A9C, 0x680

  .globl gMonPalette_Marshtomp
gMonPalette_Marshtomp:
  .incbin "build/graphics/pokemon/marshtomp/normal_palette.gbapal.lz"

  .globl gMonBackPic_Marshtomp
gMonBackPic_Marshtomp:
  .incbin "build/graphics/pokemon/marshtomp/back.4bpp.lz"

  .globl gMonShinyPalette_Marshtomp
gMonShinyPalette_Marshtomp:
  .incbin "build/graphics/pokemon/marshtomp/shiny_palette.gbapal.lz"

  .globl gMonIcon_Marshtomp
gMonIcon_Marshtomp: @ 0x08CE351C [284]
  .incbin "build/graphics/pokemon/marshtomp/icon.4bpp"
  .incbin "baserom.gba", 0xCE391C, 0x59C

  .globl gMonPalette_Swampert
gMonPalette_Swampert:
  .incbin "build/graphics/pokemon/swampert/normal_palette.gbapal.lz"

  .globl gMonBackPic_Swampert
gMonBackPic_Swampert:
  .incbin "build/graphics/pokemon/swampert/back.4bpp.lz"

  .globl gMonShinyPalette_Swampert
gMonShinyPalette_Swampert:
  .incbin "build/graphics/pokemon/swampert/shiny_palette.gbapal.lz"

  .globl gMonIcon_Swampert
gMonIcon_Swampert: @ 0x08CE42BC [285]
  .incbin "build/graphics/pokemon/swampert/icon.4bpp"
  .incbin "baserom.gba", 0xCE46BC, 0x5C4

  .globl gMonPalette_Poochyena
gMonPalette_Poochyena:
  .incbin "build/graphics/pokemon/poochyena/normal_palette.gbapal.lz"

  .globl gMonBackPic_Poochyena
gMonBackPic_Poochyena:
  .incbin "build/graphics/pokemon/poochyena/back.4bpp.lz"

  .globl gMonShinyPalette_Poochyena
gMonShinyPalette_Poochyena:
  .incbin "build/graphics/pokemon/poochyena/shiny_palette.gbapal.lz"

  .globl gMonIcon_Poochyena
gMonIcon_Poochyena: @ 0x08CE4FFC [286]
  .incbin "build/graphics/pokemon/poochyena/icon.4bpp"
  .incbin "baserom.gba", 0xCE53FC, 0x458

  .globl gMonPalette_Mightyena
gMonPalette_Mightyena:
  .incbin "build/graphics/pokemon/mightyena/normal_palette.gbapal.lz"

  .globl gMonBackPic_Mightyena
gMonBackPic_Mightyena:
  .incbin "build/graphics/pokemon/mightyena/back.4bpp.lz"

  .globl gMonShinyPalette_Mightyena
gMonShinyPalette_Mightyena:
  .incbin "build/graphics/pokemon/mightyena/shiny_palette.gbapal.lz"

  .globl gMonIcon_Mightyena
gMonIcon_Mightyena: @ 0x08CE5C1C [287]
  .incbin "build/graphics/pokemon/mightyena/icon.4bpp"
  .incbin "baserom.gba", 0xCE601C, 0x3F0

  .globl gMonPalette_Zigzagoon
gMonPalette_Zigzagoon:
  .incbin "build/graphics/pokemon/zigzagoon/normal_palette.gbapal.lz"

  .globl gMonBackPic_Zigzagoon
gMonBackPic_Zigzagoon:
  .incbin "build/graphics/pokemon/zigzagoon/back.4bpp.lz"

  .globl gMonShinyPalette_Zigzagoon
gMonShinyPalette_Zigzagoon:
  .incbin "build/graphics/pokemon/zigzagoon/shiny_palette.gbapal.lz"

  .globl gMonIcon_Zigzagoon
gMonIcon_Zigzagoon: @ 0x08CE679C [288]
  .incbin "build/graphics/pokemon/zigzagoon/icon.4bpp"
  .incbin "baserom.gba", 0xCE6B9C, 0x390

  .globl gMonPalette_Linoone
gMonPalette_Linoone:
  .incbin "build/graphics/pokemon/linoone/normal_palette.gbapal.lz"

  .globl gMonBackPic_Linoone
gMonBackPic_Linoone:
  .incbin "build/graphics/pokemon/linoone/back.4bpp.lz"

  .globl gMonShinyPalette_Linoone
gMonShinyPalette_Linoone:
  .incbin "build/graphics/pokemon/linoone/shiny_palette.gbapal.lz"

  .globl gMonIcon_Linoone
gMonIcon_Linoone: @ 0x08CE7250 [289]
  .incbin "build/graphics/pokemon/linoone/icon.4bpp"
  .incbin "baserom.gba", 0xCE7650, 0x2A8

  .globl gMonPalette_Wurmple
gMonPalette_Wurmple:
  .incbin "build/graphics/pokemon/wurmple/normal_palette.gbapal.lz"

  .globl gMonBackPic_Wurmple
gMonBackPic_Wurmple:
  .incbin "build/graphics/pokemon/wurmple/back.4bpp.lz"

  .globl gMonShinyPalette_Wurmple
gMonShinyPalette_Wurmple:
  .incbin "build/graphics/pokemon/wurmple/shiny_palette.gbapal.lz"

  .globl gMonIcon_Wurmple
gMonIcon_Wurmple: @ 0x08CE7B94 [290]
  .incbin "build/graphics/pokemon/wurmple/icon.4bpp"
  .incbin "baserom.gba", 0xCE7F94, 0x2A0

  .globl gMonPalette_Silcoon
gMonPalette_Silcoon:
  .incbin "build/graphics/pokemon/silcoon/normal_palette.gbapal.lz"

  .globl gMonBackPic_Silcoon
gMonBackPic_Silcoon:
  .incbin "build/graphics/pokemon/silcoon/back.4bpp.lz"

  .globl gMonShinyPalette_Silcoon
gMonShinyPalette_Silcoon:
  .incbin "build/graphics/pokemon/silcoon/shiny_palette.gbapal.lz"

  .globl gMonIcon_Silcoon
gMonIcon_Silcoon: @ 0x08CE84A0 [291]
  .incbin "build/graphics/pokemon/silcoon/icon.4bpp"
  .incbin "baserom.gba", 0xCE88A0, 0x378

  .globl gMonPalette_Beautifly
gMonPalette_Beautifly:
  .incbin "build/graphics/pokemon/beautifly/normal_palette.gbapal.lz"

  .globl gMonBackPic_Beautifly
gMonBackPic_Beautifly:
  .incbin "build/graphics/pokemon/beautifly/back.4bpp.lz"

  .globl gMonShinyPalette_Beautifly
gMonShinyPalette_Beautifly:
  .incbin "build/graphics/pokemon/beautifly/shiny_palette.gbapal.lz"

  .globl gMonIcon_Beautifly
gMonIcon_Beautifly: @ 0x08CE9018 [292]
  .incbin "build/graphics/pokemon/beautifly/icon.4bpp"
  .incbin "baserom.gba", 0xCE9418, 0x28C

  .globl gMonPalette_Cascoon
gMonPalette_Cascoon:
  .incbin "build/graphics/pokemon/cascoon/normal_palette.gbapal.lz"

  .globl gMonBackPic_Cascoon
gMonBackPic_Cascoon:
  .incbin "build/graphics/pokemon/cascoon/back.4bpp.lz"

  .globl gMonShinyPalette_Cascoon
gMonShinyPalette_Cascoon:
  .incbin "build/graphics/pokemon/cascoon/shiny_palette.gbapal.lz"

  .globl gMonIcon_Cascoon
gMonIcon_Cascoon: @ 0x08CE9904 [293]
  .incbin "build/graphics/pokemon/cascoon/icon.4bpp"
  .incbin "baserom.gba", 0xCE9D04, 0x388

  .globl gMonPalette_Dustox
gMonPalette_Dustox:
  .incbin "build/graphics/pokemon/dustox/normal_palette.gbapal.lz"

  .globl gMonBackPic_Dustox
gMonBackPic_Dustox:
  .incbin "build/graphics/pokemon/dustox/back.4bpp.lz"

  .globl gMonShinyPalette_Dustox
gMonShinyPalette_Dustox:
  .incbin "build/graphics/pokemon/dustox/shiny_palette.gbapal.lz"

  .globl gMonIcon_Dustox
gMonIcon_Dustox: @ 0x08CEA334 [294]
  .incbin "build/graphics/pokemon/dustox/icon.4bpp"
  .incbin "baserom.gba", 0xCEA734, 0x280

  .globl gMonPalette_Lotad
gMonPalette_Lotad:
  .incbin "build/graphics/pokemon/lotad/normal_palette.gbapal.lz"

  .globl gMonBackPic_Lotad
gMonBackPic_Lotad:
  .incbin "build/graphics/pokemon/lotad/back.4bpp.lz"

  .globl gMonShinyPalette_Lotad
gMonShinyPalette_Lotad:
  .incbin "build/graphics/pokemon/lotad/shiny_palette.gbapal.lz"

  .globl gMonIcon_Lotad
gMonIcon_Lotad: @ 0x08CEACEC [295]
  .incbin "build/graphics/pokemon/lotad/icon.4bpp"
  .incbin "baserom.gba", 0xCEB0EC, 0x338

  .globl gMonPalette_Lombre
gMonPalette_Lombre:
  .incbin "build/graphics/pokemon/lombre/normal_palette.gbapal.lz"

  .globl gMonBackPic_Lombre
gMonBackPic_Lombre:
  .incbin "build/graphics/pokemon/lombre/back.4bpp.lz"

  .globl gMonShinyPalette_Lombre
gMonShinyPalette_Lombre:
  .incbin "build/graphics/pokemon/lombre/shiny_palette.gbapal.lz"

  .globl gMonIcon_Lombre
gMonIcon_Lombre: @ 0x08CEB770 [296]
  .incbin "build/graphics/pokemon/lombre/icon.4bpp"
  .incbin "baserom.gba", 0xCEBB70, 0x504

  .globl gMonPalette_Ludicolo
gMonPalette_Ludicolo:
  .incbin "build/graphics/pokemon/ludicolo/normal_palette.gbapal.lz"

  .globl gMonBackPic_Ludicolo
gMonBackPic_Ludicolo:
  .incbin "build/graphics/pokemon/ludicolo/back.4bpp.lz"

  .globl gMonShinyPalette_Ludicolo
gMonShinyPalette_Ludicolo:
  .incbin "build/graphics/pokemon/ludicolo/shiny_palette.gbapal.lz"

  .globl gMonIcon_Ludicolo
gMonIcon_Ludicolo: @ 0x08CEC3C0 [297]
  .incbin "build/graphics/pokemon/ludicolo/icon.4bpp"
  .incbin "baserom.gba", 0xCEC7C0, 0x2B4

  .globl gMonPalette_Seedot
gMonPalette_Seedot:
  .incbin "build/graphics/pokemon/seedot/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xceca9a, 0x2

  .globl gMonBackPic_Seedot
gMonBackPic_Seedot:
  .incbin "build/graphics/pokemon/seedot/back.4bpp.lz"

  .globl gMonShinyPalette_Seedot
gMonShinyPalette_Seedot:
  .incbin "build/graphics/pokemon/seedot/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcecda2, 0x2

	.globl gMonIcon_Seedot
gMonIcon_Seedot: @ 0x08CECDA4 [298]
  .incbin "build/graphics/pokemon/seedot/icon.4bpp"
  .incbin "baserom.gba", 0xCED1A4, 0x30C

  .globl gMonPalette_Nuzleaf
gMonPalette_Nuzleaf:
  .incbin "build/graphics/pokemon/nuzleaf/normal_palette.gbapal.lz"

  .globl gMonBackPic_Nuzleaf
gMonBackPic_Nuzleaf:
  .incbin "build/graphics/pokemon/nuzleaf/back.4bpp.lz"

  .globl gMonShinyPalette_Nuzleaf
gMonShinyPalette_Nuzleaf:
  .incbin "build/graphics/pokemon/nuzleaf/shiny_palette.gbapal.lz"

  .globl gMonIcon_Nuzleaf
gMonIcon_Nuzleaf: @ 0x08CED7C8 [299]
  .incbin "build/graphics/pokemon/nuzleaf/icon.4bpp"
  .incbin "baserom.gba", 0xCEDBC8, 0x4DC

  .globl gMonPalette_Shiftry
gMonPalette_Shiftry:
  .incbin "build/graphics/pokemon/shiftry/normal_palette.gbapal.lz"

  .globl gMonBackPic_Shiftry
gMonBackPic_Shiftry:
  .incbin "build/graphics/pokemon/shiftry/back.4bpp.lz"

  .globl gMonShinyPalette_Shiftry
gMonShinyPalette_Shiftry:
  .incbin "build/graphics/pokemon/shiftry/shiny_palette.gbapal.lz"

  .globl gMonIcon_Shiftry
gMonIcon_Shiftry: @ 0x08CEE3B8 [300]
  .incbin "build/graphics/pokemon/shiftry/icon.4bpp"
  .incbin "baserom.gba", 0xCEE7B8, 0x2C0

  .globl gMonPalette_Nincada
gMonPalette_Nincada:
  .incbin "build/graphics/pokemon/nincada/normal_palette.gbapal.lz"

  .globl gMonBackPic_Nincada
gMonBackPic_Nincada:
  .incbin "build/graphics/pokemon/nincada/back.4bpp.lz"

  .globl gMonShinyPalette_Nincada
gMonShinyPalette_Nincada:
  .incbin "build/graphics/pokemon/nincada/shiny_palette.gbapal.lz"

  .globl gMonIcon_Nincada
gMonIcon_Nincada: @ 0x08CEED80 [301]
  .incbin "build/graphics/pokemon/nincada/icon.4bpp"
  .incbin "baserom.gba", 0xCEF180, 0x390

  .globl gMonPalette_Ninjask
gMonPalette_Ninjask:
  .incbin "build/graphics/pokemon/ninjask/normal_palette.gbapal.lz"

  .globl gMonBackPic_Ninjask
gMonBackPic_Ninjask:
  .incbin "build/graphics/pokemon/ninjask/back.4bpp.lz"

  .globl gMonShinyPalette_Ninjask
gMonShinyPalette_Ninjask:
  .incbin "build/graphics/pokemon/ninjask/shiny_palette.gbapal.lz"

  .globl gMonIcon_Ninjask
gMonIcon_Ninjask: @ 0x08CEF92C [302]
  .incbin "build/graphics/pokemon/ninjask/icon.4bpp"
  .incbin "baserom.gba", 0xCEFD2C, 0x340

  .globl gMonPalette_Shedinja
gMonPalette_Shedinja:
  .incbin "build/graphics/pokemon/shedinja/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcf0092, 0x2

  .globl gMonBackPic_Shedinja
gMonBackPic_Shedinja:
  .incbin "build/graphics/pokemon/shedinja/back.4bpp.lz"

  .globl gMonShinyPalette_Shedinja
gMonShinyPalette_Shedinja:
  .incbin "build/graphics/pokemon/shedinja/shiny_palette.gbapal.lz"

  .globl gMonIcon_Shedinja
gMonIcon_Shedinja: @ 0x08CF045C [303]
  .incbin "build/graphics/pokemon/shedinja/icon.4bpp"
  .incbin "baserom.gba", 0xCF085C, 0x278

  .globl gMonPalette_Taillow
gMonPalette_Taillow:
  .incbin "build/graphics/pokemon/taillow/normal_palette.gbapal.lz"

  .globl gMonBackPic_Taillow
gMonBackPic_Taillow:
  .incbin "build/graphics/pokemon/taillow/back.4bpp.lz"

  .globl gMonShinyPalette_Taillow
gMonShinyPalette_Taillow:
  .incbin "build/graphics/pokemon/taillow/shiny_palette.gbapal.lz"

  .globl gMonIcon_Taillow
gMonIcon_Taillow: @ 0x08CF0D44 [304]
  .incbin "build/graphics/pokemon/taillow/icon.4bpp"
  .incbin "baserom.gba", 0xCF1144, 0x3E4

  .globl gMonPalette_Swellow
gMonPalette_Swellow:
  .incbin "build/graphics/pokemon/swellow/normal_palette.gbapal.lz"

  .globl gMonBackPic_Swellow
gMonBackPic_Swellow:
  .incbin "build/graphics/pokemon/swellow/back.4bpp.lz"

  .globl gMonShinyPalette_Swellow
gMonShinyPalette_Swellow:
  .incbin "build/graphics/pokemon/swellow/shiny_palette.gbapal.lz"

  .globl gMonIcon_Swellow
gMonIcon_Swellow: @ 0x08CF18B0 [305]
  .incbin "build/graphics/pokemon/swellow/icon.4bpp"
  .incbin "baserom.gba", 0xCF1CB0, 0x288

  .globl gMonPalette_Shroomish
gMonPalette_Shroomish:
  .incbin "build/graphics/pokemon/shroomish/normal_palette.gbapal.lz"

  .globl gMonBackPic_Shroomish
gMonBackPic_Shroomish:
  .incbin "build/graphics/pokemon/shroomish/back.4bpp.lz"

  .globl gMonShinyPalette_Shroomish
gMonShinyPalette_Shroomish:
  .incbin "build/graphics/pokemon/shroomish/shiny_palette.gbapal.lz"

  .globl gMonIcon_Shroomish
gMonIcon_Shroomish: @ 0x08CF2268 [306]
  .incbin "build/graphics/pokemon/shroomish/icon.4bpp"
  .incbin "baserom.gba", 0xCF2668, 0x408

  .globl gMonPalette_Breloom
gMonPalette_Breloom:
  .incbin "build/graphics/pokemon/breloom/normal_palette.gbapal.lz"

  .globl gMonBackPic_Breloom
gMonBackPic_Breloom:
  .incbin "build/graphics/pokemon/breloom/back.4bpp.lz"

  .globl gMonShinyPalette_Breloom
gMonShinyPalette_Breloom:
  .incbin "build/graphics/pokemon/breloom/shiny_palette.gbapal.lz"

  .globl gMonIcon_Breloom
gMonIcon_Breloom: @ 0x08CF2EA0 [307]
  .incbin "build/graphics/pokemon/breloom/icon.4bpp"
  .incbin "baserom.gba", 0xCF32A0, 0x314

  .globl gMonPalette_Spinda
gMonPalette_Spinda:
  .incbin "build/graphics/pokemon/spinda/normal_palette.gbapal.lz"

  .globl gMonBackPic_Spinda
gMonBackPic_Spinda:
  .incbin "build/graphics/pokemon/spinda/back.4bpp.lz"

  .globl gMonShinyPalette_Spinda
gMonShinyPalette_Spinda:
  .incbin "build/graphics/pokemon/spinda/shiny_palette.gbapal.lz"

  .globl gMonIcon_Spinda
gMonIcon_Spinda: @ 0x08CF3940 [308]
  .incbin "build/graphics/pokemon/spinda/icon.4bpp"
  .incbin "baserom.gba", 0xCF3D40, 0x25C

  .globl gMonPalette_Wingull
gMonPalette_Wingull:
  .incbin "build/graphics/pokemon/wingull/normal_palette.gbapal.lz"

  .globl gMonBackPic_Wingull
gMonBackPic_Wingull:
  .incbin "build/graphics/pokemon/wingull/back.4bpp.lz"

  .globl gMonShinyPalette_Wingull
gMonShinyPalette_Wingull:
  .incbin "build/graphics/pokemon/wingull/shiny_palette.gbapal.lz"

  .globl gMonIcon_Wingull
gMonIcon_Wingull: @ 0x08CF433C [309]
  .incbin "build/graphics/pokemon/wingull/icon.4bpp"
  .incbin "baserom.gba", 0xCF473C, 0x3B8

  .globl gMonPalette_Pelipper
gMonPalette_Pelipper:
  .incbin "build/graphics/pokemon/pelipper/normal_palette.gbapal.lz"

  .globl gMonBackPic_Pelipper
gMonBackPic_Pelipper:
  .incbin "build/graphics/pokemon/pelipper/back.4bpp.lz"

  .globl gMonShinyPalette_Pelipper
gMonShinyPalette_Pelipper:
  .incbin "build/graphics/pokemon/pelipper/shiny_palette.gbapal.lz"

  .globl gMonIcon_Pelipper
gMonIcon_Pelipper: @ 0x08CF4EC4 [310]
  .incbin "build/graphics/pokemon/pelipper/icon.4bpp"
  .incbin "baserom.gba", 0xCF52C4, 0x22C

  .globl gMonPalette_Surskit
gMonPalette_Surskit:
  .incbin "build/graphics/pokemon/surskit/normal_palette.gbapal.lz"

  .globl gMonBackPic_Surskit
gMonBackPic_Surskit:
  .incbin "build/graphics/pokemon/surskit/back.4bpp.lz"

  .globl gMonShinyPalette_Surskit
gMonShinyPalette_Surskit:
  .incbin "build/graphics/pokemon/surskit/shiny_palette.gbapal.lz"

  .globl gMonIcon_Surskit
gMonIcon_Surskit: @ 0x08CF5778 [311]
  .incbin "build/graphics/pokemon/surskit/icon.4bpp"
  .incbin "baserom.gba", 0xCF5B78, 0x3BC

  .globl gMonPalette_Masquerain
gMonPalette_Masquerain:
  .incbin "build/graphics/pokemon/masquerain/normal_palette.gbapal.lz"

  .globl gMonBackPic_Masquerain
gMonBackPic_Masquerain:
  .incbin "build/graphics/pokemon/masquerain/back.4bpp.lz"

  .globl gMonShinyPalette_Masquerain
gMonShinyPalette_Masquerain:
  .incbin "build/graphics/pokemon/masquerain/shiny_palette.gbapal.lz"

  .globl gMonIcon_Masquerain
gMonIcon_Masquerain: @ 0x08CF62DC [312]
  .incbin "build/graphics/pokemon/masquerain/icon.4bpp"
  .incbin "baserom.gba", 0xCF66DC, 0x300

  .globl gMonPalette_Wailmer
gMonPalette_Wailmer:
  .incbin "build/graphics/pokemon/wailmer/normal_palette.gbapal.lz"

  .globl gMonBackPic_Wailmer
gMonBackPic_Wailmer:
  .incbin "build/graphics/pokemon/wailmer/back.4bpp.lz"

  .globl gMonShinyPalette_Wailmer
gMonShinyPalette_Wailmer:
  .incbin "build/graphics/pokemon/wailmer/shiny_palette.gbapal.lz"

  .globl gMonIcon_Wailmer
gMonIcon_Wailmer: @ 0x08CF6C10 [313]
  .incbin "build/graphics/pokemon/wailmer/icon.4bpp"
  .incbin "baserom.gba", 0xCF7010, 0x3E4

  .globl gMonPalette_Wailord
gMonPalette_Wailord:
  .incbin "build/graphics/pokemon/wailord/normal_palette.gbapal.lz"

  .globl gMonBackPic_Wailord
gMonBackPic_Wailord:
  .incbin "build/graphics/pokemon/wailord/back.4bpp.lz"

  .globl gMonShinyPalette_Wailord
gMonShinyPalette_Wailord:
  .incbin "build/graphics/pokemon/wailord/shiny_palette.gbapal.lz"

  .globl gMonIcon_Wailord
gMonIcon_Wailord: @ 0x08CF765C [314]
  .incbin "build/graphics/pokemon/wailord/icon.4bpp"
  .incbin "baserom.gba", 0xCF7A5C, 0x320

  .globl gMonPalette_Skitty
gMonPalette_Skitty:
  .incbin "build/graphics/pokemon/skitty/normal_palette.gbapal.lz"

  .globl gMonBackPic_Skitty
gMonBackPic_Skitty:
  .incbin "build/graphics/pokemon/skitty/back.4bpp.lz"

  .globl gMonShinyPalette_Skitty
gMonShinyPalette_Skitty:
  .incbin "build/graphics/pokemon/skitty/shiny_palette.gbapal.lz"

  .globl gMonIcon_Skitty
gMonIcon_Skitty: @ 0x08CF8114 [315]
  .incbin "build/graphics/pokemon/skitty/icon.4bpp"
  .incbin "baserom.gba", 0xCF8514, 0x3AC

  .globl gMonPalette_Delcatty
gMonPalette_Delcatty:
  .incbin "build/graphics/pokemon/delcatty/normal_palette.gbapal.lz"

  .globl gMonBackPic_Delcatty
gMonBackPic_Delcatty:
  .incbin "build/graphics/pokemon/delcatty/back.4bpp.lz"

  .globl gMonShinyPalette_Delcatty
gMonShinyPalette_Delcatty:
  .incbin "build/graphics/pokemon/delcatty/shiny_palette.gbapal.lz"

  .globl gMonIcon_Delcatty
gMonIcon_Delcatty: @ 0x08CF8CAC [316]
  .incbin "build/graphics/pokemon/delcatty/icon.4bpp"
  .incbin "baserom.gba", 0xCF90AC, 0x3A0

  .globl gMonPalette_Kecleon
gMonPalette_Kecleon:
  .incbin "build/graphics/pokemon/kecleon/normal_palette.gbapal.lz"

  .globl gMonBackPic_Kecleon
gMonBackPic_Kecleon:
  .incbin "build/graphics/pokemon/kecleon/back.4bpp.lz"

  .globl gMonShinyPalette_Kecleon
gMonShinyPalette_Kecleon:
  .incbin "build/graphics/pokemon/kecleon/shiny_palette.gbapal.lz"

  .globl gMonIcon_Kecleon
gMonIcon_Kecleon: @ 0x08CF9874 [317]
  .incbin "build/graphics/pokemon/kecleon/icon.4bpp"
  .incbin "baserom.gba", 0xCF9C74, 0x244

  .globl gMonPalette_Baltoy
gMonPalette_Baltoy:
  .incbin "build/graphics/pokemon/baltoy/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcf9ed7, 0x1

  .globl gMonBackPic_Baltoy
gMonBackPic_Baltoy:
  .incbin "build/graphics/pokemon/baltoy/back.4bpp.lz"

  .globl gMonShinyPalette_Baltoy
gMonShinyPalette_Baltoy:
  .incbin "build/graphics/pokemon/baltoy/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xCFA19F, 0x1
	.globl gMonIcon_Baltoy
gMonIcon_Baltoy: @ 0x08CFA1A0 [318]
  .incbin "build/graphics/pokemon/baltoy/icon.4bpp"
  .incbin "baserom.gba", 0xCFA5A0, 0x3D8

  .globl gMonPalette_Claydol
gMonPalette_Claydol:
  .incbin "build/graphics/pokemon/claydol/normal_palette.gbapal.lz"

  .globl gMonBackPic_Claydol
gMonBackPic_Claydol:
  .incbin "build/graphics/pokemon/claydol/back.4bpp.lz"

  .globl gMonShinyPalette_Claydol
gMonShinyPalette_Claydol:
  .incbin "build/graphics/pokemon/claydol/shiny_palette.gbapal.lz"

  .globl gMonIcon_Claydol
gMonIcon_Claydol: @ 0x08CFAD9C [319]
  .incbin "build/graphics/pokemon/claydol/icon.4bpp"
  .incbin "baserom.gba", 0xCFB19C, 0x2EC

  .globl gMonPalette_Nosepass
gMonPalette_Nosepass:
  .incbin "build/graphics/pokemon/nosepass/normal_palette.gbapal.lz"

  .globl gMonBackPic_Nosepass
gMonBackPic_Nosepass:
  .incbin "build/graphics/pokemon/nosepass/back.4bpp.lz"

  .globl gMonShinyPalette_Nosepass
gMonShinyPalette_Nosepass:
  .incbin "build/graphics/pokemon/nosepass/shiny_palette.gbapal.lz"

  .globl gMonIcon_Nosepass
gMonIcon_Nosepass: @ 0x08CFB778 [320]
  .incbin "build/graphics/pokemon/nosepass/icon.4bpp"
  .incbin "baserom.gba", 0xCFBB78, 0x4CC

  .globl gMonPalette_Torkoal
gMonPalette_Torkoal:
  .incbin "build/graphics/pokemon/torkoal/normal_palette.gbapal.lz"

  .globl gMonBackPic_Torkoal
gMonBackPic_Torkoal:
  .incbin "build/graphics/pokemon/torkoal/back.4bpp.lz"

  .globl gMonShinyPalette_Torkoal
gMonShinyPalette_Torkoal:
  .incbin "build/graphics/pokemon/torkoal/shiny_palette.gbapal.lz"

  .globl gMonIcon_Torkoal
gMonIcon_Torkoal: @ 0x08CFC35C [321]
  .incbin "build/graphics/pokemon/torkoal/icon.4bpp"
  .incbin "baserom.gba", 0xCFC75C, 0x2F4

  .globl gMonPalette_Sableye
gMonPalette_Sableye:
  .incbin "build/graphics/pokemon/sableye/normal_palette.gbapal.lz"

  .globl gMonBackPic_Sableye
gMonBackPic_Sableye:
  .incbin "build/graphics/pokemon/sableye/back.4bpp.lz"

  .globl gMonShinyPalette_Sableye
gMonShinyPalette_Sableye:
  .incbin "build/graphics/pokemon/sableye/shiny_palette.gbapal.lz"

  .globl gMonIcon_Sableye
gMonIcon_Sableye: @ 0x08CFCDC8 [322]
  .incbin "build/graphics/pokemon/sableye/icon.4bpp"
  .incbin "baserom.gba", 0xCFD1C8, 0x2B0

  .globl gMonPalette_Barboach
gMonPalette_Barboach:
  .incbin "build/graphics/pokemon/barboach/normal_palette.gbapal.lz"

  .globl gMonBackPic_Barboach
gMonBackPic_Barboach:
  .incbin "build/graphics/pokemon/barboach/back.4bpp.lz"

  .globl gMonShinyPalette_Barboach
gMonShinyPalette_Barboach:
  .incbin "build/graphics/pokemon/barboach/shiny_palette.gbapal.lz"

  .globl gMonIcon_Barboach
gMonIcon_Barboach: @ 0x08CFD758 [323]
  .incbin "build/graphics/pokemon/barboach/icon.4bpp"
  .incbin "baserom.gba", 0xCFDB58, 0x398

  .globl gMonPalette_Whiscash
gMonPalette_Whiscash:
  .incbin "build/graphics/pokemon/whiscash/normal_palette.gbapal.lz"

  .globl gMonBackPic_Whiscash
gMonBackPic_Whiscash:
  .incbin "build/graphics/pokemon/whiscash/back.4bpp.lz"

  .globl gMonShinyPalette_Whiscash
gMonShinyPalette_Whiscash:
  .incbin "build/graphics/pokemon/whiscash/shiny_palette.gbapal.lz"

  .globl gMonIcon_Whiscash
gMonIcon_Whiscash: @ 0x08CFE28C [324]
  .incbin "build/graphics/pokemon/whiscash/icon.4bpp"
  .incbin "baserom.gba", 0xCFE68C, 0x1E0

  .globl gMonPalette_Luvdisc
gMonPalette_Luvdisc:
  .incbin "build/graphics/pokemon/luvdisc/normal_palette.gbapal.lz"

  .globl gMonBackPic_Luvdisc
gMonBackPic_Luvdisc:
  .incbin "build/graphics/pokemon/luvdisc/back.4bpp.lz"

  .globl gMonShinyPalette_Luvdisc
gMonShinyPalette_Luvdisc:
  .incbin "build/graphics/pokemon/luvdisc/shiny_palette.gbapal.lz"

	.globl gMonIcon_Luvdisc
gMonIcon_Luvdisc: @ 0x08CFEA88 [325]
  .incbin "build/graphics/pokemon/luvdisc/icon.4bpp"
  .incbin "baserom.gba", 0xCFEE88, 0x37C

  .globl gMonPalette_Corphish
gMonPalette_Corphish:
  .incbin "build/graphics/pokemon/corphish/normal_palette.gbapal.lz"

  .globl gMonBackPic_Corphish
gMonBackPic_Corphish:
  .incbin "build/graphics/pokemon/corphish/back.4bpp.lz"

  .globl gMonShinyPalette_Corphish
gMonShinyPalette_Corphish:
  .incbin "build/graphics/pokemon/corphish/shiny_palette.gbapal.lz"

  .globl gMonIcon_Corphish
gMonIcon_Corphish: @ 0x08CFF570 [326]
  .incbin "build/graphics/pokemon/corphish/icon.4bpp"
  .incbin "baserom.gba", 0xCFF970, 0x4B0

  .globl gMonPalette_Crawdaunt
gMonPalette_Crawdaunt:
  .incbin "build/graphics/pokemon/crawdaunt/normal_palette.gbapal.lz"

  .globl gMonBackPic_Crawdaunt
gMonBackPic_Crawdaunt:
  .incbin "build/graphics/pokemon/crawdaunt/back.4bpp.lz"

  .globl gMonShinyPalette_Crawdaunt
gMonShinyPalette_Crawdaunt:
  .incbin "build/graphics/pokemon/crawdaunt/shiny_palette.gbapal.lz"

  .globl gMonIcon_Crawdaunt
gMonIcon_Crawdaunt: @ 0x08D00254 [327]
  .incbin "build/graphics/pokemon/crawdaunt/icon.4bpp"
  .incbin "baserom.gba", 0xD00654, 0x2AC

  .globl gMonPalette_Feebas
gMonPalette_Feebas:
  .incbin "build/graphics/pokemon/feebas/normal_palette.gbapal.lz"

  .globl gMonBackPic_Feebas
gMonBackPic_Feebas:
  .incbin "build/graphics/pokemon/feebas/back.4bpp.lz"

  .globl gMonShinyPalette_Feebas
gMonShinyPalette_Feebas:
  .incbin "build/graphics/pokemon/feebas/shiny_palette.gbapal.lz"

  .globl gMonIcon_Feebas
gMonIcon_Feebas: @ 0x08D00C88 [328]
  .incbin "build/graphics/pokemon/feebas/icon.4bpp"
  .incbin "baserom.gba", 0xD01088, 0x4B0

  .globl gMonPalette_Milotic
gMonPalette_Milotic:
  .incbin "build/graphics/pokemon/milotic/normal_palette.gbapal.lz"

  .globl gMonBackPic_Milotic
gMonBackPic_Milotic:
  .incbin "build/graphics/pokemon/milotic/back.4bpp.lz"

  .globl gMonShinyPalette_Milotic
gMonShinyPalette_Milotic:
  .incbin "build/graphics/pokemon/milotic/shiny_palette.gbapal.lz"

  .globl gMonIcon_Milotic
gMonIcon_Milotic: @ 0x08D0187C [329]
  .incbin "build/graphics/pokemon/milotic/icon.4bpp"
  .incbin "baserom.gba", 0xD01C7C, 0x34C

  .globl gMonPalette_Carvanha
gMonPalette_Carvanha:
  .incbin "build/graphics/pokemon/carvanha/normal_palette.gbapal.lz"

  .globl gMonBackPic_Carvanha
gMonBackPic_Carvanha:
  .incbin "build/graphics/pokemon/carvanha/back.4bpp.lz"

  .globl gMonShinyPalette_Carvanha
gMonShinyPalette_Carvanha:
  .incbin "build/graphics/pokemon/carvanha/shiny_palette.gbapal.lz"

  .globl gMonIcon_Carvanha
gMonIcon_Carvanha: @ 0x08D02328 [330]
  .incbin "build/graphics/pokemon/carvanha/icon.4bpp"
  .incbin "baserom.gba", 0xD02728, 0x3B0

  .globl gMonPalette_Sharpedo
gMonPalette_Sharpedo:
  .incbin "build/graphics/pokemon/sharpedo/normal_palette.gbapal.lz"

  .globl gMonBackPic_Sharpedo
gMonBackPic_Sharpedo:
  .incbin "build/graphics/pokemon/sharpedo/back.4bpp.lz"

  .globl gMonShinyPalette_Sharpedo
gMonShinyPalette_Sharpedo:
  .incbin "build/graphics/pokemon/sharpedo/shiny_palette.gbapal.lz"

  .globl gMonIcon_Sharpedo
gMonIcon_Sharpedo: @ 0x08D02E80 [331]
  .incbin "build/graphics/pokemon/sharpedo/icon.4bpp"
  .incbin "baserom.gba", 0xD03280, 0x23C

  .globl gMonPalette_Trapinch
gMonPalette_Trapinch:
  .incbin "build/graphics/pokemon/trapinch/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xd034e2, 0x2
 
  .globl gMonBackPic_Trapinch
gMonBackPic_Trapinch:
  .incbin "build/graphics/pokemon/trapinch/back.4bpp.lz"

  .globl gMonShinyPalette_Trapinch
gMonShinyPalette_Trapinch:
  .incbin "build/graphics/pokemon/trapinch/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xd0372a, 0x2

	.globl gMonIcon_Trapinch
gMonIcon_Trapinch: @ 0x08D0372C [332]
  .incbin "build/graphics/pokemon/trapinch/icon.4bpp"
  .incbin "baserom.gba", 0xD03B2C, 0x390

  .globl gMonPalette_Vibrava
gMonPalette_Vibrava:
  .incbin "build/graphics/pokemon/vibrava/normal_palette.gbapal.lz"

  .globl gMonBackPic_Vibrava
gMonBackPic_Vibrava:
  .incbin "build/graphics/pokemon/vibrava/back.4bpp.lz"

  .globl gMonShinyPalette_Vibrava
gMonShinyPalette_Vibrava:
  .incbin "build/graphics/pokemon/vibrava/shiny_palette.gbapal.lz"

  .globl gMonIcon_Vibrava
gMonIcon_Vibrava: @ 0x08D04184 [333]
  .incbin "build/graphics/pokemon/vibrava/icon.4bpp"
  .incbin "baserom.gba", 0xD04584, 0x510

  .globl gMonPalette_Flygon
gMonPalette_Flygon:
  .incbin "build/graphics/pokemon/flygon/normal_palette.gbapal.lz"

  .globl gMonBackPic_Flygon
gMonBackPic_Flygon:
  .incbin "build/graphics/pokemon/flygon/back.4bpp.lz"

  .globl gMonShinyPalette_Flygon
gMonShinyPalette_Flygon:
  .incbin "build/graphics/pokemon/flygon/shiny_palette.gbapal.lz"

  .globl gMonIcon_Flygon
gMonIcon_Flygon: @ 0x08D04F20 [334]
  .incbin "build/graphics/pokemon/flygon/icon.4bpp"
  .incbin "baserom.gba", 0xD05320, 0x338

  .globl gMonPalette_Makuhita
gMonPalette_Makuhita:
  .incbin "build/graphics/pokemon/makuhita/normal_palette.gbapal.lz"

  .globl gMonBackPic_Makuhita
gMonBackPic_Makuhita:
  .incbin "build/graphics/pokemon/makuhita/back.4bpp.lz"

  .globl gMonShinyPalette_Makuhita
gMonShinyPalette_Makuhita:
  .incbin "build/graphics/pokemon/makuhita/shiny_palette.gbapal.lz"

	.globl gMonIcon_Makuhita
gMonIcon_Makuhita: @ 0x08D05994 [335]
  .incbin "build/graphics/pokemon/makuhita/icon.4bpp"
  .incbin "baserom.gba", 0xD05D94, 0x4D0

  .globl gMonPalette_Hariyama
gMonPalette_Hariyama:
  .incbin "build/graphics/pokemon/hariyama/normal_palette.gbapal.lz"

  .globl gMonBackPic_Hariyama
gMonBackPic_Hariyama:
  .incbin "build/graphics/pokemon/hariyama/back.4bpp.lz"

  .globl gMonShinyPalette_Hariyama
gMonShinyPalette_Hariyama:
  .incbin "build/graphics/pokemon/hariyama/shiny_palette.gbapal.lz"

  .globl gMonIcon_Hariyama
gMonIcon_Hariyama: @ 0x08D06694 [336]
  .incbin "build/graphics/pokemon/hariyama/icon.4bpp"
  .incbin "baserom.gba", 0xD06A94, 0x2B0

  .globl gMonPalette_Electrike
gMonPalette_Electrike:
  .incbin "build/graphics/pokemon/electrike/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xd06d6a, 0x2

  .globl gMonBackPic_Electrike
gMonBackPic_Electrike:
  .incbin "build/graphics/pokemon/electrike/back.4bpp.lz"

  .globl gMonShinyPalette_Electrike
gMonShinyPalette_Electrike:
  .incbin "build/graphics/pokemon/electrike/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xd0701e, 0x2

	.globl gMonIcon_Electrike
gMonIcon_Electrike: @ 0x08D07020 [337]
  .incbin "build/graphics/pokemon/electrike/icon.4bpp"
  .incbin "baserom.gba", 0xD07420, 0x350

  .globl gMonPalette_Manectric
gMonPalette_Manectric:
  .incbin "build/graphics/pokemon/manectric/normal_palette.gbapal.lz"

  .globl gMonBackPic_Manectric
gMonBackPic_Manectric:
  .incbin "build/graphics/pokemon/manectric/back.4bpp.lz"

  .globl gMonShinyPalette_Manectric
gMonShinyPalette_Manectric:
  .incbin "build/graphics/pokemon/manectric/shiny_palette.gbapal.lz"

  .globl gMonIcon_Manectric
gMonIcon_Manectric: @ 0x08D079EC [338]
  .incbin "build/graphics/pokemon/manectric/icon.4bpp"
  .incbin "baserom.gba", 0xD07DEC, 0x2F0

  .globl gMonPalette_Numel
gMonPalette_Numel:
  .incbin "build/graphics/pokemon/numel/normal_palette.gbapal.lz"

  .globl gMonBackPic_Numel
gMonBackPic_Numel:
  .incbin "build/graphics/pokemon/numel/back.4bpp.lz"

  .globl gMonShinyPalette_Numel
gMonShinyPalette_Numel:
  .incbin "build/graphics/pokemon/numel/shiny_palette.gbapal.lz"

  .globl gMonIcon_Numel
gMonIcon_Numel: @ 0x08D083E8 [339]
  .incbin "build/graphics/pokemon/numel/icon.4bpp"
  .incbin "baserom.gba", 0xD087E8, 0x438

  .globl gMonPalette_Camerupt
gMonPalette_Camerupt:
  .incbin "build/graphics/pokemon/camerupt/normal_palette.gbapal.lz"

  .globl gMonBackPic_Camerupt
gMonBackPic_Camerupt:
  .incbin "build/graphics/pokemon/camerupt/back.4bpp.lz"

  .globl gMonShinyPalette_Camerupt
gMonShinyPalette_Camerupt:
  .incbin "build/graphics/pokemon/camerupt/shiny_palette.gbapal.lz"

  .globl gMonIcon_Camerupt
gMonIcon_Camerupt: @ 0x08D08F34 [340]
  .incbin "build/graphics/pokemon/camerupt/icon.4bpp"
  .incbin "baserom.gba", 0xD09334, 0x294

  .globl gMonPalette_Spheal
gMonPalette_Spheal:
  .incbin "build/graphics/pokemon/spheal/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xd095ee, 0x2

  .globl gMonBackPic_Spheal
gMonBackPic_Spheal:
  .incbin "build/graphics/pokemon/spheal/back.4bpp.lz"

  .globl gMonShinyPalette_Spheal
gMonShinyPalette_Spheal:
  .incbin "build/graphics/pokemon/spheal/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xd09812, 0x2

	.globl gMonIcon_Spheal
gMonIcon_Spheal: @ 0x08D09814 [341]
  .incbin "build/graphics/pokemon/spheal/icon.4bpp"
  .incbin "baserom.gba", 0xD09C14, 0x3A0

  .globl gMonPalette_Sealeo
gMonPalette_Sealeo:
  .incbin "build/graphics/pokemon/sealeo/normal_palette.gbapal.lz"

  .globl gMonBackPic_Sealeo
gMonBackPic_Sealeo:
  .incbin "build/graphics/pokemon/sealeo/back.4bpp.lz"

  .globl gMonShinyPalette_Sealeo
gMonShinyPalette_Sealeo:
  .incbin "build/graphics/pokemon/sealeo/shiny_palette.gbapal.lz"

  .globl gMonIcon_Sealeo
gMonIcon_Sealeo: @ 0x08D0A280 [342]
  .incbin "build/graphics/pokemon/sealeo/icon.4bpp"
  .incbin "baserom.gba", 0xD0A680, 0x794

  .globl gMonPalette_Walrein
gMonPalette_Walrein:
  .incbin "build/graphics/pokemon/walrein/normal_palette.gbapal.lz"

  .globl gMonBackPic_Walrein
gMonBackPic_Walrein:
  .incbin "build/graphics/pokemon/walrein/back.4bpp.lz"

  .globl gMonShinyPalette_Walrein
gMonShinyPalette_Walrein:
  .incbin "build/graphics/pokemon/walrein/shiny_palette.gbapal.lz"

  .globl gMonIcon_Walrein
gMonIcon_Walrein: @ 0x08D0B1EC [343]
  .incbin "build/graphics/pokemon/walrein/icon.4bpp"
  .incbin "baserom.gba", 0xD0B5EC, 0x330

  .globl gMonPalette_Cacnea
gMonPalette_Cacnea:
  .incbin "build/graphics/pokemon/cacnea/normal_palette.gbapal.lz"

  .globl gMonBackPic_Cacnea
gMonBackPic_Cacnea:
  .incbin "build/graphics/pokemon/cacnea/back.4bpp.lz"

  .globl gMonShinyPalette_Cacnea
gMonShinyPalette_Cacnea:
  .incbin "build/graphics/pokemon/cacnea/shiny_palette.gbapal.lz"

  .globl gMonIcon_Cacnea
gMonIcon_Cacnea: @ 0x08D0BCCC [344]
  .incbin "build/graphics/pokemon/cacnea/icon.4bpp"
  .incbin "baserom.gba", 0xD0C0CC, 0x458

  .globl gMonPalette_Cacturne
gMonPalette_Cacturne:
  .incbin "build/graphics/pokemon/cacturne/normal_palette.gbapal.lz"

  .globl gMonBackPic_Cacturne
gMonBackPic_Cacturne:
  .incbin "build/graphics/pokemon/cacturne/back.4bpp.lz"

  .globl gMonShinyPalette_Cacturne
gMonShinyPalette_Cacturne:
  .incbin "build/graphics/pokemon/cacturne/shiny_palette.gbapal.lz"

  .globl gMonIcon_Cacturne
gMonIcon_Cacturne: @ 0x08D0C874 [345]
  .incbin "build/graphics/pokemon/cacturne/icon.4bpp"
  .incbin "baserom.gba", 0xD0CC74, 0x2E4

  .globl gMonPalette_Snorunt
gMonPalette_Snorunt:
  .incbin "build/graphics/pokemon/snorunt/normal_palette.gbapal.lz"

  .globl gMonBackPic_Snorunt
gMonBackPic_Snorunt:
  .incbin "build/graphics/pokemon/snorunt/back.4bpp.lz"

  .globl gMonShinyPalette_Snorunt
gMonShinyPalette_Snorunt:
  .incbin "build/graphics/pokemon/snorunt/shiny_palette.gbapal.lz"

  .globl gMonIcon_Snorunt
gMonIcon_Snorunt: @ 0x08D0D28C [346]
  .incbin "build/graphics/pokemon/snorunt/icon.4bpp"
  .incbin "baserom.gba", 0xD0D68C, 0x3E8

  .globl gMonPalette_Glalie
gMonPalette_Glalie:
  .incbin "build/graphics/pokemon/glalie/normal_palette.gbapal.lz"

  .globl gMonBackPic_Glalie
gMonBackPic_Glalie:
  .incbin "build/graphics/pokemon/glalie/back.4bpp.lz"

  .globl gMonShinyPalette_Glalie
gMonShinyPalette_Glalie:
  .incbin "build/graphics/pokemon/glalie/shiny_palette.gbapal.lz"

  .globl gMonIcon_Glalie
gMonIcon_Glalie: @ 0x08D0DE74 [347]
  .incbin "build/graphics/pokemon/glalie/icon.4bpp"
  .incbin "baserom.gba", 0xD0E274, 0x348

  .globl gMonPalette_Lunatone
gMonPalette_Lunatone:
  .incbin "build/graphics/pokemon/lunatone/normal_palette.gbapal.lz"

  .globl gMonBackPic_Lunatone
gMonBackPic_Lunatone:
  .incbin "build/graphics/pokemon/lunatone/back.4bpp.lz"

  .globl gMonShinyPalette_Lunatone
gMonShinyPalette_Lunatone:
  .incbin "build/graphics/pokemon/lunatone/shiny_palette.gbapal.lz"

  .globl gMonIcon_Lunatone
gMonIcon_Lunatone: @ 0x08D0E964 [348]
  .incbin "build/graphics/pokemon/lunatone/icon.4bpp"
  .incbin "baserom.gba", 0xD0ED64, 0x46C

  .globl gMonPalette_Solrock
gMonPalette_Solrock:
  .incbin "build/graphics/pokemon/solrock/normal_palette.gbapal.lz"

  .globl gMonBackPic_Solrock
gMonBackPic_Solrock:
  .incbin "build/graphics/pokemon/solrock/back.4bpp.lz"

  .globl gMonShinyPalette_Solrock
gMonShinyPalette_Solrock:
  .incbin "build/graphics/pokemon/solrock/shiny_palette.gbapal.lz"

  .globl gMonIcon_Solrock
gMonIcon_Solrock: @ 0x08D0F60C [349]
  .incbin "build/graphics/pokemon/solrock/icon.4bpp"
  .incbin "baserom.gba", 0xD0FA0C, 0x2E8

  .globl gMonPalette_Azurill
gMonPalette_Azurill:
  .incbin "build/graphics/pokemon/azurill/normal_palette.gbapal.lz"

  .globl gMonBackPic_Azurill
gMonBackPic_Azurill:
  .incbin "build/graphics/pokemon/azurill/back.4bpp.lz"

  .globl gMonShinyPalette_Azurill
gMonShinyPalette_Azurill:
  .incbin "build/graphics/pokemon/azurill/shiny_palette.gbapal.lz"

  .globl gMonIcon_Azurill
gMonIcon_Azurill: @ 0x08D1005C [350]
  .incbin "build/graphics/pokemon/azurill/icon.4bpp"
  .incbin "baserom.gba", 0xD1045C, 0x28C

  .globl gMonPalette_Spoink
gMonPalette_Spoink:
  .incbin "build/graphics/pokemon/spoink/normal_palette.gbapal.lz"

  .globl gMonBackPic_Spoink
gMonBackPic_Spoink:
  .incbin "build/graphics/pokemon/spoink/back.4bpp.lz"

  .globl gMonShinyPalette_Spoink
gMonShinyPalette_Spoink:
  .incbin "build/graphics/pokemon/spoink/shiny_palette.gbapal.lz"

  .globl gMonIcon_Spoink
gMonIcon_Spoink: @ 0x08D10978 [351]
  .incbin "build/graphics/pokemon/spoink/icon.4bpp"
  .incbin "baserom.gba", 0xD10D78, 0x3DC

  .globl gMonPalette_Grumpig
gMonPalette_Grumpig:
  .incbin "build/graphics/pokemon/grumpig/normal_palette.gbapal.lz"

  .globl gMonBackPic_Grumpig
gMonBackPic_Grumpig:
  .incbin "build/graphics/pokemon/grumpig/back.4bpp.lz"

  .globl gMonShinyPalette_Grumpig
gMonShinyPalette_Grumpig:
  .incbin "build/graphics/pokemon/grumpig/shiny_palette.gbapal.lz"

  .globl gMonIcon_Grumpig
gMonIcon_Grumpig: @ 0x08D11504 [352]
  .incbin "build/graphics/pokemon/grumpig/icon.4bpp"
  .incbin "baserom.gba", 0xD11904, 0x2AC

  .globl gMonPalette_Plusle
gMonPalette_Plusle:
  .incbin "build/graphics/pokemon/plusle/normal_palette.gbapal.lz"

  .globl gMonBackPic_Plusle
gMonBackPic_Plusle:
  .incbin "build/graphics/pokemon/plusle/back.4bpp.lz"

  .globl gMonShinyPalette_Plusle
gMonShinyPalette_Plusle:
  .incbin "build/graphics/pokemon/plusle/shiny_palette.gbapal.lz"

  .globl gMonIcon_Plusle
gMonIcon_Plusle: @ 0x08D11EB8 [353]
  .incbin "build/graphics/pokemon/plusle/icon.4bpp"
  .incbin "baserom.gba", 0xD122B8, 0x288

  .globl gMonPalette_Minun
gMonPalette_Minun:
  .incbin "build/graphics/pokemon/minun/normal_palette.gbapal.lz"

  .globl gMonBackPic_Minun
gMonBackPic_Minun:
  .incbin "build/graphics/pokemon/minun/back.4bpp.lz"

  .globl gMonShinyPalette_Minun
gMonShinyPalette_Minun:
  .incbin "build/graphics/pokemon/minun/shiny_palette.gbapal.lz"

  .globl gMonIcon_Minun
gMonIcon_Minun: @ 0x08D12858 [354]
  .incbin "build/graphics/pokemon/minun/icon.4bpp"
  .incbin "baserom.gba", 0xD12C58, 0x3DC

  .globl gMonPalette_Mawile
gMonPalette_Mawile:
  .incbin "build/graphics/pokemon/mawile/normal_palette.gbapal.lz"

  .globl gMonBackPic_Mawile
gMonBackPic_Mawile:
  .incbin "build/graphics/pokemon/mawile/back.4bpp.lz"

  .globl gMonShinyPalette_Mawile
gMonShinyPalette_Mawile:
  .incbin "build/graphics/pokemon/mawile/shiny_palette.gbapal.lz"

  .globl gMonIcon_Mawile
gMonIcon_Mawile: @ 0x08D13484 [355]
  .incbin "build/graphics/pokemon/mawile/icon.4bpp"
  .incbin "baserom.gba", 0xD13884, 0x2D8

  .globl gMonPalette_Meditite
gMonPalette_Meditite:
  .incbin "build/graphics/pokemon/meditite/normal_palette.gbapal.lz"

  .globl gMonBackPic_Meditite
gMonBackPic_Meditite:
  .incbin "build/graphics/pokemon/meditite/back.4bpp.lz"

  .globl gMonShinyPalette_Meditite
gMonShinyPalette_Meditite:
  .incbin "build/graphics/pokemon/meditite/shiny_palette.gbapal.lz"

	.globl gMonIcon_Meditite
gMonIcon_Meditite: @ 0x08D13E70 [356]
  .incbin "build/graphics/pokemon/meditite/icon.4bpp"
  .incbin "baserom.gba", 0xD14270, 0x350

  .globl gMonPalette_Medicham
gMonPalette_Medicham:
  .incbin "build/graphics/pokemon/medicham/normal_palette.gbapal.lz"

  .globl gMonBackPic_Medicham
gMonBackPic_Medicham:
  .incbin "build/graphics/pokemon/medicham/back.4bpp.lz"

  .globl gMonShinyPalette_Medicham
gMonShinyPalette_Medicham:
  .incbin "build/graphics/pokemon/medicham/shiny_palette.gbapal.lz"

  .globl gMonIcon_Medicham
gMonIcon_Medicham: @ 0x08D14948 [357]
  .incbin "build/graphics/pokemon/medicham/icon.4bpp"
  .incbin "baserom.gba", 0xD14D48, 0x5D0

  .globl gMonPalette_Swablu
gMonPalette_Swablu:
  .incbin "build/graphics/pokemon/swablu/normal_palette.gbapal.lz"

  .globl gMonBackPic_Swablu
gMonBackPic_Swablu:
  .incbin "build/graphics/pokemon/swablu/back.4bpp.lz"

  .globl gMonShinyPalette_Swablu
gMonShinyPalette_Swablu:
  .incbin "build/graphics/pokemon/swablu/shiny_palette.gbapal.lz"

  .globl gMonIcon_Swablu
gMonIcon_Swablu: @ 0x08D15720 [358]
  .incbin "build/graphics/pokemon/swablu/icon.4bpp"
  .incbin "baserom.gba", 0xD15B20, 0x3FC

  .globl gMonPalette_Altaria
gMonPalette_Altaria:
  .incbin "build/graphics/pokemon/altaria/normal_palette.gbapal.lz"

  .globl gMonBackPic_Altaria
gMonBackPic_Altaria:
  .incbin "build/graphics/pokemon/altaria/back.4bpp.lz"

  .globl gMonShinyPalette_Altaria
gMonShinyPalette_Altaria:
  .incbin "build/graphics/pokemon/altaria/shiny_palette.gbapal.lz"

  .globl gMonIcon_Altaria
gMonIcon_Altaria: @ 0x08D162E4 [359]
  .incbin "build/graphics/pokemon/altaria/icon.4bpp"
  .incbin "baserom.gba", 0xD166E4, 0x2B8

  .globl gMonPalette_Wynaut
gMonPalette_Wynaut:
  .incbin "build/graphics/pokemon/wynaut/normal_palette.gbapal.lz"

  .globl gMonBackPic_Wynaut
gMonBackPic_Wynaut:
  .incbin "build/graphics/pokemon/wynaut/back.4bpp.lz"

  .globl gMonShinyPalette_Wynaut
gMonShinyPalette_Wynaut:
  .incbin "build/graphics/pokemon/wynaut/shiny_palette.gbapal.lz"

  .globl gMonIcon_Wynaut
gMonIcon_Wynaut: @ 0x08D16C7C [360]
  .incbin "build/graphics/pokemon/wynaut/icon.4bpp"
  .incbin "baserom.gba", 0xD1707C, 0x310

  .globl gMonPalette_Duskull
gMonPalette_Duskull:
  .incbin "build/graphics/pokemon/duskull/normal_palette.gbapal.lz"

  .globl gMonBackPic_Duskull
gMonBackPic_Duskull:
  .incbin "build/graphics/pokemon/duskull/back.4bpp.lz"

  .globl gMonShinyPalette_Duskull
gMonShinyPalette_Duskull:
  .incbin "build/graphics/pokemon/duskull/shiny_palette.gbapal.lz"

  .globl gMonIcon_Duskull
gMonIcon_Duskull: @ 0x08D1768C [361]
  .incbin "build/graphics/pokemon/duskull/icon.4bpp"
  .incbin "baserom.gba", 0xD17A8C, 0x3C0

  .globl gMonPalette_Dusclops
gMonPalette_Dusclops:
  .incbin "build/graphics/pokemon/dusclops/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xd17e72, 0x2

  .globl gMonBackPic_Dusclops
gMonBackPic_Dusclops:
  .incbin "build/graphics/pokemon/dusclops/back.4bpp.lz"

  .globl gMonShinyPalette_Dusclops
gMonShinyPalette_Dusclops:
  .incbin "build/graphics/pokemon/dusclops/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xd18186, 0x2

	.globl gMonIcon_Dusclops
gMonIcon_Dusclops: @ 0x08D18188 [362]
  .incbin "build/graphics/pokemon/dusclops/icon.4bpp"
  .incbin "baserom.gba", 0xD18588, 0x38C

  .globl gMonPalette_Roselia
gMonPalette_Roselia:
  .incbin "build/graphics/pokemon/roselia/normal_palette.gbapal.lz"

  .globl gMonBackPic_Roselia
gMonBackPic_Roselia:
  .incbin "build/graphics/pokemon/roselia/back.4bpp.lz"

  .globl gMonShinyPalette_Roselia
gMonShinyPalette_Roselia:
  .incbin "build/graphics/pokemon/roselia/shiny_palette.gbapal.lz"

  .globl gMonIcon_Roselia
gMonIcon_Roselia: @ 0x08D18D2C [363]
  .incbin "build/graphics/pokemon/roselia/icon.4bpp"
  .incbin "baserom.gba", 0xD1912C, 0x308

  .globl gMonPalette_Slakoth
gMonPalette_Slakoth:
  .incbin "build/graphics/pokemon/slakoth/normal_palette.gbapal.lz"

  .globl gMonBackPic_Slakoth
gMonBackPic_Slakoth:
  .incbin "build/graphics/pokemon/slakoth/back.4bpp.lz"

  .globl gMonShinyPalette_Slakoth
gMonShinyPalette_Slakoth:
  .incbin "build/graphics/pokemon/slakoth/shiny_palette.gbapal.lz"

  .globl gMonIcon_Slakoth
gMonIcon_Slakoth: @ 0x08D1976C [364]
  .incbin "build/graphics/pokemon/slakoth/icon.4bpp"
  .incbin "baserom.gba", 0xD19B6C, 0x41C

  .globl gMonPalette_Vigoroth
gMonPalette_Vigoroth:
  .incbin "build/graphics/pokemon/vigoroth/normal_palette.gbapal.lz"

  .globl gMonBackPic_Vigoroth
gMonBackPic_Vigoroth:
  .incbin "build/graphics/pokemon/vigoroth/back.4bpp.lz"

  .globl gMonShinyPalette_Vigoroth
gMonShinyPalette_Vigoroth:
  .incbin "build/graphics/pokemon/vigoroth/shiny_palette.gbapal.lz"

  .globl gMonIcon_Vigoroth
gMonIcon_Vigoroth: @ 0x08D1A2A0 [365]
  .incbin "build/graphics/pokemon/vigoroth/icon.4bpp"
  .incbin "baserom.gba", 0xD1A6A0, 0x4F4

  .globl gMonPalette_Slaking
gMonPalette_Slaking:
  .incbin "build/graphics/pokemon/slaking/normal_palette.gbapal.lz"

  .globl gMonBackPic_Slaking
gMonBackPic_Slaking:
  .incbin "build/graphics/pokemon/slaking/back.4bpp.lz"

  .globl gMonShinyPalette_Slaking
gMonShinyPalette_Slaking:
  .incbin "build/graphics/pokemon/slaking/shiny_palette.gbapal.lz"

  .globl gMonIcon_Slaking
gMonIcon_Slaking: @ 0x08D1AFA8 [366]
  .incbin "build/graphics/pokemon/slaking/icon.4bpp"
  .incbin "baserom.gba", 0xD1B3A8, 0x238

  .globl gMonPalette_Gulpin
gMonPalette_Gulpin:
  .incbin "build/graphics/pokemon/gulpin/normal_palette.gbapal.lz"

  .globl gMonBackPic_Gulpin
gMonBackPic_Gulpin:
  .incbin "build/graphics/pokemon/gulpin/back.4bpp.lz"

  .globl gMonShinyPalette_Gulpin
gMonShinyPalette_Gulpin:
  .incbin "build/graphics/pokemon/gulpin/shiny_palette.gbapal.lz"

  .globl gMonIcon_Gulpin
gMonIcon_Gulpin: @ 0x08D1B8B4 [367]
  .incbin "build/graphics/pokemon/gulpin/icon.4bpp"
  .incbin "baserom.gba", 0xD1BCB4, 0x364

  .globl gMonPalette_Swalot
gMonPalette_Swalot:
  .incbin "build/graphics/pokemon/swalot/normal_palette.gbapal.lz"

  .globl gMonBackPic_Swalot
gMonBackPic_Swalot:
  .incbin "build/graphics/pokemon/swalot/back.4bpp.lz"

  .globl gMonShinyPalette_Swalot
gMonShinyPalette_Swalot:
  .incbin "build/graphics/pokemon/swalot/shiny_palette.gbapal.lz"

  .globl gMonIcon_Swalot
gMonIcon_Swalot: @ 0x08D1C3B0 [368]
  .incbin "build/graphics/pokemon/swalot/icon.4bpp"
  .incbin "baserom.gba", 0xD1C7B0, 0x598

  .globl gMonPalette_Tropius
gMonPalette_Tropius:
  .incbin "build/graphics/pokemon/tropius/normal_palette.gbapal.lz"

  .globl gMonBackPic_Tropius
gMonBackPic_Tropius:
  .incbin "build/graphics/pokemon/tropius/back.4bpp.lz"

  .globl gMonShinyPalette_Tropius
gMonShinyPalette_Tropius:
  .incbin "build/graphics/pokemon/tropius/shiny_palette.gbapal.lz"

  .globl gMonIcon_Tropius
gMonIcon_Tropius: @ 0x08D1D0BC [369]
  .incbin "build/graphics/pokemon/tropius/icon.4bpp"
  .incbin "baserom.gba", 0xD1D4BC, 0x2B4

  .globl gMonPalette_Whismur
gMonPalette_Whismur:
  .incbin "build/graphics/pokemon/whismur/normal_palette.gbapal.lz"

  .globl gMonBackPic_Whismur
gMonBackPic_Whismur:
  .incbin "build/graphics/pokemon/whismur/back.4bpp.lz"

  .globl gMonShinyPalette_Whismur
gMonShinyPalette_Whismur:
  .incbin "build/graphics/pokemon/whismur/shiny_palette.gbapal.lz"

  .globl gMonIcon_Whismur
gMonIcon_Whismur: @ 0x08D1DA30 [370]
  .incbin "build/graphics/pokemon/whismur/icon.4bpp"
  .incbin "baserom.gba", 0xD1DE30, 0x498

  .globl gMonPalette_Loudred
gMonPalette_Loudred:
  .incbin "build/graphics/pokemon/loudred/normal_palette.gbapal.lz"

  .globl gMonBackPic_Loudred
gMonBackPic_Loudred:
  .incbin "build/graphics/pokemon/loudred/back.4bpp.lz"

  .globl gMonShinyPalette_Loudred
gMonShinyPalette_Loudred:
  .incbin "build/graphics/pokemon/loudred/shiny_palette.gbapal.lz"

  .globl gMonIcon_Loudred
gMonIcon_Loudred: @ 0x08D1E688 [371]
  .incbin "build/graphics/pokemon/loudred/icon.4bpp"
  .incbin "baserom.gba", 0xD1EA88, 0x588

  .globl gMonPalette_Exploud
gMonPalette_Exploud:
  .incbin "build/graphics/pokemon/exploud/normal_palette.gbapal.lz"

  .globl gMonBackPic_Exploud
gMonBackPic_Exploud:
  .incbin "build/graphics/pokemon/exploud/back.4bpp.lz"

  .globl gMonShinyPalette_Exploud
gMonShinyPalette_Exploud:
  .incbin "build/graphics/pokemon/exploud/shiny_palette.gbapal.lz"

  .globl gMonIcon_Exploud
gMonIcon_Exploud: @ 0x08D1F46C [372]
  .incbin "build/graphics/pokemon/exploud/icon.4bpp"
  .incbin "baserom.gba", 0xD1F86C, 0x2F8

  .globl gMonPalette_Clamperl
gMonPalette_Clamperl:
  .incbin "build/graphics/pokemon/clamperl/normal_palette.gbapal.lz"

  .globl gMonBackPic_Clamperl
gMonBackPic_Clamperl:
  .incbin "build/graphics/pokemon/clamperl/back.4bpp.lz"

  .globl gMonShinyPalette_Clamperl
gMonShinyPalette_Clamperl:
  .incbin "build/graphics/pokemon/clamperl/shiny_palette.gbapal.lz"

  .globl gMonIcon_Clamperl
gMonIcon_Clamperl: @ 0x08D1FE48 [373]
  .incbin "build/graphics/pokemon/clamperl/icon.4bpp"
  .incbin "baserom.gba", 0xD20248, 0x3EC

  .globl gMonPalette_Huntail
gMonPalette_Huntail:
  .incbin "build/graphics/pokemon/huntail/normal_palette.gbapal.lz"

  .globl gMonBackPic_Huntail
gMonBackPic_Huntail:
  .incbin "build/graphics/pokemon/huntail/back.4bpp.lz"

  .globl gMonShinyPalette_Huntail
gMonShinyPalette_Huntail:
  .incbin "build/graphics/pokemon/huntail/shiny_palette.gbapal.lz"

  .globl gMonIcon_Huntail
gMonIcon_Huntail: @ 0x08D209D8 [374]
  .incbin "build/graphics/pokemon/huntail/icon.4bpp"
  .incbin "baserom.gba", 0xD20DD8, 0x330

  .globl gMonPalette_Gorebyss
gMonPalette_Gorebyss:
  .incbin "build/graphics/pokemon/gorebyss/normal_palette.gbapal.lz"

  .globl gMonBackPic_Gorebyss
gMonBackPic_Gorebyss:
  .incbin "build/graphics/pokemon/gorebyss/back.4bpp.lz"

  .globl gMonShinyPalette_Gorebyss
gMonShinyPalette_Gorebyss:
  .incbin "build/graphics/pokemon/gorebyss/shiny_palette.gbapal.lz"

  .globl gMonIcon_Gorebyss
gMonIcon_Gorebyss: @ 0x08D21440 [375]
  .incbin "build/graphics/pokemon/gorebyss/icon.4bpp"
  .incbin "baserom.gba", 0xD21840, 0x450

  .globl gMonPalette_Absol
gMonPalette_Absol:
  .incbin "build/graphics/pokemon/absol/normal_palette.gbapal.lz"

  .globl gMonBackPic_Absol
gMonBackPic_Absol:
  .incbin "build/graphics/pokemon/absol/back.4bpp.lz"

  .globl gMonShinyPalette_Absol
gMonShinyPalette_Absol:
  .incbin "build/graphics/pokemon/absol/shiny_palette.gbapal.lz"

  .globl gMonIcon_Absol
gMonIcon_Absol: @ 0x08D22040 [376]
  .incbin "build/graphics/pokemon/absol/icon.4bpp"
  .incbin "baserom.gba", 0xD22440, 0x258

  .globl gMonPalette_Shuppet
gMonPalette_Shuppet:
  .incbin "build/graphics/pokemon/shuppet/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xd226be, 0x2
  .globl gMonBackPic_Shuppet
gMonBackPic_Shuppet:
  .incbin "build/graphics/pokemon/shuppet/back.4bpp.lz"

  .globl gMonShinyPalette_Shuppet
gMonShinyPalette_Shuppet:
  .incbin "build/graphics/pokemon/shuppet/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xd2297e, 0x2

	.globl gMonIcon_Shuppet
gMonIcon_Shuppet: @ 0x08D22980 [377]
  .incbin "build/graphics/pokemon/shuppet/icon.4bpp"
  .incbin "baserom.gba", 0xD22D80, 0x2D4

  .globl gMonPalette_Banette
gMonPalette_Banette:
  .incbin "build/graphics/pokemon/banette/normal_palette.gbapal.lz"

  .globl gMonBackPic_Banette
gMonBackPic_Banette:
  .incbin "build/graphics/pokemon/banette/back.4bpp.lz"

  .globl gMonShinyPalette_Banette
gMonShinyPalette_Banette:
  .incbin "build/graphics/pokemon/banette/shiny_palette.gbapal.lz"

  .globl gMonIcon_Banette
gMonIcon_Banette: @ 0x08D23320 [378]
  .incbin "build/graphics/pokemon/banette/icon.4bpp"
  .incbin "baserom.gba", 0xD23720, 0x440

  .globl gMonPalette_Seviper
gMonPalette_Seviper:
  .incbin "build/graphics/pokemon/seviper/normal_palette.gbapal.lz"

  .globl gMonBackPic_Seviper
gMonBackPic_Seviper:
  .incbin "build/graphics/pokemon/seviper/back.4bpp.lz"

  .globl gMonShinyPalette_Seviper
gMonShinyPalette_Seviper:
  .incbin "build/graphics/pokemon/seviper/shiny_palette.gbapal.lz"

  .globl gMonIcon_Seviper
gMonIcon_Seviper: @ 0x08D2403C [379]
  .incbin "build/graphics/pokemon/seviper/icon.4bpp"
  .incbin "baserom.gba", 0xD2443C, 0x3EC

  .globl gMonPalette_Zangoose
gMonPalette_Zangoose:
  .incbin "build/graphics/pokemon/zangoose/normal_palette.gbapal.lz"

  .globl gMonBackPic_Zangoose
gMonBackPic_Zangoose:
  .incbin "build/graphics/pokemon/zangoose/back.4bpp.lz"

  .globl gMonShinyPalette_Zangoose
gMonShinyPalette_Zangoose:
  .incbin "build/graphics/pokemon/zangoose/shiny_palette.gbapal.lz"

  .globl gMonIcon_Zangoose
gMonIcon_Zangoose: @ 0x08D24BEC [380]
  .incbin "build/graphics/pokemon/zangoose/icon.4bpp"
  .incbin "baserom.gba", 0xD24FEC, 0x3B4

  .globl gMonPalette_Relicanth
gMonPalette_Relicanth:
  .incbin "build/graphics/pokemon/relicanth/normal_palette.gbapal.lz"

  .globl gMonBackPic_Relicanth
gMonBackPic_Relicanth:
  .incbin "build/graphics/pokemon/relicanth/back.4bpp.lz"

  .globl gMonShinyPalette_Relicanth
gMonShinyPalette_Relicanth:
  .incbin "build/graphics/pokemon/relicanth/shiny_palette.gbapal.lz"

  .globl gMonIcon_Relicanth
gMonIcon_Relicanth: @ 0x08D25748 [381]
  .incbin "build/graphics/pokemon/relicanth/icon.4bpp"
  .incbin "baserom.gba", 0xD25B48, 0x208

  .globl gMonPalette_Aron
gMonPalette_Aron:
  .incbin "build/graphics/pokemon/aron/normal_palette.gbapal.lz"

  .globl gMonBackPic_Aron
gMonBackPic_Aron:
  .incbin "build/graphics/pokemon/aron/back.4bpp.lz"

  .globl gMonShinyPalette_Aron
gMonShinyPalette_Aron:
  .incbin "build/graphics/pokemon/aron/shiny_palette.gbapal.lz"

  .globl gMonIcon_Aron
gMonIcon_Aron: @ 0x08D25FC8 [382]
  .incbin "build/graphics/pokemon/aron/icon.4bpp"
  .incbin "baserom.gba", 0xD263C8, 0x3EC

  .globl gMonPalette_Lairon
gMonPalette_Lairon:
  .incbin "build/graphics/pokemon/lairon/normal_palette.gbapal.lz"

  .globl gMonBackPic_Lairon
gMonBackPic_Lairon:
  .incbin "build/graphics/pokemon/lairon/back.4bpp.lz"

  .globl gMonShinyPalette_Lairon
gMonShinyPalette_Lairon:
  .incbin "build/graphics/pokemon/lairon/shiny_palette.gbapal.lz"

  .globl gMonIcon_Lairon
gMonIcon_Lairon: @ 0x08D26AF0 [383]
  .incbin "build/graphics/pokemon/lairon/icon.4bpp"
  .incbin "baserom.gba", 0xD26EF0, 0x59C

  .globl gMonPalette_Aggron
gMonPalette_Aggron:
  .incbin "build/graphics/pokemon/aggron/normal_palette.gbapal.lz"

  .globl gMonBackPic_Aggron
gMonBackPic_Aggron:
  .incbin "build/graphics/pokemon/aggron/back.4bpp.lz"

  .globl gMonShinyPalette_Aggron
gMonShinyPalette_Aggron:
  .incbin "build/graphics/pokemon/aggron/shiny_palette.gbapal.lz"

  .globl gMonIcon_Aggron
gMonIcon_Aggron: @ 0x08D27904 [384]
  .incbin "build/graphics/pokemon/aggron/icon.4bpp"
  .incbin "baserom.gba", 0xD27D04, 0xAA8

  .globl gMonPalette_CastformNormal
gMonPalette_CastformNormal:
  .incbin "build/graphics/pokemon/castform_normal/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xd28829, 0x3

  .globl gMonBackPic_CastformNormal
gMonBackPic_CastformNormal:
  .incbin "build/graphics/pokemon/castform_normal/back.4bpp.lz"

  .globl gMonShinyPalette_CastformNormal
gMonShinyPalette_CastformNormal:
  .incbin "build/graphics/pokemon/castform_normal/shiny_palette.gbapal.lz"
 
	.globl gMonIcon_CastformNormal
gMonIcon_CastformNormal: @ 0x08D29264 [385]
  .incbin "build/graphics/pokemon/castform_normal/icon.4bpp"
  .incbin "baserom.gba", 0xD29664, 0x3B0

  .globl gMonPalette_Volbeat
gMonPalette_Volbeat:
  .incbin "build/graphics/pokemon/volbeat/normal_palette.gbapal.lz"

  .globl gMonBackPic_Volbeat
gMonBackPic_Volbeat:
  .incbin "build/graphics/pokemon/volbeat/back.4bpp.lz"

  .globl gMonShinyPalette_Volbeat
gMonShinyPalette_Volbeat:
  .incbin "build/graphics/pokemon/volbeat/shiny_palette.gbapal.lz"

  .globl gMonIcon_Volbeat
gMonIcon_Volbeat: @ 0x08D29DC4 [386]
  .incbin "build/graphics/pokemon/volbeat/icon.4bpp"
  .incbin "baserom.gba", 0xD2A1C4, 0x394

  .globl gMonPalette_Illumise
gMonPalette_Illumise:
  .incbin "build/graphics/pokemon/illumise/normal_palette.gbapal.lz"

  .globl gMonBackPic_Illumise
gMonBackPic_Illumise:
  .incbin "build/graphics/pokemon/illumise/back.4bpp.lz"

  .globl gMonShinyPalette_Illumise
gMonShinyPalette_Illumise:
  .incbin "build/graphics/pokemon/illumise/shiny_palette.gbapal.lz"

  .globl gMonIcon_Illumise
gMonIcon_Illumise: @ 0x08D2A8C4 [387]
  .incbin "build/graphics/pokemon/illumise/icon.4bpp"
  .incbin "baserom.gba", 0xD2ACC4, 0x364

  .globl gMonPalette_Lileep
gMonPalette_Lileep:
  .incbin "build/graphics/pokemon/lileep/normal_palette.gbapal.lz"

  .globl gMonBackPic_Lileep
gMonBackPic_Lileep:
  .incbin "build/graphics/pokemon/lileep/back.4bpp.lz"

  .globl gMonShinyPalette_Lileep
gMonShinyPalette_Lileep:
  .incbin "build/graphics/pokemon/lileep/shiny_palette.gbapal.lz"

  .globl gMonIcon_Lileep
gMonIcon_Lileep: @ 0x08D2B3BC [388]
  .incbin "build/graphics/pokemon/lileep/icon.4bpp"
  .incbin "baserom.gba", 0xD2B7BC, 0x43C

  .globl gMonPalette_Cradily
gMonPalette_Cradily:
  .incbin "build/graphics/pokemon/cradily/normal_palette.gbapal.lz"

  .globl gMonBackPic_Cradily
gMonBackPic_Cradily:
  .incbin "build/graphics/pokemon/cradily/back.4bpp.lz"

  .globl gMonShinyPalette_Cradily
gMonShinyPalette_Cradily:
  .incbin "build/graphics/pokemon/cradily/shiny_palette.gbapal.lz"

  .globl gMonIcon_Cradily
gMonIcon_Cradily: @ 0x08D2C044 [389]
  .incbin "build/graphics/pokemon/cradily/icon.4bpp"
  .incbin "baserom.gba", 0xD2C444, 0x344

  .globl gMonPalette_Anorith
gMonPalette_Anorith:
  .incbin "build/graphics/pokemon/anorith/normal_palette.gbapal.lz"

  .globl gMonBackPic_Anorith
gMonBackPic_Anorith:
  .incbin "build/graphics/pokemon/anorith/back.4bpp.lz"

  .globl gMonShinyPalette_Anorith
gMonShinyPalette_Anorith:
  .incbin "build/graphics/pokemon/anorith/shiny_palette.gbapal.lz"

  .globl gMonIcon_Anorith
gMonIcon_Anorith: @ 0x08D2CA20 [390]
  .incbin "build/graphics/pokemon/anorith/icon.4bpp"
  .incbin "baserom.gba", 0xD2CE20, 0x5A0

  .globl gMonPalette_Armaldo
gMonPalette_Armaldo:
  .incbin "build/graphics/pokemon/armaldo/normal_palette.gbapal.lz"

  .globl gMonBackPic_Armaldo
gMonBackPic_Armaldo:
  .incbin "build/graphics/pokemon/armaldo/back.4bpp.lz"

  .globl gMonShinyPalette_Armaldo
gMonShinyPalette_Armaldo:
  .incbin "build/graphics/pokemon/armaldo/shiny_palette.gbapal.lz"

  .globl gMonIcon_Armaldo
gMonIcon_Armaldo: @ 0x08D2D848 [391]
  .incbin "build/graphics/pokemon/armaldo/icon.4bpp"
  .incbin "baserom.gba", 0xD2DC48, 0x250

  .globl gMonPalette_Ralts
gMonPalette_Ralts:
  .incbin "build/graphics/pokemon/ralts/normal_palette.gbapal.lz"

  .globl gMonBackPic_Ralts
gMonBackPic_Ralts:
  .incbin "build/graphics/pokemon/ralts/back.4bpp.lz"

  .globl gMonShinyPalette_Ralts
gMonShinyPalette_Ralts:
  .incbin "build/graphics/pokemon/ralts/shiny_palette.gbapal.lz"

  .globl gMonIcon_Ralts
gMonIcon_Ralts: @ 0x08D2E124 [392]
  .incbin "build/graphics/pokemon/ralts/icon.4bpp"
  .incbin "baserom.gba", 0xD2E524, 0x31C

  .globl gMonPalette_Kirlia
gMonPalette_Kirlia:
  .incbin "build/graphics/pokemon/kirlia/normal_palette.gbapal.lz"

  .globl gMonBackPic_Kirlia
gMonBackPic_Kirlia:
  .incbin "build/graphics/pokemon/kirlia/back.4bpp.lz"

  .globl gMonShinyPalette_Kirlia
gMonShinyPalette_Kirlia:
  .incbin "build/graphics/pokemon/kirlia/shiny_palette.gbapal.lz"

  .globl gMonIcon_Kirlia
gMonIcon_Kirlia: @ 0x08D2EC04 [393]
  .incbin "build/graphics/pokemon/kirlia/icon.4bpp"
  .incbin "baserom.gba", 0xD2F004, 0x39C

  .globl gMonPalette_Gardevoir
gMonPalette_Gardevoir:
  .incbin "build/graphics/pokemon/gardevoir/normal_palette.gbapal.lz"

  .globl gMonBackPic_Gardevoir
gMonBackPic_Gardevoir:
  .incbin "build/graphics/pokemon/gardevoir/back.4bpp.lz"

  .globl gMonShinyPalette_Gardevoir
gMonShinyPalette_Gardevoir:
  .incbin "build/graphics/pokemon/gardevoir/shiny_palette.gbapal.lz"

  .globl gMonIcon_Gardevoir
gMonIcon_Gardevoir: @ 0x08D2F724 [394]
  .incbin "build/graphics/pokemon/gardevoir/icon.4bpp"
  .incbin "baserom.gba", 0xD2FB24, 0x298

  .globl gMonPalette_Bagon
gMonPalette_Bagon:
  .incbin "build/graphics/pokemon/bagon/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xd2fde3, 0x1

  .globl gMonBackPic_Bagon
gMonBackPic_Bagon:
  .incbin "build/graphics/pokemon/bagon/back.4bpp.lz"

  .globl gMonShinyPalette_Bagon
gMonShinyPalette_Bagon:
  .incbin "build/graphics/pokemon/bagon/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xD300F3, 0x1
	.globl gMonIcon_Bagon
gMonIcon_Bagon: @ 0x08D300F4 [395]
  .incbin "build/graphics/pokemon/bagon/icon.4bpp"
  .incbin "baserom.gba", 0xD304F4, 0x324

  .globl gMonPalette_Shelgon
gMonPalette_Shelgon:
  .incbin "build/graphics/pokemon/shelgon/normal_palette.gbapal.lz"

  .globl gMonBackPic_Shelgon
gMonBackPic_Shelgon:
  .incbin "build/graphics/pokemon/shelgon/back.4bpp.lz"

  .globl gMonShinyPalette_Shelgon
gMonShinyPalette_Shelgon:
  .incbin "build/graphics/pokemon/shelgon/shiny_palette.gbapal.lz"

  .globl gMonIcon_Shelgon
gMonIcon_Shelgon: @ 0x08D30B50 [396]
  .incbin "build/graphics/pokemon/shelgon/icon.4bpp"
  .incbin "baserom.gba", 0xD30F50, 0x484

  .globl gMonPalette_Salamence
gMonPalette_Salamence:
  .incbin "build/graphics/pokemon/salamence/normal_palette.gbapal.lz"

  .globl gMonBackPic_Salamence
gMonBackPic_Salamence:
  .incbin "build/graphics/pokemon/salamence/back.4bpp.lz"

  .globl gMonShinyPalette_Salamence
gMonShinyPalette_Salamence:
  .incbin "build/graphics/pokemon/salamence/shiny_palette.gbapal.lz"

  .globl gMonIcon_Salamence
gMonIcon_Salamence: @ 0x08D31708 [397]
  .incbin "build/graphics/pokemon/salamence/icon.4bpp"
  .incbin "baserom.gba", 0xD31B08, 0x290

  .globl gMonPalette_Beldum
gMonPalette_Beldum:
  .incbin "build/graphics/pokemon/beldum/normal_palette.gbapal.lz"

  .globl gMonBackPic_Beldum
gMonBackPic_Beldum:
  .incbin "build/graphics/pokemon/beldum/back.4bpp.lz"

  .globl gMonShinyPalette_Beldum
gMonShinyPalette_Beldum:
  .incbin "build/graphics/pokemon/beldum/shiny_palette.gbapal.lz"

  .globl gMonIcon_Beldum
gMonIcon_Beldum: @ 0x08D320D8 [398]
  .incbin "build/graphics/pokemon/beldum/icon.4bpp"
  .incbin "baserom.gba", 0xD324D8, 0x47C

  .globl gMonPalette_Metang
gMonPalette_Metang:
  .incbin "build/graphics/pokemon/metang/normal_palette.gbapal.lz"

  .globl gMonBackPic_Metang
gMonBackPic_Metang:
  .incbin "build/graphics/pokemon/metang/back.4bpp.lz"

  .globl gMonShinyPalette_Metang
gMonShinyPalette_Metang:
  .incbin "build/graphics/pokemon/metang/shiny_palette.gbapal.lz"

  .globl gMonIcon_Metang
gMonIcon_Metang: @ 0x08D32CC8 [399]
  .incbin "build/graphics/pokemon/metang/icon.4bpp"
  .incbin "baserom.gba", 0xD330C8, 0x484

  .globl gMonPalette_Metagross
gMonPalette_Metagross:
  .incbin "build/graphics/pokemon/metagross/normal_palette.gbapal.lz"

  .globl gMonBackPic_Metagross
gMonBackPic_Metagross:
  .incbin "build/graphics/pokemon/metagross/back.4bpp.lz"

  .globl gMonShinyPalette_Metagross
gMonShinyPalette_Metagross:
  .incbin "build/graphics/pokemon/metagross/shiny_palette.gbapal.lz"

  .globl gMonIcon_Metagross
gMonIcon_Metagross: @ 0x08D33868 [400]
  .incbin "build/graphics/pokemon/metagross/icon.4bpp"
  .incbin "baserom.gba", 0xD33C68, 0x4DC

  .globl gMonPalette_Regirock
gMonPalette_Regirock:
  .incbin "build/graphics/pokemon/regirock/normal_palette.gbapal.lz"

  .globl gMonBackPic_Regirock
gMonBackPic_Regirock:
  .incbin "build/graphics/pokemon/regirock/back.4bpp.lz"

  .globl gMonShinyPalette_Regirock
gMonShinyPalette_Regirock:
  .incbin "build/graphics/pokemon/regirock/shiny_palette.gbapal.lz"

  .globl gMonIcon_Regirock
gMonIcon_Regirock: @ 0x08D345E0 [401]
  .incbin "build/graphics/pokemon/regirock/icon.4bpp"
  .incbin "baserom.gba", 0xD349E0, 0x468

  .globl gMonPalette_Regice
gMonPalette_Regice:
  .incbin "build/graphics/pokemon/regice/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xd34e6e, 0x2

  .globl gMonBackPic_Regice
gMonBackPic_Regice:
  .incbin "build/graphics/pokemon/regice/back.4bpp.lz"

  .globl gMonShinyPalette_Regice
gMonShinyPalette_Regice:
  .incbin "build/graphics/pokemon/regice/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xd35186, 0x2

	.globl gMonIcon_Regice
gMonIcon_Regice: @ 0x08D35188 [402]
  .incbin "build/graphics/pokemon/regice/icon.4bpp"
  .incbin "baserom.gba", 0xD35588, 0x4A8

  .globl gMonPalette_Registeel
gMonPalette_Registeel:
  .incbin "build/graphics/pokemon/registeel/normal_palette.gbapal.lz"

  .globl gMonBackPic_Registeel
gMonBackPic_Registeel:
  .incbin "build/graphics/pokemon/registeel/back.4bpp.lz"

  .globl gMonShinyPalette_Registeel
gMonShinyPalette_Registeel:
  .incbin "build/graphics/pokemon/registeel/shiny_palette.gbapal.lz"

  .globl gMonIcon_Registeel
gMonIcon_Registeel: @ 0x08D35DB8 [403]
  .incbin "build/graphics/pokemon/registeel/icon.4bpp"
  .incbin "baserom.gba", 0xD361B8, 0x490

  .globl gMonPalette_Kyogre
gMonPalette_Kyogre:
  .incbin "build/graphics/pokemon/kyogre/normal_palette.gbapal.lz"

  .globl gMonBackPic_Kyogre
gMonBackPic_Kyogre:
  .incbin "build/graphics/pokemon/kyogre/back.4bpp.lz"

  .globl gMonShinyPalette_Kyogre
gMonShinyPalette_Kyogre:
  .incbin "build/graphics/pokemon/kyogre/shiny_palette.gbapal.lz"

  .globl gMonIcon_Kyogre
gMonIcon_Kyogre: @ 0x08D36910 [404]
  .incbin "build/graphics/pokemon/kyogre/icon.4bpp"
  .incbin "baserom.gba", 0xD36D10, 0x5B4

  .globl gMonPalette_Groudon
gMonPalette_Groudon:
  .incbin "build/graphics/pokemon/groudon/normal_palette.gbapal.lz"

  .globl gMonBackPic_Groudon
gMonBackPic_Groudon:
  .incbin "build/graphics/pokemon/groudon/back.4bpp.lz"

  .globl gMonShinyPalette_Groudon
gMonShinyPalette_Groudon:
  .incbin "build/graphics/pokemon/groudon/shiny_palette.gbapal.lz"

  .globl gMonIcon_Groudon
gMonIcon_Groudon: @ 0x08D3777C [405]
  .incbin "build/graphics/pokemon/groudon/icon.4bpp"
  .incbin "baserom.gba", 0xD37B7C, 0x80C

  .globl gMonPalette_Rayquaza
gMonPalette_Rayquaza:
  .incbin "build/graphics/pokemon/rayquaza/normal_palette.gbapal.lz"

  .globl gMonBackPic_Rayquaza
gMonBackPic_Rayquaza:
  .incbin "build/graphics/pokemon/rayquaza/back.4bpp.lz"

  .globl gMonShinyPalette_Rayquaza
gMonShinyPalette_Rayquaza:
  .incbin "build/graphics/pokemon/rayquaza/shiny_palette.gbapal.lz"

  .globl gMonIcon_Rayquaza
gMonIcon_Rayquaza: @ 0x08D38710 [406]
  .incbin "build/graphics/pokemon/rayquaza/icon.4bpp"
  .incbin "baserom.gba", 0xD38B10, 0x444

  .globl gMonPalette_Latias
gMonPalette_Latias:
  .incbin "build/graphics/pokemon/latias/normal_palette.gbapal.lz"

  .globl gMonBackPic_Latias
gMonBackPic_Latias:
  .incbin "build/graphics/pokemon/latias/back.4bpp.lz"

  .globl gMonShinyPalette_Latias
gMonShinyPalette_Latias:
  .incbin "build/graphics/pokemon/latias/shiny_palette.gbapal.lz"

  .globl gMonIcon_Latias
gMonIcon_Latias: @ 0x08D392A0 [407]
  .incbin "build/graphics/pokemon/latias/icon.4bpp"
  .incbin "baserom.gba", 0xD396A0, 0x474

  .globl gMonPalette_Latios
gMonPalette_Latios:
  .incbin "build/graphics/pokemon/latios/normal_palette.gbapal.lz"

  .globl gMonBackPic_Latios
gMonBackPic_Latios:
  .incbin "build/graphics/pokemon/latios/back.4bpp.lz"

  .globl gMonShinyPalette_Latios
gMonShinyPalette_Latios:
  .incbin "build/graphics/pokemon/latios/shiny_palette.gbapal.lz"

  .globl gMonIcon_Latios
gMonIcon_Latios: @ 0x08D39EC4 [408]
  .incbin "build/graphics/pokemon/latios/icon.4bpp"
  .incbin "baserom.gba", 0xD3A2C4, 0x32C

  .globl gMonPalette_Jirachi
gMonPalette_Jirachi:
  .incbin "build/graphics/pokemon/jirachi/normal_palette.gbapal.lz"

  .globl gMonBackPic_Jirachi
gMonBackPic_Jirachi:
  .incbin "build/graphics/pokemon/jirachi/back.4bpp.lz"

  .globl gMonShinyPalette_Jirachi
gMonShinyPalette_Jirachi:
  .incbin "build/graphics/pokemon/jirachi/shiny_palette.gbapal.lz"

  .globl gMonIcon_Jirachi
gMonIcon_Jirachi: @ 0x08D3A9E0 [409]
  .incbin "build/graphics/pokemon/jirachi/icon.4bpp"
  .incbin "baserom.gba", 0xD3ADE0, 0x3FC

  .globl gMonPalette_DeoxysNormal
gMonPalette_DeoxysNormal:
  .incbin "build/graphics/pokemon/deoxys_normal/normal_palette.gbapal.lz"

  .globl gMonBackPic_DeoxysNormal
gMonBackPic_DeoxysNormal:
  .incbin "build/graphics/pokemon/deoxys_normal/back.4bpp.lz"

  .globl gMonShinyPalette_DeoxysNormal
gMonShinyPalette_DeoxysNormal:
  .incbin "build/graphics/pokemon/deoxys_normal/shiny_palette.gbapal.lz"

  .globl gMonIcon_DeoxysNormal
gMonIcon_DeoxysNormal: @ 0x08D3B89C [410]
  .incbin "build/graphics/pokemon/deoxys_normal/icon.4bpp"
  .incbin "baserom.gba", 0xD3BC9C, 0x826C

  .globl gMonPalette_Chimecho
gMonPalette_Chimecho:
  .incbin "build/graphics/pokemon/chimecho/normal_palette.gbapal.lz"

  .globl gMonBackPic_Chimecho
gMonBackPic_Chimecho:
  .incbin "build/graphics/pokemon/chimecho/back.4bpp.lz"

  .globl gMonShinyPalette_Chimecho
gMonShinyPalette_Chimecho:
  .incbin "build/graphics/pokemon/chimecho/shiny_palette.gbapal.lz"

  .globl gMonIcon_Chimecho
gMonIcon_Chimecho: @ 0x08D441CC [411]
  .incbin "build/graphics/pokemon/chimecho/icon.4bpp"
  .incbin "baserom.gba", 0xD445CC, 0x20

  .globl gMonBackPic_Egg
gMonBackPic_Egg:
  .incbin "build/graphics/pokemon/egg/back.4bpp.lz"

  .globl gMonPalette_Egg
  .globl gMonShinyPalette_Egg
gMonPalette_Egg:
gMonShinyPalette_Egg:
  .incbin "build/graphics/pokemon/egg/shiny_palette.gbapal.lz"
 
  .incbin "baserom.gba", 0xd447bd, 0x1db

  .globl gMonBackPic_UnownB
gMonBackPic_UnownB:
  .incbin "build/graphics/pokemon/unown_b/back.4bpp.lz"

  .globl gMonIcon_UnownB
gMonIcon_UnownB: @ 0x08D44B9C [413]
  .incbin "build/graphics/pokemon/unown_b/icon.4bpp"
  .incbin "baserom.gba", 0xD44F9C, 0x214

  .globl gMonBackPic_UnownC
gMonBackPic_UnownC:
  .incbin "build/graphics/pokemon/unown_c/back.4bpp.lz"

  .globl gMonIcon_UnownC
gMonIcon_UnownC: @ 0x08D4545C [414]
  .incbin "build/graphics/pokemon/unown_c/icon.4bpp"
  .incbin "baserom.gba", 0xD4585C, 0x1F8

  .globl gMonBackPic_UnownD
gMonBackPic_UnownD:
  .incbin "build/graphics/pokemon/unown_d/back.4bpp.lz"

  .globl gMonIcon_UnownD
gMonIcon_UnownD: @ 0x08D45CAC [415]
  .incbin "build/graphics/pokemon/unown_d/icon.4bpp"
  .incbin "baserom.gba", 0xD460AC, 0x1B8

  .globl gMonBackPic_UnownE
gMonBackPic_UnownE:
  .incbin "build/graphics/pokemon/unown_e/back.4bpp.lz"

  .globl gMonIcon_UnownE
gMonIcon_UnownE: @ 0x08D46464 [416]
  .incbin "build/graphics/pokemon/unown_e/icon.4bpp"
  .incbin "baserom.gba", 0xD46864, 0x1F4

  .globl gMonBackPic_UnownF
gMonBackPic_UnownF:
  .incbin "build/graphics/pokemon/unown_f/back.4bpp.lz"

  .globl gMonIcon_UnownF
gMonIcon_UnownF: @ 0x08D46C74 [417]
  .incbin "build/graphics/pokemon/unown_f/icon.4bpp"
  .incbin "baserom.gba", 0xD47074, 0x1DC

  .globl gMonBackPic_UnownG
gMonBackPic_UnownG:
  .incbin "build/graphics/pokemon/unown_g/back.4bpp.lz"

  .globl gMonIcon_UnownG
gMonIcon_UnownG: @ 0x08D4749C [418]
  .incbin "build/graphics/pokemon/unown_g/icon.4bpp"
  .incbin "baserom.gba", 0xD4789C, 0x244

  .globl gMonBackPic_UnownH
gMonBackPic_UnownH:
  .incbin "build/graphics/pokemon/unown_h/back.4bpp.lz"

  .globl gMonIcon_UnownH
gMonIcon_UnownH: @ 0x08D47DA4 [419]
  .incbin "build/graphics/pokemon/unown_h/icon.4bpp"
  .incbin "baserom.gba", 0xD481A4, 0x198

  .globl gMonBackPic_UnownI
gMonBackPic_UnownI:
  .incbin "build/graphics/pokemon/unown_i/back.4bpp.lz"

  .globl gMonIcon_UnownI
gMonIcon_UnownI: @ 0x08D484E4 [420]
  .incbin "build/graphics/pokemon/unown_i/icon.4bpp"
  .incbin "baserom.gba", 0xD488E4, 0x1C4

  .globl gMonBackPic_UnownJ
gMonBackPic_UnownJ:
  .incbin "build/graphics/pokemon/unown_j/back.4bpp.lz"

  .globl gMonIcon_UnownJ
gMonIcon_UnownJ: @ 0x08D48C90 [421]
  .incbin "build/graphics/pokemon/unown_j/icon.4bpp"
  .incbin "baserom.gba", 0xD49090, 0x1D0

  .globl gMonBackPic_UnownK
gMonBackPic_UnownK:
  .incbin "build/graphics/pokemon/unown_k/back.4bpp.lz"

  .globl gMonIcon_UnownK
gMonIcon_UnownK: @ 0x08D49458 [422]
  .incbin "build/graphics/pokemon/unown_k/icon.4bpp"
  .incbin "baserom.gba", 0xD49858, 0x1B0

  .globl gMonBackPic_UnownL
gMonBackPic_UnownL:
  .incbin "build/graphics/pokemon/unown_l/back.4bpp.lz"

  .globl gMonIcon_UnownL
gMonIcon_UnownL: @ 0x08D49BDC [423]
  .incbin "build/graphics/pokemon/unown_l/icon.4bpp"
  .incbin "baserom.gba", 0xD49FDC, 0x224

  .globl gMonBackPic_UnownM
gMonBackPic_UnownM:
  .incbin "build/graphics/pokemon/unown_m/back.4bpp.lz"

  .globl gMonIcon_UnownM
gMonIcon_UnownM: @ 0x08D4A4A8 [424]
  .incbin "build/graphics/pokemon/unown_m/icon.4bpp"
  .incbin "baserom.gba", 0xD4A8A8, 0x1F8

  .globl gMonBackPic_UnownN
gMonBackPic_UnownN:
  .incbin "build/graphics/pokemon/unown_n/back.4bpp.lz"

  .globl gMonIcon_UnownN
gMonIcon_UnownN: @ 0x08D4AD0C [425]
  .incbin "build/graphics/pokemon/unown_n/icon.4bpp"
  .incbin "baserom.gba", 0xD4B10C, 0x238

  .globl gMonBackPic_UnownO
gMonBackPic_UnownO:
  .incbin "build/graphics/pokemon/unown_o/back.4bpp.lz"

  .globl gMonIcon_UnownO
gMonIcon_UnownO: @ 0x08D4B604 [426]
  .incbin "build/graphics/pokemon/unown_o/icon.4bpp"
  .incbin "baserom.gba", 0xD4BA04, 0x1A0

  .globl gMonBackPic_UnownP
gMonBackPic_UnownP:
  .incbin "build/graphics/pokemon/unown_p/back.4bpp.lz"

  .globl gMonIcon_UnownP
gMonIcon_UnownP: @ 0x08D4BD68 [427]
  .incbin "build/graphics/pokemon/unown_p/icon.4bpp"
  .incbin "baserom.gba", 0xD4C168, 0x1B4

  .globl gMonBackPic_UnownQ
gMonBackPic_UnownQ:
  .incbin "build/graphics/pokemon/unown_q/back.4bpp.lz"

  .globl gMonIcon_UnownQ
gMonIcon_UnownQ: @ 0x08D4C4E8 [428]
  .incbin "build/graphics/pokemon/unown_q/icon.4bpp"
  .incbin "baserom.gba", 0xD4C8E8, 0x1A4

  .globl gMonBackPic_UnownR
gMonBackPic_UnownR:
  .incbin "build/graphics/pokemon/unown_r/back.4bpp.lz"

  .globl gMonIcon_UnownR
gMonIcon_UnownR: @ 0x08D4CC54 [429]
  .incbin "build/graphics/pokemon/unown_r/icon.4bpp"
  .incbin "baserom.gba", 0xD4D054, 0x1E8

  .globl gMonBackPic_UnownS
gMonBackPic_UnownS:
  .incbin "build/graphics/pokemon/unown_s/back.4bpp.lz"

  .globl gMonIcon_UnownS
gMonIcon_UnownS: @ 0x08D4D490 [430]
  .incbin "build/graphics/pokemon/unown_s/icon.4bpp"
  .incbin "baserom.gba", 0xD4D890, 0x1B0

  .globl gMonBackPic_UnownT
gMonBackPic_UnownT:
  .incbin "build/graphics/pokemon/unown_t/back.4bpp.lz"

  .globl gMonIcon_UnownT
gMonIcon_UnownT: @ 0x08D4DBF4 [431]
  .incbin "build/graphics/pokemon/unown_t/icon.4bpp"
  .incbin "baserom.gba", 0xD4DFF4, 0x218

  .globl gMonBackPic_UnownU
gMonBackPic_UnownU:
  .incbin "build/graphics/pokemon/unown_u/back.4bpp.lz"

  .globl gMonIcon_UnownU
gMonIcon_UnownU: @ 0x08D4E460 [432]
  .incbin "build/graphics/pokemon/unown_u/icon.4bpp"
  .incbin "baserom.gba", 0xD4E860, 0x1E4

  .globl gMonBackPic_UnownV
gMonBackPic_UnownV:
  .incbin "build/graphics/pokemon/unown_v/back.4bpp.lz"

  .globl gMonIcon_UnownV
gMonIcon_UnownV: @ 0x08D4EC74 [433]
  .incbin "build/graphics/pokemon/unown_v/icon.4bpp"
  .incbin "baserom.gba", 0xD4F074, 0x1D4

  .globl gMonBackPic_UnownW
gMonBackPic_UnownW:
  .incbin "build/graphics/pokemon/unown_w/back.4bpp.lz"

  .globl gMonIcon_UnownW
gMonIcon_UnownW: @ 0x08D4F44C [434]
  .incbin "build/graphics/pokemon/unown_w/icon.4bpp"
  .incbin "baserom.gba", 0xD4F84C, 0x1C4

  .globl gMonBackPic_UnownX
gMonBackPic_UnownX:
  .incbin "build/graphics/pokemon/unown_x/back.4bpp.lz"

  .globl gMonIcon_UnownX
gMonIcon_UnownX: @ 0x08D4FC00 [435]
  .incbin "build/graphics/pokemon/unown_x/icon.4bpp"
  .incbin "baserom.gba", 0xD50000, 0x1D8

  .globl gMonBackPic_UnownY
gMonBackPic_UnownY:
  .incbin "build/graphics/pokemon/unown_y/back.4bpp.lz"

  .globl gMonIcon_UnownY
gMonIcon_UnownY: @ 0x08D503CC [436]
  .incbin "build/graphics/pokemon/unown_y/icon.4bpp"
  .incbin "baserom.gba", 0xD507CC, 0x1B0

  .globl gMonBackPic_UnownZ
gMonBackPic_UnownZ:
  .incbin "build/graphics/pokemon/unown_z/back.4bpp.lz"

  .globl gMonIcon_UnownZ
gMonIcon_UnownZ: @ 0x08D50B58 [437]
  .incbin "build/graphics/pokemon/unown_z/icon.4bpp"
  .incbin "baserom.gba", 0xD50F58, 0x190

  .globl gMonBackPic_UnownEmark
gMonBackPic_UnownEmark:
  .incbin "build/graphics/pokemon/unown_emark/back.4bpp.lz"

  .globl gMonIcon_UnownEmark
gMonIcon_UnownEmark: @ 0x08D512B0 [438]
  .incbin "build/graphics/pokemon/unown_emark/icon.4bpp"
  .incbin "baserom.gba", 0xD516B0, 0x1BC

  .globl gMonBackPic_UnownQmark
gMonBackPic_UnownQmark:
  .incbin "build/graphics/pokemon/unown_qmark/back.4bpp.lz"

	.globl gMonIcon_UnownQmark
gMonIcon_UnownQmark: @ 0x08D51A6C [439]
	.incbin "build/graphics/pokemon/unown_qmark/icon.4bpp"
	.incbin "baserom.gba", 0xD51E6C, 0x24E80

	.incbin "baserom.gba", 0xD76CEC, 0x888

	.globl gMonIcon_OldUnownB
gMonIcon_OldUnownB: @ 0x08D77574 [252]
	.globl gMonIcon_OldUnownC
gMonIcon_OldUnownC: @ 0x08D77574 [253]
	.globl gMonIcon_OldUnownD
gMonIcon_OldUnownD: @ 0x08D77574 [254]
	.globl gMonIcon_OldUnownE
gMonIcon_OldUnownE: @ 0x08D77574 [255]
	.globl gMonIcon_OldUnownF
gMonIcon_OldUnownF: @ 0x08D77574 [256]
	.globl gMonIcon_OldUnownG
gMonIcon_OldUnownG: @ 0x08D77574 [257]
	.globl gMonIcon_OldUnownH
gMonIcon_OldUnownH: @ 0x08D77574 [258]
	.globl gMonIcon_OldUnownI
gMonIcon_OldUnownI: @ 0x08D77574 [259]
	.globl gMonIcon_OldUnownJ
gMonIcon_OldUnownJ: @ 0x08D77574 [260]
	.globl gMonIcon_OldUnownK
gMonIcon_OldUnownK: @ 0x08D77574 [261]
	.globl gMonIcon_OldUnownL
gMonIcon_OldUnownL: @ 0x08D77574 [262]
	.globl gMonIcon_OldUnownM
gMonIcon_OldUnownM: @ 0x08D77574 [263]
	.globl gMonIcon_OldUnownN
gMonIcon_OldUnownN: @ 0x08D77574 [264]
	.globl gMonIcon_OldUnownO
gMonIcon_OldUnownO: @ 0x08D77574 [265]
	.globl gMonIcon_OldUnownP
gMonIcon_OldUnownP: @ 0x08D77574 [266]
	.globl gMonIcon_OldUnownQ
gMonIcon_OldUnownQ: @ 0x08D77574 [267]
	.globl gMonIcon_OldUnownR
gMonIcon_OldUnownR: @ 0x08D77574 [268]
	.globl gMonIcon_OldUnownS
gMonIcon_OldUnownS: @ 0x08D77574 [269]
	.globl gMonIcon_OldUnownT
gMonIcon_OldUnownT: @ 0x08D77574 [270]
	.globl gMonIcon_OldUnownU
gMonIcon_OldUnownU: @ 0x08D77574 [271]
	.globl gMonIcon_OldUnownV
gMonIcon_OldUnownV: @ 0x08D77574 [272]
	.globl gMonIcon_OldUnownW
gMonIcon_OldUnownW: @ 0x08D77574 [273]
	.globl gMonIcon_OldUnownX
gMonIcon_OldUnownX: @ 0x08D77574 [274]
	.globl gMonIcon_OldUnownY
gMonIcon_OldUnownY: @ 0x08D77574 [275]
	.globl gMonIcon_OldUnownZ
gMonIcon_OldUnownZ: @ 0x08D77574 [276]
	.incbin "build/graphics/pokemon/old_unown_b/icon.4bpp"
	.incbin "baserom.gba", 0xD77974, 0x20

	.globl gUnknown_8D77994
gUnknown_8D77994: @ 0x08D77994
	.incbin "baserom.gba", 0xd77994, 0xe8
	.globl gUnknown_8D77A7C
gUnknown_8D77A7C: @ 0x08D77A7C
	.incbin "baserom.gba", 0xd77a7c, 0x10c
	.globl gUnknown_8D77B88
gUnknown_8D77B88: @ 0x08D77B88
	.incbin "baserom.gba", 0xd77b88, 0x28
	.globl gUnknown_8D77BB0
gUnknown_8D77BB0: @ 0x08D77BB0
	.incbin "baserom.gba", 0xd77bb0, 0x25fc
	.globl gUnknown_8D7A1AC
gUnknown_8D7A1AC: @ 0x08D7A1AC
	.incbin "baserom.gba", 0xd7a1ac, 0x618
	.globl gUnknown_8D7A7C4
gUnknown_8D7A7C4: @ 0x08D7A7C4
	.incbin "baserom.gba", 0xd7a7c4, 0x13f4
	.globl gUnknown_8D7BBB8
gUnknown_8D7BBB8: @ 0x08D7BBB8
	.incbin "baserom.gba", 0xd7bbb8, 0x640
	.globl gUnknown_8D7C1F8
gUnknown_8D7C1F8: @ 0x08D7C1F8
	.incbin "baserom.gba", 0xd7c1f8, 0x2ec
	.globl gUnknown_8D7C4E4
gUnknown_8D7C4E4: @ 0x08D7C4E4
	.incbin "baserom.gba", 0xd7c4e4, 0x5ac
	.globl gUnknown_8D7CA90
gUnknown_8D7CA90: @ 0x08D7CA90
	.incbin "baserom.gba", 0xd7ca90, 0x3c
	.globl gUnknown_8D7CACC
gUnknown_8D7CACC: @ 0x08D7CACC
	.incbin "baserom.gba", 0xd7cacc, 0x2b0
	.globl gUnknown_8D7CD7C
gUnknown_8D7CD7C: @ 0x08D7CD7C
	.incbin "baserom.gba", 0xd7cd7c, 0x608
	.globl gUnknown_8D7D384
gUnknown_8D7D384: @ 0x08D7D384
	.incbin "baserom.gba", 0xd7d384, 0x2b0
	.globl gUnknown_8D7D634
gUnknown_8D7D634: @ 0x08D7D634
	.incbin "baserom.gba", 0xd7d634, 0x674
	.globl gUnknown_8D7DCA8
gUnknown_8D7DCA8: @ 0x08D7DCA8
	.incbin "baserom.gba", 0xd7dca8, 0x2f0
	.globl gUnknown_8D7DF98
gUnknown_8D7DF98: @ 0x08D7DF98
	.incbin "baserom.gba", 0xd7df98, 0x3c
	.globl gUnknown_8D7DFD4
gUnknown_8D7DFD4: @ 0x08D7DFD4
	.incbin "baserom.gba", 0xd7dfd4, 0x58
	.globl gUnknown_8D7E02C
gUnknown_8D7E02C: @ 0x08D7E02C
	.incbin "baserom.gba", 0xd7e02c, 0x3c
	.globl gUnknown_8D7E068
gUnknown_8D7E068: @ 0x08D7E068
	.incbin "baserom.gba", 0xd7e068, 0x3c
	.globl gUnknown_8D7E0A4
gUnknown_8D7E0A4: @ 0x08D7E0A4
	.incbin "baserom.gba", 0xd7e0a4, 0x60
	.globl gUnknown_8D7E104
gUnknown_8D7E104: @ 0x08D7E104
	.incbin "baserom.gba", 0xd7e104, 0x6c
	.globl gUnknown_8D7E170
gUnknown_8D7E170: @ 0x08D7E170
	.incbin "baserom.gba", 0xd7e170, 0x50
	.globl gUnknown_8D7E1C0
gUnknown_8D7E1C0: @ 0x08D7E1C0
	.incbin "baserom.gba", 0xd7e1c0, 0x48
	.globl gUnknown_8D7E208
gUnknown_8D7E208: @ 0x08D7E208
	.incbin "baserom.gba", 0xd7e208, 0x44
	.globl gUnknown_8D7E24C
gUnknown_8D7E24C: @ 0x08D7E24C
	.incbin "baserom.gba", 0xd7e24c, 0x50
	.globl gUnknown_8D7E29C
gUnknown_8D7E29C: @ 0x08D7E29C
	.incbin "baserom.gba", 0xd7e29c, 0x3c
	.globl gUnknown_8D7E2D8
gUnknown_8D7E2D8: @ 0x08D7E2D8
	.incbin "baserom.gba", 0xd7e2d8, 0x17c4
	.globl gUnknown_8D7FA9C
gUnknown_8D7FA9C: @ 0x08D7FA9C
	.incbin "baserom.gba", 0xd7fa9c, 0x4cc
	.globl gUnknown_8D7FF68
gUnknown_8D7FF68: @ 0x08D7FF68
	.incbin "baserom.gba", 0xd7ff68, 0x174c
	.globl gUnknown_8D816B4
gUnknown_8D816B4: @ 0x08D816B4
	.incbin "baserom.gba", 0xd816b4, 0x81c
	.globl gUnknown_8D81ED0
gUnknown_8D81ED0: @ 0x08D81ED0
	.incbin "baserom.gba", 0xd81ed0, 0x2a8
	.globl gUnknown_8D82178
gUnknown_8D82178: @ 0x08D82178
	.incbin "baserom.gba", 0xd82178, 0x410
	.globl gUnknown_8D82588
gUnknown_8D82588: @ 0x08D82588
	.incbin "baserom.gba", 0xd82588, 0x124
	.globl gUnknown_8D826AC
gUnknown_8D826AC: @ 0x08D826AC
	.incbin "baserom.gba", 0xd826ac, 0x668
	.globl gUnknown_8D82D14
gUnknown_8D82D14: @ 0x08D82D14
	.incbin "baserom.gba", 0xd82d14, 0x2a0
	.globl gUnknown_8D82FB4
gUnknown_8D82FB4: @ 0x08D82FB4
	.incbin "baserom.gba", 0xd82fb4, 0x5ec
	.globl gUnknown_8D835A0
gUnknown_8D835A0: @ 0x08D835A0
	.incbin "baserom.gba", 0xd835a0, 0x404
	.globl gUnknown_8D839A4
gUnknown_8D839A4: @ 0x08D839A4
	.incbin "baserom.gba", 0xd839a4, 0x22c
	.globl gUnknown_8D83BD0
gUnknown_8D83BD0: @ 0x08D83BD0
	.incbin "baserom.gba", 0xd83bd0, 0x110
	.globl gUnknown_8D83CE0
gUnknown_8D83CE0: @ 0x08D83CE0
	.incbin "baserom.gba", 0xd83ce0, 0x114
	.globl gUnknown_8D83DF4
gUnknown_8D83DF4: @ 0x08D83DF4
	.incbin "baserom.gba", 0xd83df4, 0xc14
	.globl gUnknown_8D84A08
gUnknown_8D84A08: @ 0x08D84A08
	.incbin "baserom.gba", 0xd84a08, 0x590
	.globl gUnknown_8D84F98
gUnknown_8D84F98: @ 0x08D84F98
	.incbin "baserom.gba", 0xd84f98, 0x3a4
	.globl gUnknown_8D8533C
gUnknown_8D8533C: @ 0x08D8533C
	.incbin "baserom.gba", 0xd8533c, 0xec
	.globl gUnknown_8D85428
gUnknown_8D85428: @ 0x08D85428
	.incbin "baserom.gba", 0xd85428, 0x84
	.globl gUnknown_8D854AC
gUnknown_8D854AC: @ 0x08D854AC
	.incbin "baserom.gba", 0xd854ac, 0x120
	.globl gUnknown_8D855CC
gUnknown_8D855CC: @ 0x08D855CC
	.incbin "baserom.gba", 0xd855cc, 0x18
	.globl gUnknown_8D855E4
gUnknown_8D855E4: @ 0x08D855E4
	.incbin "baserom.gba", 0xd855e4, 0x20
	.globl gUnknown_8D85604
gUnknown_8D85604: @ 0x08D85604
	.incbin "baserom.gba", 0xd85604, 0x2
	.globl gUnknown_8D85606
gUnknown_8D85606: @ 0x08D85606
	.incbin "baserom.gba", 0xd85606, 0xa6
	.globl gUnknown_8D856AC
gUnknown_8D856AC: @ 0x08D856AC
	.incbin "baserom.gba", 0xd856ac, 0xe0
	.globl gUnknown_8D8578C
gUnknown_8D8578C: @ 0x08D8578C
	.incbin "baserom.gba", 0xd8578c, 0x274
	.globl gUnknown_8D85A00
gUnknown_8D85A00: @ 0x08D85A00
	.incbin "baserom.gba", 0xd85a00, 0x234
	.globl gUnknown_8D85C34
gUnknown_8D85C34: @ 0x08D85C34
	.incbin "baserom.gba", 0xd85c34, 0x20
	.globl gUnknown_8D85C54
gUnknown_8D85C54: @ 0x08D85C54
	.incbin "baserom.gba", 0xd85c54, 0x20
	.globl gUnknown_8D85C74
gUnknown_8D85C74: @ 0x08D85C74
	.incbin "baserom.gba", 0xd85c74, 0x40
	.globl gUnknown_8D85CB4
gUnknown_8D85CB4: @ 0x08D85CB4
	.incbin "baserom.gba", 0xd85cb4, 0x182
	.globl gUnknown_8D85E36
gUnknown_8D85E36: @ 0x08D85E36
	.incbin "baserom.gba", 0xd85e36, 0xa
	.globl gUnknown_8D85E40
gUnknown_8D85E40: @ 0x08D85E40
	.incbin "baserom.gba", 0xd85e40, 0x16
	.globl gUnknown_8D85E56
gUnknown_8D85E56: @ 0x08D85E56
	.incbin "baserom.gba", 0xd85e56, 0xa
	.globl gUnknown_8D85E60
gUnknown_8D85E60: @ 0x08D85E60
	.incbin "baserom.gba", 0xd85e60, 0x2618
	.globl gUnknown_8D88478
gUnknown_8D88478: @ 0x08D88478
	.incbin "baserom.gba", 0xd88478, 0x8ac
	.globl gUnknown_8D88D24
gUnknown_8D88D24: @ 0x08D88D24
	.incbin "baserom.gba", 0xd88d24, 0x4e4
	.globl gUnknown_8D89208
gUnknown_8D89208: @ 0x08D89208
	.incbin "baserom.gba", 0xd89208, 0x898
	.globl gUnknown_8D89AA0
gUnknown_8D89AA0: @ 0x08D89AA0
	.incbin "baserom.gba", 0xd89aa0, 0x4c0
	.globl gUnknown_8D89F60
gUnknown_8D89F60: @ 0x08D89F60
	.incbin "baserom.gba", 0xd89f60, 0x89c
	.globl gUnknown_8D8A7FC
gUnknown_8D8A7FC: @ 0x08D8A7FC
	.incbin "baserom.gba", 0xd8a7fc, 0x11c
	.globl gUnknown_8D8A918
gUnknown_8D8A918: @ 0x08D8A918
	.incbin "baserom.gba", 0xd8a918, 0x120
	.globl gUnknown_8D8AA38
gUnknown_8D8AA38: @ 0x08D8AA38
	.incbin "baserom.gba", 0xd8aa38, 0x72c
	.globl gUnknown_8D8B164
gUnknown_8D8B164: @ 0x08D8B164
	.incbin "baserom.gba", 0xd8b164, 0x2c0
	.globl gUnknown_8D8B424
gUnknown_8D8B424: @ 0x08D8B424
	.incbin "baserom.gba", 0xd8b424, 0x2a8
	.globl gUnknown_8D8B6CC
gUnknown_8D8B6CC: @ 0x08D8B6CC
	.incbin "baserom.gba", 0xd8b6cc, 0x38c
	.globl gUnknown_8D8BA58
gUnknown_8D8BA58: @ 0x08D8BA58
	.incbin "baserom.gba", 0xd8ba58, 0x6f8
	.globl gUnknown_8D8C150
gUnknown_8D8C150: @ 0x08D8C150
	.incbin "baserom.gba", 0xd8c150, 0x6cc
	.globl gUnknown_8D8C81C
gUnknown_8D8C81C: @ 0x08D8C81C
	.incbin "baserom.gba", 0xd8c81c, 0x490
	.globl gUnknown_8D8CCAC
gUnknown_8D8CCAC: @ 0x08D8CCAC
	.incbin "baserom.gba", 0xd8ccac, 0x748
	.globl gUnknown_8D8D3F4
gUnknown_8D8D3F4: @ 0x08D8D3F4
	.incbin "baserom.gba", 0xd8d3f4, 0x17c
	.globl gUnknown_8D8D570
gUnknown_8D8D570: @ 0x08D8D570
	.incbin "baserom.gba", 0xd8d570, 0x52c
	.globl gUnknown_8D8DA9C
gUnknown_8D8DA9C: @ 0x08D8DA9C
	.incbin "baserom.gba", 0xd8da9c, 0xee0
	.globl gUnknown_8D8E97C
gUnknown_8D8E97C: @ 0x08D8E97C
	.incbin "baserom.gba", 0xd8e97c, 0x80
	.globl gUnknown_8D8E9FC
gUnknown_8D8E9FC: @ 0x08D8E9FC
	.incbin "baserom.gba", 0xd8e9fc, 0x1dc
	.globl gUnknown_8D8EBD8
gUnknown_8D8EBD8: @ 0x08D8EBD8
	.incbin "baserom.gba", 0xd8ebd8, 0xf78
	.globl gUnknown_8D8FB50
gUnknown_8D8FB50: @ 0x08D8FB50
	.incbin "baserom.gba", 0xD8FB50, 0xD8

	.globl gMonIcon_Egg
gMonIcon_Egg: @ 0x08D8FC28 [412]
	.incbin "build/graphics/pokemon/egg/icon.4bpp"
	.incbin "baserom.gba", 0xD90028, 0x1524

	@ src/data/easy_chat/easy_chat_group_voices.h:346 easy_chat_group_voices_line_346
	.globl gUnknown_8D9154C
gUnknown_8D9154C: @ 0x08D9154C
	.incbin "baserom.gba", 0xd9154c, 0x820
	.globl gUnknown_8D91D6C
gUnknown_8D91D6C: @ 0x08D91D6C
	.incbin "baserom.gba", 0xd91d6c, 0xa34
	.globl gUnknown_8D927A0
gUnknown_8D927A0: @ 0x08D927A0
	.incbin "baserom.gba", 0xd927a0, 0xaf4
	.globl gUnknown_8D93294
gUnknown_8D93294: @ 0x08D93294
	.incbin "baserom.gba", 0xd93294, 0x2b8
	.globl gUnknown_8D9354C
gUnknown_8D9354C: @ 0x08D9354C
	.incbin "baserom.gba", 0xd9354c, 0x1e4
	.globl gUnknown_8D93730
gUnknown_8D93730: @ 0x08D93730
	.incbin "baserom.gba", 0xd93730, 0x1e4
	.globl gUnknown_8D93914
gUnknown_8D93914: @ 0x08D93914
	.incbin "baserom.gba", 0xd93914, 0x1158
	.globl gUnknown_8D94A6C
gUnknown_8D94A6C: @ 0x08D94A6C
	.incbin "baserom.gba", 0xd94a6c, 0x1320
	.globl gUnknown_8D95D8C
gUnknown_8D95D8C: @ 0x08D95D8C
	.incbin "baserom.gba", 0xd95d8c, 0x28
	.globl gUnknown_8D95DB4
gUnknown_8D95DB4: @ 0x08D95DB4
	.incbin "baserom.gba", 0xd95db4, 0x2d0
	.globl gUnknown_8D96084
gUnknown_8D96084: @ 0x08D96084
	.incbin "baserom.gba", 0xd96084, 0x2d4
	.globl gUnknown_8D96358
gUnknown_8D96358: @ 0x08D96358
	.incbin "baserom.gba", 0xd96358, 0x448
	.globl gUnknown_8D967A0
gUnknown_8D967A0: @ 0x08D967A0
	.incbin "baserom.gba", 0xd967a0, 0x2c8
	.globl gUnknown_8D96A68
gUnknown_8D96A68: @ 0x08D96A68
	.incbin "baserom.gba", 0xd96a68, 0xec
	.globl gUnknown_8D96B54
gUnknown_8D96B54: @ 0x08D96B54
	.incbin "baserom.gba", 0xd96b54, 0x1100
	.globl gUnknown_8D97C54
gUnknown_8D97C54: @ 0x08D97C54
	.incbin "baserom.gba", 0xd97c54, 0x17c
	.globl gUnknown_8D97DD0
gUnknown_8D97DD0: @ 0x08D97DD0
	.incbin "baserom.gba", 0xd97dd0, 0x9cc
	.globl gUnknown_8D9879C
gUnknown_8D9879C: @ 0x08D9879C
	.incbin "baserom.gba", 0xd9879c, 0xf0
	.globl gUnknown_8D9888C
gUnknown_8D9888C: @ 0x08D9888C
	.incbin "baserom.gba", 0xd9888c, 0x1b8
	.globl gUnknown_8D98A44
gUnknown_8D98A44: @ 0x08D98A44
	.incbin "baserom.gba", 0xd98a44, 0x164
	.globl gUnknown_8D98BA8
gUnknown_8D98BA8: @ 0x08D98BA8
	.incbin "baserom.gba", 0xd98ba8, 0x16c
	.globl gUnknown_8D98D14
gUnknown_8D98D14: @ 0x08D98D14
	.incbin "baserom.gba", 0xd98d14, 0x178
	.globl gUnknown_8D98E8C
gUnknown_8D98E8C: @ 0x08D98E8C
	.incbin "baserom.gba", 0xd98e8c, 0x18a8
	.globl gUnknown_8D9A734
gUnknown_8D9A734: @ 0x08D9A734
	.incbin "baserom.gba", 0xd9a734, 0x4c
	.globl gUnknown_8D9A780
gUnknown_8D9A780: @ 0x08D9A780
	.incbin "baserom.gba", 0xd9a780, 0x4c
	.globl gUnknown_8D9A7CC
gUnknown_8D9A7CC: @ 0x08D9A7CC
	.incbin "baserom.gba", 0xd9a7cc, 0x2b8
	.globl gUnknown_8D9AA84
gUnknown_8D9AA84: @ 0x08D9AA84
	.incbin "baserom.gba", 0xd9aa84, 0x544
	.globl gUnknown_8D9AFC8
gUnknown_8D9AFC8: @ 0x08D9AFC8
	.incbin "baserom.gba", 0xd9afc8, 0x34
	.globl gUnknown_8D9AFFC
gUnknown_8D9AFFC: @ 0x08D9AFFC
	.incbin "baserom.gba", 0xd9affc, 0x140
	.globl gUnknown_8D9B13C
gUnknown_8D9B13C: @ 0x08D9B13C
	.incbin "baserom.gba", 0xd9b13c, 0x78
	.globl gUnknown_8D9B1B4
gUnknown_8D9B1B4: @ 0x08D9B1B4
	.incbin "baserom.gba", 0xd9b1b4, 0x10c
	.globl gUnknown_8D9B2C0
gUnknown_8D9B2C0: @ 0x08D9B2C0
	.incbin "baserom.gba", 0xd9b2c0, 0x28
	.globl gUnknown_8D9B2E8
gUnknown_8D9B2E8: @ 0x08D9B2E8
	.incbin "baserom.gba", 0xd9b2e8, 0x1cc
	.globl gUnknown_8D9B4B4
gUnknown_8D9B4B4: @ 0x08D9B4B4
	.incbin "baserom.gba", 0xd9b4b4, 0x208
	.globl gUnknown_8D9B6BC
gUnknown_8D9B6BC: @ 0x08D9B6BC
	.incbin "baserom.gba", 0xd9b6bc, 0x358
	.globl gUnknown_8D9BA14
gUnknown_8D9BA14: @ 0x08D9BA14
	.incbin "baserom.gba", 0xd9ba14, 0x148

	.globl gThrownPokeblock_Gfx
gThrownPokeblock_Gfx: @ 0x08D9BB5C
	.incbin "build/graphics/pokeblock_feed/pokeblock.4bpp.lz"

	.globl gPokeblockPalette_Red
gPokeblockPalette_Red: @ 0x08D9BB78
	.incbin "build/graphics/pokeblock_feed/palettes/red.gbapal.lz"
	.globl gPokeblockPalette_Blue
gPokeblockPalette_Blue: @ 0x08D9BB8C
	.incbin "build/graphics/pokeblock_feed/palettes/blue.gbapal.lz"
	.globl gPokeblockPalette_Pink
gPokeblockPalette_Pink: @ 0x08D9BBA0
	.incbin "build/graphics/pokeblock_feed/palettes/pink.gbapal.lz"
	.globl gPokeblockPalette_Green
gPokeblockPalette_Green: @ 0x08D9BBB4
	.incbin "build/graphics/pokeblock_feed/palettes/green.gbapal.lz"
	.globl gPokeblockPalette_Yellow
gPokeblockPalette_Yellow: @ 0x08D9BBC8
	.incbin "build/graphics/pokeblock_feed/palettes/yellow.gbapal.lz"
	.globl gPokeblockPalette_Purple
gPokeblockPalette_Purple: @ 0x08D9BBDC
	.incbin "build/graphics/pokeblock_feed/palettes/purple.gbapal.lz"
	.globl gPokeblockPalette_Indigo
gPokeblockPalette_Indigo: @ 0x08D9BBF0
	.incbin "build/graphics/pokeblock_feed/palettes/indigo.gbapal.lz"
	.globl gPokeblockPalette_Brown
gPokeblockPalette_Brown: @ 0x08D9BC04
	.incbin "build/graphics/pokeblock_feed/palettes/brown.gbapal.lz"
	.globl gPokeblockPalette_LiteBlue
gPokeblockPalette_LiteBlue: @ 0x08D9BC18
	.incbin "build/graphics/pokeblock_feed/palettes/lite_blue.gbapal.lz"
	.globl gPokeblockPalette_Olive
gPokeblockPalette_Olive: @ 0x08D9BC2C
	.incbin "build/graphics/pokeblock_feed/palettes/olive.gbapal.lz"
	.globl gPokeblockPalette_Gray
gPokeblockPalette_Gray: @ 0x08D9BC40
	.incbin "build/graphics/pokeblock_feed/palettes/gray.gbapal.lz"
	.globl gPokeblockPalette_Black
gPokeblockPalette_Black: @ 0x08D9BC54
	.incbin "build/graphics/pokeblock_feed/palettes/black.gbapal.lz"
	.globl gPokeblockPalette_White
gPokeblockPalette_White: @ 0x08D9BC68
	.incbin "build/graphics/pokeblock_feed/palettes/white.gbapal.lz"
	.globl gPokeblockPalette_Gold
gPokeblockPalette_Gold: @ 0x08D9BC7C
	.incbin "build/graphics/pokeblock_feed/palettes/gold.gbapal.lz"
	.if (. - gPokeblockPalette_Red) != 14 * 0x14
	.error "Pokeblock palettes must contain fourteen 0x14-byte LZ77 streams"
	.endif

	.globl gUnknown_8D9BC90
gUnknown_8D9BC90: @ 0x08D9BC90
	.incbin "baserom.gba", 0xd9bc90, 0x100
	.globl gUnknown_8D9BD90
gUnknown_8D9BD90: @ 0x08D9BD90
	.incbin "baserom.gba", 0xd9bd90, 0x41c
	.globl gUnknown_8D9C1AC
gUnknown_8D9C1AC: @ 0x08D9C1AC
	.incbin "baserom.gba", 0xd9c1ac, 0xa8
	.globl gUnknown_8D9C254
gUnknown_8D9C254: @ 0x08D9C254
	.incbin "baserom.gba", 0xd9c254, 0x190
	.globl gUnknown_8D9C3E4
gUnknown_8D9C3E4: @ 0x08D9C3E4
	.incbin "baserom.gba", 0xd9c3e4, 0x7284
	.globl gUnknown_8DA3668
gUnknown_8DA3668: @ 0x08DA3668
	.incbin "baserom.gba", 0xda3668, 0x428
	.globl gUnknown_8DA3A90
gUnknown_8DA3A90: @ 0x08DA3A90
	.incbin "baserom.gba", 0xda3a90, 0x3c
	.globl gUnknown_8DA3ACC
gUnknown_8DA3ACC: @ 0x08DA3ACC
	.incbin "baserom.gba", 0xda3acc, 0x164
	.globl gUnknown_8DA3C30
gUnknown_8DA3C30: @ 0x08DA3C30
	.incbin "baserom.gba", 0xda3c30, 0x100
	.globl gUnknown_8DA3D30
gUnknown_8DA3D30: @ 0x08DA3D30
	.incbin "baserom.gba", 0xda3d30, 0x20c
	.globl gUnknown_8DA3F3C
gUnknown_8DA3F3C: @ 0x08DA3F3C
	.incbin "baserom.gba", 0xda3f3c, 0x1114
	.globl gUnknown_8DA5050
gUnknown_8DA5050: @ 0x08DA5050
	.incbin "baserom.gba", 0xda5050, 0x44
	.globl gUnknown_8DA5094
gUnknown_8DA5094: @ 0x08DA5094
	.incbin "baserom.gba", 0xda5094, 0x184
	.globl gUnknown_8DA5218
gUnknown_8DA5218: @ 0x08DA5218
	.incbin "baserom.gba", 0xda5218, 0x1148
	.globl gUnknown_8DA6360
gUnknown_8DA6360: @ 0x08DA6360
	.incbin "baserom.gba", 0xda6360, 0x904
	.globl gUnknown_8DA6C64
gUnknown_8DA6C64: @ 0x08DA6C64
	.incbin "baserom.gba", 0xda6c64, 0xb6c
	.globl gUnknown_8DA77D0
gUnknown_8DA77D0: @ 0x08DA77D0
	.incbin "baserom.gba", 0xda77d0, 0x21c
	.globl gUnknown_8DA79EC
gUnknown_8DA79EC: @ 0x08DA79EC
	.incbin "baserom.gba", 0xda79ec, 0x40
	.globl gUnknown_8DA7A2C
gUnknown_8DA7A2C: @ 0x08DA7A2C
	.incbin "baserom.gba", 0xda7a2c, 0x328
	.globl gUnknown_8DA7D54
gUnknown_8DA7D54: @ 0x08DA7D54
	.incbin "baserom.gba", 0xda7d54, 0x184
	.globl gUnknown_8DA7ED8
gUnknown_8DA7ED8: @ 0x08DA7ED8
	.incbin "baserom.gba", 0xda7ed8, 0x13c
	.globl gUnknown_8DA8014
gUnknown_8DA8014: @ 0x08DA8014
	.incbin "baserom.gba", 0xda8014, 0x140
	.globl gUnknown_8DA8154
gUnknown_8DA8154: @ 0x08DA8154
	.incbin "baserom.gba", 0xda8154, 0x108
	.globl gUnknown_8DA825C
gUnknown_8DA825C: @ 0x08DA825C
	.incbin "baserom.gba", 0xda825c, 0x108
	.globl gUnknown_8DA8364
gUnknown_8DA8364: @ 0x08DA8364
	.incbin "baserom.gba", 0xda8364, 0xa84
	.globl gUnknown_8DA8DE8
gUnknown_8DA8DE8: @ 0x08DA8DE8
	.incbin "baserom.gba", 0xda8de8, 0x22c
	.globl gUnknown_8DA9014
gUnknown_8DA9014: @ 0x08DA9014
	.incbin "baserom.gba", 0xda9014, 0x118
	.globl gUnknown_8DA912C
gUnknown_8DA912C: @ 0x08DA912C
	.incbin "baserom.gba", 0xda912c, 0x1a30
	.globl gUnknown_8DAAB5C
gUnknown_8DAAB5C: @ 0x08DAAB5C
	.incbin "baserom.gba", 0xdaab5c, 0x270
	.globl gUnknown_8DAADCC
gUnknown_8DAADCC: @ 0x08DAADCC
	.incbin "baserom.gba", 0xdaadcc, 0xf8
	.globl gUnknown_8DAAEC4
gUnknown_8DAAEC4: @ 0x08DAAEC4
	.incbin "baserom.gba", 0xdaaec4, 0x238
	.globl gUnknown_8DAB0FC
gUnknown_8DAB0FC: @ 0x08DAB0FC
	.incbin "baserom.gba", 0xdab0fc, 0x144
	.globl gUnknown_8DAB240
gUnknown_8DAB240: @ 0x08DAB240
	.incbin "baserom.gba", 0xdab240, 0x54
	.globl gUnknown_8DAB294
gUnknown_8DAB294: @ 0x08DAB294
	.incbin "baserom.gba", 0xdab294, 0xf52c
	.globl gUnknown_8DBA7C0
gUnknown_8DBA7C0: @ 0x08DBA7C0
	.incbin "baserom.gba", 0xdba7c0, 0xa0
	.globl gUnknown_8DBA860
gUnknown_8DBA860: @ 0x08DBA860
	.incbin "baserom.gba", 0xdba860, 0x1d30
	.globl gUnknown_8DBC590
gUnknown_8DBC590: @ 0x08DBC590
	.incbin "baserom.gba", 0xdbc590, 0x72c
	.globl gUnknown_8DBCCBC
gUnknown_8DBCCBC: @ 0x08DBCCBC
	.incbin "baserom.gba", 0xdbccbc, 0x243344
