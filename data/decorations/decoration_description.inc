	@ src/data/decoration/header.h:11 header_line_11 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gDecorationDescription_SmallDesk
gDecorationDescription_SmallDesk: @ 0x08580038
	.string "ひとり サイズの\nちいさな つくえ"
	.byte EOS
	.if (. - gDecorationDescription_SmallDesk) != 0x12
	.error "gDecorationDescription_SmallDesk must retain its original byte length"
	.endif
	.globl gDecorationDescription_SmallDesk_Suffix
	.set gDecorationDescription_SmallDesk_Suffix, gDecorationDescription_SmallDesk + 0xe

	@ src/data/decoration/header.h:39 header_line_39
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gDecorationDescription_PokemonDesk
gDecorationDescription_PokemonDesk: @ 0x0858004A
	.string "モンスターボールの\nかたちをした\nちいさな つくえ"
	.byte EOS
	.if (. - gDecorationDescription_PokemonDesk) != 0x1a
	.error "gDecorationDescription_PokemonDesk must retain its original byte length"
	.endif
	.globl gDecorationDescription_PokemonDesk_Suffix
	.set gDecorationDescription_PokemonDesk_Suffix, gDecorationDescription_PokemonDesk + 0x16

	@ src/data/decoration/header.h:53 header_line_53
	.globl gDecorationDescription_HeavyDesk
gDecorationDescription_HeavyDesk: @ 0x08580064
	.string "てつで つくられた\nおおきな つくえ\nうえに ものを おける"
	.byte EOS
	.if (. - gDecorationDescription_HeavyDesk) > 0x1f
	.error "gDecorationDescription_HeavyDesk may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_HeavyDesk) < 0x1f
	.space 0x1f - (. - gDecorationDescription_HeavyDesk)
	.endif

	@ src/data/decoration/header.h:67 header_line_67
	.globl gDecorationDescription_RaggedDesk
gDecorationDescription_RaggedDesk: @ 0x08580083
	.string "きで つくられた\nおおきな つくえ\nうえに ものを おける"
	.byte EOS
	.if (. - gDecorationDescription_RaggedDesk) > 0x1e
	.error "gDecorationDescription_RaggedDesk may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_RaggedDesk) < 0x1e
	.space 0x1e - (. - gDecorationDescription_RaggedDesk)
	.endif

	@ src/data/decoration/header.h:81 header_line_81
	.globl gDecorationDescription_ComfortDesk
gDecorationDescription_ComfortDesk: @ 0x085800A1
	.string "はっぱで つくられた\nおおきな つくえ\nうえに ものを おける"
	.byte EOS
	.if (. - gDecorationDescription_ComfortDesk) > 0x20
	.error "gDecorationDescription_ComfortDesk may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_ComfortDesk) < 0x20
	.space 0x20 - (. - gDecorationDescription_ComfortDesk)
	.endif

	@ src/data/decoration/header.h:95 header_line_95
	.globl gDecorationDescription_PrettyDesk
gDecorationDescription_PrettyDesk: @ 0x085800C1
	.string "ガラスで つくられた\nきょだいな つくえ\nたくさん ものを おける"
	.byte EOS
	.if (. - gDecorationDescription_PrettyDesk) > 0x22
	.error "gDecorationDescription_PrettyDesk may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_PrettyDesk) < 0x22
	.space 0x22 - (. - gDecorationDescription_PrettyDesk)
	.endif

	@ src/data/decoration/header.h:109 header_line_109
	.globl gDecorationDescription_BrickDesk
gDecorationDescription_BrickDesk: @ 0x085800E3
	.string "レンガで つくられた\nきょだいな つくえ\nたくさん ものを おける"
	.byte EOS
	.if (. - gDecorationDescription_BrickDesk) > 0x22
	.error "gDecorationDescription_BrickDesk may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_BrickDesk) < 0x22
	.space 0x22 - (. - gDecorationDescription_BrickDesk)
	.endif

	@ src/data/decoration/header.h:123 header_line_123
	.globl gDecorationDescription_CampDesk
gDecorationDescription_CampDesk: @ 0x08580105
	.string "まるたで つくられた\nきょだいな つくえ\nたくさん ものを おける"
	.byte EOS
	.if (. - gDecorationDescription_CampDesk) > 0x22
	.error "gDecorationDescription_CampDesk may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_CampDesk) < 0x22
	.space 0x22 - (. - gDecorationDescription_CampDesk)
	.endif

	@ src/data/decoration/header.h:137 header_line_137
	.globl gDecorationDescription_HardDesk
gDecorationDescription_HardDesk: @ 0x08580127
	.string "いしで つくられた\nきょだいな つくえ\nたくさん ものを おける"
	.byte EOS
	.if (. - gDecorationDescription_HardDesk) > 0x21
	.error "gDecorationDescription_HardDesk may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_HardDesk) < 0x21
	.space 0x21 - (. - gDecorationDescription_HardDesk)
	.endif

	@ src/data/decoration/header.h:151 header_line_151
	.globl gDecorationDescription_SmallChair
gDecorationDescription_SmallChair: @ 0x08580148
	.string "ひとりで すわる\nちいさな イス"
	.byte EOS
	.if (. - gDecorationDescription_SmallChair) > 0x11
	.error "gDecorationDescription_SmallChair may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_SmallChair) < 0x11
	.space 0x11 - (. - gDecorationDescription_SmallChair)
	.endif

	@ src/data/decoration/header.h:165 header_line_165
	.globl gDecorationDescription_PokemonChair
gDecorationDescription_PokemonChair: @ 0x08580159
	.string "モンスターボールの\nかたちをした\nちいさな イス"
	.byte EOS
	.if (. - gDecorationDescription_PokemonChair) > 0x19
	.error "gDecorationDescription_PokemonChair may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_PokemonChair) < 0x19
	.space 0x19 - (. - gDecorationDescription_PokemonChair)
	.endif

	@ src/data/decoration/header.h:179 header_line_179
	.globl gDecorationDescription_HeavyChair
gDecorationDescription_HeavyChair: @ 0x08580172
	.string "てつで つくられた\nちいさな イス"
	.byte EOS
	.if (. - gDecorationDescription_HeavyChair) > 0x12
	.error "gDecorationDescription_HeavyChair may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_HeavyChair) < 0x12
	.space 0x12 - (. - gDecorationDescription_HeavyChair)
	.endif

	@ src/data/decoration/header.h:193 header_line_193
	.globl gDecorationDescription_PrettyChair
gDecorationDescription_PrettyChair: @ 0x08580184
	.string "ガラスで つくられた\nちいさな イス"
	.byte EOS
	.if (. - gDecorationDescription_PrettyChair) > 0x13
	.error "gDecorationDescription_PrettyChair may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_PrettyChair) < 0x13
	.space 0x13 - (. - gDecorationDescription_PrettyChair)
	.endif

	@ src/data/decoration/header.h:207 header_line_207
	.globl gDecorationDescription_ComfortChair
gDecorationDescription_ComfortChair: @ 0x08580197
	.string "はっぱで つくられた\nちいさな イス"
	.byte EOS
	.if (. - gDecorationDescription_ComfortChair) > 0x13
	.error "gDecorationDescription_ComfortChair may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_ComfortChair) < 0x13
	.space 0x13 - (. - gDecorationDescription_ComfortChair)
	.endif

	@ src/data/decoration/header.h:221 header_line_221
	.globl gDecorationDescription_RaggedChair
gDecorationDescription_RaggedChair: @ 0x085801AA
	.string "きで つくられた\nちいさな イス"
	.byte EOS
	.if (. - gDecorationDescription_RaggedChair) > 0x11
	.error "gDecorationDescription_RaggedChair may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_RaggedChair) < 0x11
	.space 0x11 - (. - gDecorationDescription_RaggedChair)
	.endif

	@ src/data/decoration/header.h:235 header_line_235
	.globl gDecorationDescription_BrickChair
gDecorationDescription_BrickChair: @ 0x085801BB
	.string "レンガで つくられた\nちいさな イス"
	.byte EOS
	.if (. - gDecorationDescription_BrickChair) > 0x13
	.error "gDecorationDescription_BrickChair may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_BrickChair) < 0x13
	.space 0x13 - (. - gDecorationDescription_BrickChair)
	.endif

	@ src/data/decoration/header.h:249 header_line_249
	.globl gDecorationDescription_CampChair
gDecorationDescription_CampChair: @ 0x085801CE
	.string "まるたで つくられた\nちいさな イス"
	.byte EOS
	.if (. - gDecorationDescription_CampChair) > 0x13
	.error "gDecorationDescription_CampChair may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_CampChair) < 0x13
	.space 0x13 - (. - gDecorationDescription_CampChair)
	.endif

	@ src/data/decoration/header.h:263 header_line_263
	.globl gDecorationDescription_HardChair
gDecorationDescription_HardChair: @ 0x085801E1
	.string "いしで つくられた\nちいさな イス"
	.byte EOS
	.if (. - gDecorationDescription_HardChair) > 0x12
	.error "gDecorationDescription_HardChair may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_HardChair) < 0x12
	.space 0x12 - (. - gDecorationDescription_HardChair)
	.endif

	@ src/data/decoration/header.h:277 header_line_277
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gDecorationDescription_RedPlant
gDecorationDescription_RedPlant: @ 0x085801F3
	.string "まっかな はなが\nうえられた うえき"
	.byte EOS
	.if (. - gDecorationDescription_RedPlant) != 0x13
	.error "gDecorationDescription_RedPlant must retain its original byte length"
	.endif
	.globl gDecorationDescription_RedPlant_Suffix
	.set gDecorationDescription_RedPlant_Suffix, gDecorationDescription_RedPlant + 0xf

	@ src/data/decoration/header.h:291 header_line_291
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gDecorationDescription_TropicalPlant
gDecorationDescription_TropicalPlant: @ 0x08580206
	.string "なんごくの はなが\nうえられた うえき"
	.byte EOS
	.if (. - gDecorationDescription_TropicalPlant) != 0x14
	.error "gDecorationDescription_TropicalPlant must retain its original byte length"
	.endif
	.globl gDecorationDescription_TropicalPlant_Suffix
	.set gDecorationDescription_TropicalPlant_Suffix, gDecorationDescription_TropicalPlant + 0x10

	@ src/data/decoration/header.h:305 header_line_305
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gDecorationDescription_PrettyFlowers
gDecorationDescription_PrettyFlowers: @ 0x0858021A
	.string "かわいい はなが\nうえられた うえき"
	.byte EOS
	.if (. - gDecorationDescription_PrettyFlowers) != 0x13
	.error "gDecorationDescription_PrettyFlowers must retain its original byte length"
	.endif
	.globl gDecorationDescription_PrettyFlowers_Suffix
	.set gDecorationDescription_PrettyFlowers_Suffix, gDecorationDescription_PrettyFlowers + 0xf

	@ src/data/decoration/header.h:319 header_line_319
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gDecorationDescription_ColorfulPlant
gDecorationDescription_ColorfulPlant: @ 0x0858022D
	.string "いろいろな はなが\nうえられた\nおおきな うえき"
	.byte EOS
	.if (. - gDecorationDescription_ColorfulPlant) != 0x19
	.error "gDecorationDescription_ColorfulPlant must retain its original byte length"
	.endif
	.globl gDecorationDescription_ColorfulPlant_Suffix
	.set gDecorationDescription_ColorfulPlant_Suffix, gDecorationDescription_ColorfulPlant + 0x15

	@ src/data/decoration/header.h:333 header_line_333
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gDecorationDescription_BigPlant
gDecorationDescription_BigPlant: @ 0x08580246
	.string "カサのような きが\nうえられた\nおおきな うえき"
	.byte EOS
	.if (. - gDecorationDescription_BigPlant) != 0x19
	.error "gDecorationDescription_BigPlant must retain its original byte length"
	.endif
	.globl gDecorationDescription_BigPlant_Suffix
	.set gDecorationDescription_BigPlant_Suffix, gDecorationDescription_BigPlant + 0x15

	@ src/data/decoration/header.h:347 header_line_347
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gDecorationDescription_GorgeousPlant
gDecorationDescription_GorgeousPlant: @ 0x0858025F
	.string "りっぱな きが\nうえられた\nおおきな うえき"
	.byte EOS
	.if (. - gDecorationDescription_GorgeousPlant) != 0x17
	.error "gDecorationDescription_GorgeousPlant must retain its original byte length"
	.endif
	.globl gDecorationDescription_GorgeousPlant_Suffix
	.set gDecorationDescription_GorgeousPlant_Suffix, gDecorationDescription_GorgeousPlant + 0x13

	@ src/data/decoration/header.h:361 header_line_361
	.globl gDecorationDescription_RedBrick
gDecorationDescription_RedBrick: @ 0x08580276
	.string "あかいろの レンガ\nうえに ものを おける"
	.byte EOS
	.if (. - gDecorationDescription_RedBrick) > 0x16
	.error "gDecorationDescription_RedBrick may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_RedBrick) < 0x16
	.space 0x16 - (. - gDecorationDescription_RedBrick)
	.endif

	@ src/data/decoration/header.h:375 header_line_375
	.globl gDecorationDescription_YellowBrick
gDecorationDescription_YellowBrick: @ 0x0858028C
	.string "きいろの レンガ\nうえに ものを おける"
	.byte EOS
	.if (. - gDecorationDescription_YellowBrick) > 0x15
	.error "gDecorationDescription_YellowBrick may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_YellowBrick) < 0x15
	.space 0x15 - (. - gDecorationDescription_YellowBrick)
	.endif

	@ src/data/decoration/header.h:389 header_line_389
	.globl gDecorationDescription_BlueBrick
gDecorationDescription_BlueBrick: @ 0x085802A1
	.string "あおいろの レンガ\nうえに ものを おける"
	.byte EOS
	.if (. - gDecorationDescription_BlueBrick) > 0x16
	.error "gDecorationDescription_BlueBrick may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_BlueBrick) < 0x16
	.space 0x16 - (. - gDecorationDescription_BlueBrick)
	.endif

	@ src/data/decoration/header.h:403 header_line_403
	.globl gDecorationDescription_RedBalloon
gDecorationDescription_RedBalloon: @ 0x085802B7
	.string "みずの はいった\nあかい ふうせん\nふむと われる"
	.byte EOS
	.if (. - gDecorationDescription_RedBalloon) > 0x1a
	.error "gDecorationDescription_RedBalloon may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_RedBalloon) < 0x1a
	.space 0x1a - (. - gDecorationDescription_RedBalloon)
	.endif

	@ src/data/decoration/header.h:417 header_line_417
	.globl gDecorationDescription_BlueBalloon
gDecorationDescription_BlueBalloon: @ 0x085802D1
	.string "みずの はいった\nあおい ふうせん\nふむと われる"
	.byte EOS
	.if (. - gDecorationDescription_BlueBalloon) > 0x1a
	.error "gDecorationDescription_BlueBalloon may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_BlueBalloon) < 0x1a
	.space 0x1a - (. - gDecorationDescription_BlueBalloon)
	.endif

	@ src/data/decoration/header.h:431 header_line_431
	.globl gDecorationDescription_YellowBalloon
gDecorationDescription_YellowBalloon: @ 0x085802EB
	.string "みずの はいった\nきいろい ふうせん\nふむと われる"
	.byte EOS
	.if (. - gDecorationDescription_YellowBalloon) > 0x1b
	.error "gDecorationDescription_YellowBalloon may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_YellowBalloon) < 0x1b
	.space 0x1b - (. - gDecorationDescription_YellowBalloon)
	.endif

	@ src/data/decoration/header.h:445 header_line_445
	.globl gDecorationDescription_RedTent
gDecorationDescription_RedTent: @ 0x08580306
	.string "おおきな あかい テント\nなかに はいれる"
	.byte EOS
	.if (. - gDecorationDescription_RedTent) > 0x16
	.error "gDecorationDescription_RedTent may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_RedTent) < 0x16
	.space 0x16 - (. - gDecorationDescription_RedTent)
	.endif

	@ src/data/decoration/header.h:459 header_line_459
	.globl gDecorationDescription_BlueTent
gDecorationDescription_BlueTent: @ 0x0858031C
	.string "おおきな あおい テント\nなかに はいれる"
	.byte EOS
	.if (. - gDecorationDescription_BlueTent) > 0x16
	.error "gDecorationDescription_BlueTent may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_BlueTent) < 0x16
	.space 0x16 - (. - gDecorationDescription_BlueTent)
	.endif

	@ src/data/decoration/header.h:473 header_line_473
	.globl gDecorationDescription_SolidBoard
gDecorationDescription_SolidBoard: @ 0x08580332
	.string "あなの うえに おけば\nむこうへ わたれる"
	.byte EOS
	.if (. - gDecorationDescription_SolidBoard) > 0x16
	.error "gDecorationDescription_SolidBoard may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_SolidBoard) < 0x16
	.space 0x16 - (. - gDecorationDescription_SolidBoard)
	.endif

	@ src/data/decoration/header.h:487 header_line_487
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gDecorationDescription_Slide
gDecorationDescription_Slide: @ 0x08580348
	.string "だいの うえから\nすべって したへ\nいくことが できる"
	.byte EOS
	.if (. - gDecorationDescription_Slide) != 0x1c
	.error "gDecorationDescription_Slide must retain its original byte length"
	.endif
	.globl gDecorationDescription_Slide_Suffix
	.set gDecorationDescription_Slide_Suffix, gDecorationDescription_Slide + 0x18

	@ src/data/decoration/header.h:501 header_line_501 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gDecorationDescription_FenceLength
gDecorationDescription_FenceLength: @ 0x08580364
	.string "ちいさい さく\nとおることが できない"
	.byte EOS
	.if (. - gDecorationDescription_FenceLength) != 0x14
	.error "gDecorationDescription_FenceLength must retain its original byte length"
	.endif
	.globl gDecorationDescription_FenceLength_Suffix
	.set gDecorationDescription_FenceLength_Suffix, gDecorationDescription_FenceLength + 0xf

	@ src/data/decoration/header.h:501 header_line_501 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gDecorationDescription_FenceWidth
gDecorationDescription_FenceWidth: @ 0x08580378
	.string "ちいさい さく\nとおることが できない"
	.byte EOS
	.if (. - gDecorationDescription_FenceWidth) != 0x14
	.error "gDecorationDescription_FenceWidth must retain its original byte length"
	.endif
	.globl gDecorationDescription_FenceWidth_Suffix
	.set gDecorationDescription_FenceWidth_Suffix, gDecorationDescription_FenceWidth + 0xf

	@ src/data/decoration/header.h:529 header_line_529
	.globl gDecorationDescription_Tire
gDecorationDescription_Tire: @ 0x0858038C
	.string "ふるい おおきな タイヤ\nうえに ものを おける"
	.byte EOS
	.if (. - gDecorationDescription_Tire) > 0x19
	.error "gDecorationDescription_Tire may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_Tire) < 0x19
	.space 0x19 - (. - gDecorationDescription_Tire)
	.endif

	@ src/data/decoration/header.h:543 header_line_543
	.globl gDecorationDescription_Stand
gDecorationDescription_Stand: @ 0x085803A5
	.string "かいだんを のぼって\nだいに あがれる"
	.byte EOS
	.if (. - gDecorationDescription_Stand) > 0x14
	.error "gDecorationDescription_Stand may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_Stand) < 0x14
	.space 0x14 - (. - gDecorationDescription_Stand)
	.endif

	@ src/data/decoration/header.h:557 header_line_557
	.globl gDecorationDescription_MudBall
gDecorationDescription_MudBall: @ 0x085803B9
	.string "まるい どろだんご\nふむと こわれる"
	.byte EOS
	.if (. - gDecorationDescription_MudBall) > 0x13
	.error "gDecorationDescription_MudBall may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_MudBall) < 0x13
	.space 0x13 - (. - gDecorationDescription_MudBall)
	.endif

	@ src/data/decoration/header.h:571 header_line_571
	.globl gDecorationDescription_BreakableDoor
gDecorationDescription_BreakableDoor: @ 0x085803CC
	.string "とおりぬけ できる\nおかしな ドア"
	.byte EOS
	.if (. - gDecorationDescription_BreakableDoor) > 0x12
	.error "gDecorationDescription_BreakableDoor may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_BreakableDoor) < 0x12
	.space 0x12 - (. - gDecorationDescription_BreakableDoor)
	.endif

	@ src/data/decoration/header.h:585 header_line_585
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gDecorationDescription_SandOrnament
gDecorationDescription_SandOrnament: @ 0x085803DE
	.string "さわると くずれる\nすなの おきもの"
	.byte EOS
	.if (. - gDecorationDescription_SandOrnament) != 0x13
	.error "gDecorationDescription_SandOrnament must retain its original byte length"
	.endif
	.globl gDecorationDescription_SandOrnament_Suffix
	.set gDecorationDescription_SandOrnament_Suffix, gDecorationDescription_SandOrnament + 0xe

	@ src/data/decoration/header.h:599 header_line_599
	.globl gDecorationDescription_SilverShield
gDecorationDescription_SilverShield: @ 0x085803F1
	.string "バトルタワーで\n50にん かちぬいた\nきねんの たて"
	.byte EOS
	.if (. - gDecorationDescription_SilverShield) > 0x1b
	.error "gDecorationDescription_SilverShield may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_SilverShield) < 0x1b
	.space 0x1b - (. - gDecorationDescription_SilverShield)
	.endif

	@ src/data/decoration/header.h:613 header_line_613
	.globl gDecorationDescription_GoldShield
gDecorationDescription_GoldShield: @ 0x0858040C
	.string "バトルタワーで\n100にん かちぬいた\nきねんの たて"
	.byte EOS
	.if (. - gDecorationDescription_GoldShield) > 0x1c
	.error "gDecorationDescription_GoldShield may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_GoldShield) < 0x1c
	.space 0x1c - (. - gDecorationDescription_GoldShield)
	.endif

	@ src/data/decoration/header.h:627 header_line_627
	.globl gDecorationDescription_GlassOrnament
gDecorationDescription_GlassOrnament: @ 0x08580428
	.string "びじゅつかんに ある\nゆうめいな ちょうこくを\nガラスで かたどったもの"
	.byte EOS
	.if (. - gDecorationDescription_GlassOrnament) > 0x25
	.error "gDecorationDescription_GlassOrnament may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_GlassOrnament) < 0x25
	.space 0x25 - (. - gDecorationDescription_GlassOrnament)
	.endif

	@ src/data/decoration/header.h:641 header_line_641
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gDecorationDescription_TV
gDecorationDescription_TV: @ 0x0858044D
	.string "はいいろの ちいさな\nおもちゃの テレビ"
	.byte EOS
	.if (. - gDecorationDescription_TV) != 0x15
	.error "gDecorationDescription_TV must retain its original byte length"
	.endif
	.globl gDecorationDescription_TV_Suffix
	.set gDecorationDescription_TV_Suffix, gDecorationDescription_TV + 0x11

	@ src/data/decoration/header.h:655 header_line_655
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gDecorationDescription_RoundTV
gDecorationDescription_RoundTV: @ 0x08580462
	.string "タネボーの イメージで\nつくられた\nおもちゃの テレビ"
	.byte EOS
	.if (. - gDecorationDescription_RoundTV) != 0x1c
	.error "gDecorationDescription_RoundTV must retain its original byte length"
	.endif
	.globl gDecorationDescription_RoundTV_Suffix
	.set gDecorationDescription_RoundTV_Suffix, gDecorationDescription_RoundTV + 0x18

	@ src/data/decoration/header.h:669 header_line_669
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gDecorationDescription_CuteTV
gDecorationDescription_CuteTV: @ 0x0858047E
	.string "エネコの イメージで\nつくられた\nおもちゃの テレビ"
	.byte EOS
	.if (. - gDecorationDescription_CuteTV) != 0x1b
	.error "gDecorationDescription_CuteTV must retain its original byte length"
	.endif
	.globl gDecorationDescription_CuteTV_Suffix
	.set gDecorationDescription_CuteTV_Suffix, gDecorationDescription_CuteTV + 0x17

	@ src/data/decoration/header.h:683 header_line_683
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gDecorationDescription_GlitterMat
gDecorationDescription_GlitterMat: @ 0x08580499
	.string "ふむと きらきらする\nふしぎな マット"
	.byte EOS
	.if (. - gDecorationDescription_GlitterMat) != 0x14
	.error "gDecorationDescription_GlitterMat must retain its original byte length"
	.endif
	.globl gDecorationDescription_GlitterMat_Suffix
	.set gDecorationDescription_GlitterMat_Suffix, gDecorationDescription_GlitterMat + 0x10

	@ src/data/decoration/header.h:697 header_line_697
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gDecorationDescription_JumpMat
gDecorationDescription_JumpMat: @ 0x085804AD
	.string "ふむと ジャンプする\nいたずら マット"
	.byte EOS
	.if (. - gDecorationDescription_JumpMat) != 0x14
	.error "gDecorationDescription_JumpMat must retain its original byte length"
	.endif
	.globl gDecorationDescription_JumpMat_Suffix
	.set gDecorationDescription_JumpMat_Suffix, gDecorationDescription_JumpMat + 0x10

	@ src/data/decoration/header.h:711 header_line_711
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gDecorationDescription_SpinMat
gDecorationDescription_SpinMat: @ 0x085804C1
	.string "ふむと くるくる まわる\nいたずら マット"
	.byte EOS
	.if (. - gDecorationDescription_SpinMat) != 0x16
	.error "gDecorationDescription_SpinMat must retain its original byte length"
	.endif
	.globl gDecorationDescription_SpinMat_Suffix
	.set gDecorationDescription_SpinMat_Suffix, gDecorationDescription_SpinMat + 0x12

	@ src/data/decoration/header.h:725 header_line_725
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gDecorationDescription_CLowNoteMat
gDecorationDescription_CLowNoteMat: @ 0x085804D7
	.string "ふむと ドの\nおとがなる マット"
	.byte EOS
	.if (. - gDecorationDescription_CLowNoteMat) != 0x11
	.error "gDecorationDescription_CLowNoteMat must retain its original byte length"
	.endif
	.globl gDecorationDescription_CLowNoteMat_Suffix
	.set gDecorationDescription_CLowNoteMat_Suffix, gDecorationDescription_CLowNoteMat + 0xd

	@ src/data/decoration/header.h:739 header_line_739
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gDecorationDescription_DNoteMat
gDecorationDescription_DNoteMat: @ 0x085804E8
	.string "ふむと レの\nおとがなる マット"
	.byte EOS
	.if (. - gDecorationDescription_DNoteMat) != 0x11
	.error "gDecorationDescription_DNoteMat must retain its original byte length"
	.endif
	.globl gDecorationDescription_DNoteMat_Suffix
	.set gDecorationDescription_DNoteMat_Suffix, gDecorationDescription_DNoteMat + 0xd

	@ src/data/decoration/header.h:753 header_line_753
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gDecorationDescription_ENoteMat
gDecorationDescription_ENoteMat: @ 0x085804F9
	.string "ふむと ミの\nおとがなる マット"
	.byte EOS
	.if (. - gDecorationDescription_ENoteMat) != 0x11
	.error "gDecorationDescription_ENoteMat must retain its original byte length"
	.endif
	.globl gDecorationDescription_ENoteMat_Suffix
	.set gDecorationDescription_ENoteMat_Suffix, gDecorationDescription_ENoteMat + 0xd

	@ src/data/decoration/header.h:767 header_line_767
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gDecorationDescription_FNoteMat
gDecorationDescription_FNoteMat: @ 0x0858050A
	.string "ふむと ファの\nおとがなる マット"
	.byte EOS
	.if (. - gDecorationDescription_FNoteMat) != 0x12
	.error "gDecorationDescription_FNoteMat must retain its original byte length"
	.endif
	.globl gDecorationDescription_FNoteMat_Suffix
	.set gDecorationDescription_FNoteMat_Suffix, gDecorationDescription_FNoteMat + 0xe

	@ src/data/decoration/header.h:781 header_line_781
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gDecorationDescription_GNoteMat
gDecorationDescription_GNoteMat: @ 0x0858051C
	.string "ふむと ソの\nおとがなる マット"
	.byte EOS
	.if (. - gDecorationDescription_GNoteMat) != 0x11
	.error "gDecorationDescription_GNoteMat must retain its original byte length"
	.endif
	.globl gDecorationDescription_GNoteMat_Suffix
	.set gDecorationDescription_GNoteMat_Suffix, gDecorationDescription_GNoteMat + 0xd

	@ src/data/decoration/header.h:795 header_line_795
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gDecorationDescription_ANoteMat
gDecorationDescription_ANoteMat: @ 0x0858052D
	.string "ふむと ラの\nおとがなる マット"
	.byte EOS
	.if (. - gDecorationDescription_ANoteMat) != 0x11
	.error "gDecorationDescription_ANoteMat must retain its original byte length"
	.endif
	.globl gDecorationDescription_ANoteMat_Suffix
	.set gDecorationDescription_ANoteMat_Suffix, gDecorationDescription_ANoteMat + 0xd

	@ src/data/decoration/header.h:809 header_line_809
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gDecorationDescription_BNoteMat
gDecorationDescription_BNoteMat: @ 0x0858053E
	.string "ふむと シの\nおとがなる マット"
	.byte EOS
	.if (. - gDecorationDescription_BNoteMat) != 0x11
	.error "gDecorationDescription_BNoteMat must retain its original byte length"
	.endif
	.globl gDecorationDescription_BNoteMat_Suffix
	.set gDecorationDescription_BNoteMat_Suffix, gDecorationDescription_BNoteMat + 0xd

	@ src/data/decoration/header.h:823 header_line_823
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gDecorationDescription_CHighNoteMat
gDecorationDescription_CHighNoteMat: @ 0x0858054F
	.string "ふむと たかい ドの\nおとがなる マット"
	.byte EOS
	.if (. - gDecorationDescription_CHighNoteMat) != 0x15
	.error "gDecorationDescription_CHighNoteMat must retain its original byte length"
	.endif
	.globl gDecorationDescription_CHighNoteMat_Suffix
	.set gDecorationDescription_CHighNoteMat_Suffix, gDecorationDescription_CHighNoteMat + 0x11

	@ src/data/decoration/header.h:837 header_line_837
	.globl gDecorationDescription_SurfMat
gDecorationDescription_SurfMat: @ 0x08580564
	.string "なみのりの イメージで\nつくられた マット\nうえに ものを おける"
	.byte EOS
	.if (. - gDecorationDescription_SurfMat) > 0x22
	.error "gDecorationDescription_SurfMat may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_SurfMat) < 0x22
	.space 0x22 - (. - gDecorationDescription_SurfMat)
	.endif

	@ src/data/decoration/header.h:851 header_line_851
	.globl gDecorationDescription_ThunderMat
gDecorationDescription_ThunderMat: @ 0x08580586
	.string "かみなりの イメージで\nつくられた マット\nうえに ものを おける"
	.byte EOS
	.if (. - gDecorationDescription_ThunderMat) > 0x22
	.error "gDecorationDescription_ThunderMat may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_ThunderMat) < 0x22
	.space 0x22 - (. - gDecorationDescription_ThunderMat)
	.endif

	@ src/data/decoration/header.h:865 header_line_865
	.globl gDecorationDescription_FireBlastMat
gDecorationDescription_FireBlastMat: @ 0x085805A8
	.string "だいもんじの イメージで\nつくられた マット\nうえに ものを おける"
	.byte EOS
	.if (. - gDecorationDescription_FireBlastMat) > 0x23
	.error "gDecorationDescription_FireBlastMat may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_FireBlastMat) < 0x23
	.space 0x23 - (. - gDecorationDescription_FireBlastMat)
	.endif

	@ src/data/decoration/header.h:879 header_line_879
	.globl gDecorationDescription_PowderSnowMat
gDecorationDescription_PowderSnowMat: @ 0x085805CB
	.string "こなゆきの イメージで\nつくられた マット\nうえに ものを おける"
	.byte EOS
	.if (. - gDecorationDescription_PowderSnowMat) > 0x22
	.error "gDecorationDescription_PowderSnowMat may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_PowderSnowMat) < 0x22
	.space 0x22 - (. - gDecorationDescription_PowderSnowMat)
	.endif

	@ src/data/decoration/header.h:893 header_line_893
	.globl gDecorationDescription_AttractMat
gDecorationDescription_AttractMat: @ 0x085805ED
	.string "メロメロの イメージで\nつくられた マット\nうえに ものを おける"
	.byte EOS
	.if (. - gDecorationDescription_AttractMat) > 0x22
	.error "gDecorationDescription_AttractMat may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_AttractMat) < 0x22
	.space 0x22 - (. - gDecorationDescription_AttractMat)
	.endif

	@ src/data/decoration/header.h:907 header_line_907
	.globl gDecorationDescription_FissureMat
gDecorationDescription_FissureMat: @ 0x0858060F
	.string "じわれの イメージで\nつくられた マット\nうえに ものを おける"
	.byte EOS
	.if (. - gDecorationDescription_FissureMat) > 0x21
	.error "gDecorationDescription_FissureMat may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_FissureMat) < 0x21
	.space 0x21 - (. - gDecorationDescription_FissureMat)
	.endif

	@ src/data/decoration/header.h:921 header_line_921
	.globl gDecorationDescription_SpikesMat
gDecorationDescription_SpikesMat: @ 0x08580630
	.string "まきびしの イメージで\nつくられた マット\nうえに ものを おける"
	.byte EOS
	.if (. - gDecorationDescription_SpikesMat) > 0x22
	.error "gDecorationDescription_SpikesMat may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_SpikesMat) < 0x22
	.space 0x22 - (. - gDecorationDescription_SpikesMat)
	.endif

	@ src/data/decoration/header.h:935 header_line_935
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gDecorationDescription_BallPoster
gDecorationDescription_BallPoster: @ 0x08580652
	.string "モンスターボールが\nプリント されている\nちいさいポスター"
	.byte EOS
	.if (. - gDecorationDescription_BallPoster) != 0x1e
	.error "gDecorationDescription_BallPoster must retain its original byte length"
	.endif
	.globl gDecorationDescription_BallPoster_Suffix
	.set gDecorationDescription_BallPoster_Suffix, gDecorationDescription_BallPoster + 0x19

	@ src/data/decoration/header.h:949 header_line_949
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gDecorationDescription_GreenPoster
gDecorationDescription_GreenPoster: @ 0x08580670
	.string "キモリが\nプリント されている\nちいさいポスター"
	.byte EOS
	.if (. - gDecorationDescription_GreenPoster) != 0x19
	.error "gDecorationDescription_GreenPoster must retain its original byte length"
	.endif
	.globl gDecorationDescription_GreenPoster_Suffix
	.set gDecorationDescription_GreenPoster_Suffix, gDecorationDescription_GreenPoster + 0x14

	@ src/data/decoration/header.h:963 header_line_963
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gDecorationDescription_RedPoster
gDecorationDescription_RedPoster: @ 0x08580689
	.string "アチャモが\nプリント されている\nちいさいポスター"
	.byte EOS
	.if (. - gDecorationDescription_RedPoster) != 0x1a
	.error "gDecorationDescription_RedPoster must retain its original byte length"
	.endif
	.globl gDecorationDescription_RedPoster_Suffix
	.set gDecorationDescription_RedPoster_Suffix, gDecorationDescription_RedPoster + 0x15

	@ src/data/decoration/header.h:977 header_line_977
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gDecorationDescription_BluePoster
gDecorationDescription_BluePoster: @ 0x085806A3
	.string "ミズゴロウが\nプリント されている\nちいさいポスター"
	.byte EOS
	.if (. - gDecorationDescription_BluePoster) != 0x1b
	.error "gDecorationDescription_BluePoster must retain its original byte length"
	.endif
	.globl gDecorationDescription_BluePoster_Suffix
	.set gDecorationDescription_BluePoster_Suffix, gDecorationDescription_BluePoster + 0x16

	@ src/data/decoration/header.h:991 header_line_991
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gDecorationDescription_CutePoster
gDecorationDescription_CutePoster: @ 0x085806BE
	.string "ルリリが\nプリント されている\nちいさいポスター"
	.byte EOS
	.if (. - gDecorationDescription_CutePoster) != 0x19
	.error "gDecorationDescription_CutePoster must retain its original byte length"
	.endif
	.globl gDecorationDescription_CutePoster_Suffix
	.set gDecorationDescription_CutePoster_Suffix, gDecorationDescription_CutePoster + 0x14

	@ src/data/decoration/header.h:1005 header_line_1005
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gDecorationDescription_PikaPoster
gDecorationDescription_PikaPoster: @ 0x085806D7
	.string "ピカチュウと ピチューが\nプリント されている\nおおきなポスター"
	.byte EOS
	.if (. - gDecorationDescription_PikaPoster) != 0x21
	.error "gDecorationDescription_PikaPoster must retain its original byte length"
	.endif
	.globl gDecorationDescription_PikaPoster_Suffix
	.set gDecorationDescription_PikaPoster_Suffix, gDecorationDescription_PikaPoster + 0x1c

	@ src/data/decoration/header.h:1019 header_line_1019
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gDecorationDescription_LongPoster
gDecorationDescription_LongPoster: @ 0x085806F8
	.string "ハブネークが\nプリント されている\nおおきなポスター"
	.byte EOS
	.if (. - gDecorationDescription_LongPoster) != 0x1b
	.error "gDecorationDescription_LongPoster must retain its original byte length"
	.endif
	.globl gDecorationDescription_LongPoster_Suffix
	.set gDecorationDescription_LongPoster_Suffix, gDecorationDescription_LongPoster + 0x16

	@ src/data/decoration/header.h:1033 header_line_1033
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gDecorationDescription_SeaPoster
gDecorationDescription_SeaPoster: @ 0x08580713
	.string "ジーランスが\nプリント されている\nおおきなポスター"
	.byte EOS
	.if (. - gDecorationDescription_SeaPoster) != 0x1b
	.error "gDecorationDescription_SeaPoster must retain its original byte length"
	.endif
	.globl gDecorationDescription_SeaPoster_Suffix
	.set gDecorationDescription_SeaPoster_Suffix, gDecorationDescription_SeaPoster + 0x16

	@ src/data/decoration/header.h:1047 header_line_1047
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gDecorationDescription_SkyPoster
gDecorationDescription_SkyPoster: @ 0x0858072E
	.string "キャモメが\nプリント されている\nおおきなポスター"
	.byte EOS
	.if (. - gDecorationDescription_SkyPoster) != 0x1a
	.error "gDecorationDescription_SkyPoster must retain its original byte length"
	.endif
	.globl gDecorationDescription_SkyPoster_Suffix
	.set gDecorationDescription_SkyPoster_Suffix, gDecorationDescription_SkyPoster + 0x15

	@ src/data/decoration/header.h:1061 header_line_1061
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gDecorationDescription_KissPoster
gDecorationDescription_KissPoster: @ 0x08580748
	.string "ムチュールが\nプリント されている\nおおきなポスター"
	.byte EOS
	.if (. - gDecorationDescription_KissPoster) != 0x1b
	.error "gDecorationDescription_KissPoster must retain its original byte length"
	.endif
	.globl gDecorationDescription_KissPoster_Suffix
	.set gDecorationDescription_KissPoster_Suffix, gDecorationDescription_KissPoster + 0x16

	@ src/data/decoration/header.h:1075 header_line_1075
	.globl gDecorationDescription_PichuDoll
gDecorationDescription_PichuDoll: @ 0x08580763
	.string "ピチューの ぬいぐるみ\nマットや つくえの\nうえに おくもの"
	.byte EOS
	.if (. - gDecorationDescription_PichuDoll) > 0x1f
	.error "gDecorationDescription_PichuDoll may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_PichuDoll) < 0x1f
	.space 0x1f - (. - gDecorationDescription_PichuDoll)
	.endif

	@ src/data/decoration/header.h:1089 header_line_1089
	.globl gDecorationDescription_PikachuDoll
gDecorationDescription_PikachuDoll: @ 0x08580782
	.string "ピカチュウの ぬいぐるみ\nマットや つくえの\nうえに おくもの"
	.byte EOS
	.if (. - gDecorationDescription_PikachuDoll) > 0x20
	.error "gDecorationDescription_PikachuDoll may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_PikachuDoll) < 0x20
	.space 0x20 - (. - gDecorationDescription_PikachuDoll)
	.endif

	@ src/data/decoration/header.h:1103 header_line_1103
	.globl gDecorationDescription_MarillDoll
gDecorationDescription_MarillDoll: @ 0x085807A2
	.string "マリルの ぬいぐるみ\nマットや つくえの\nうえに おくもの"
	.byte EOS
	.if (. - gDecorationDescription_MarillDoll) > 0x1e
	.error "gDecorationDescription_MarillDoll may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_MarillDoll) < 0x1e
	.space 0x1e - (. - gDecorationDescription_MarillDoll)
	.endif

	@ src/data/decoration/header.h:1117 header_line_1117
	.globl gDecorationDescription_TogepiDoll
gDecorationDescription_TogepiDoll: @ 0x085807C0
	.string "トゲピーの ぬいぐるみ\nマットや つくえの\nうえに おくもの"
	.byte EOS
	.if (. - gDecorationDescription_TogepiDoll) > 0x1f
	.error "gDecorationDescription_TogepiDoll may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_TogepiDoll) < 0x1f
	.space 0x1f - (. - gDecorationDescription_TogepiDoll)
	.endif

	@ src/data/decoration/header.h:1131 header_line_1131
	.globl gDecorationDescription_CyndaquilDoll
gDecorationDescription_CyndaquilDoll: @ 0x085807DF
	.string "ヒノアラシの ぬいぐるみ\nマットや つくえの\nうえに おくもの"
	.byte EOS
	.if (. - gDecorationDescription_CyndaquilDoll) > 0x20
	.error "gDecorationDescription_CyndaquilDoll may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_CyndaquilDoll) < 0x20
	.space 0x20 - (. - gDecorationDescription_CyndaquilDoll)
	.endif

	@ src/data/decoration/header.h:1145 header_line_1145
	.globl gDecorationDescription_ChikoritaDoll
gDecorationDescription_ChikoritaDoll: @ 0x085807FF
	.string "チコリータの ぬいぐるみ\nマットや つくえの\nうえに おくもの"
	.byte EOS
	.if (. - gDecorationDescription_ChikoritaDoll) > 0x20
	.error "gDecorationDescription_ChikoritaDoll may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_ChikoritaDoll) < 0x20
	.space 0x20 - (. - gDecorationDescription_ChikoritaDoll)
	.endif

	@ src/data/decoration/header.h:1159 header_line_1159
	.globl gDecorationDescription_TotodileDoll
gDecorationDescription_TotodileDoll: @ 0x0858081F
	.string "ワニノコの ぬいぐるみ\nマットや つくえの\nうえに おくもの"
	.byte EOS
	.if (. - gDecorationDescription_TotodileDoll) > 0x1f
	.error "gDecorationDescription_TotodileDoll may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_TotodileDoll) < 0x1f
	.space 0x1f - (. - gDecorationDescription_TotodileDoll)
	.endif

	@ src/data/decoration/header.h:1173 header_line_1173
	.globl gDecorationDescription_JigglypuffDoll
gDecorationDescription_JigglypuffDoll: @ 0x0858083E
	.string "プリンの ぬいぐるみ\nマットや つくえの\nうえに おくもの"
	.byte EOS
	.if (. - gDecorationDescription_JigglypuffDoll) > 0x1e
	.error "gDecorationDescription_JigglypuffDoll may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_JigglypuffDoll) < 0x1e
	.space 0x1e - (. - gDecorationDescription_JigglypuffDoll)
	.endif

	@ src/data/decoration/header.h:1187 header_line_1187
	.globl gDecorationDescription_MeowthDoll
gDecorationDescription_MeowthDoll: @ 0x0858085C
	.string "ニャースの ぬいぐるみ\nマットや つくえの\nうえに おくもの"
	.byte EOS
	.if (. - gDecorationDescription_MeowthDoll) > 0x1f
	.error "gDecorationDescription_MeowthDoll may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_MeowthDoll) < 0x1f
	.space 0x1f - (. - gDecorationDescription_MeowthDoll)
	.endif

	@ src/data/decoration/header.h:1201 header_line_1201
	.globl gDecorationDescription_ClefairyDoll
gDecorationDescription_ClefairyDoll: @ 0x0858087B
	.string "ピッピの ぬいぐるみ\nマットや つくえの\nうえに おくもの"
	.byte EOS
	.if (. - gDecorationDescription_ClefairyDoll) > 0x1e
	.error "gDecorationDescription_ClefairyDoll may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_ClefairyDoll) < 0x1e
	.space 0x1e - (. - gDecorationDescription_ClefairyDoll)
	.endif

	@ src/data/decoration/header.h:1215 header_line_1215
	.globl gDecorationDescription_DittoDoll
gDecorationDescription_DittoDoll: @ 0x08580899
	.string "メタモンの ぬいぐるみ\nマットや つくえの\nうえに おくもの"
	.byte EOS
	.if (. - gDecorationDescription_DittoDoll) > 0x1f
	.error "gDecorationDescription_DittoDoll may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_DittoDoll) < 0x1f
	.space 0x1f - (. - gDecorationDescription_DittoDoll)
	.endif

	@ src/data/decoration/header.h:1229 header_line_1229
	.globl gDecorationDescription_SmoochumDoll
gDecorationDescription_SmoochumDoll: @ 0x085808B8
	.string "ムチュールの ぬいぐるみ\nマットや つくえの\nうえに おくもの"
	.byte EOS
	.if (. - gDecorationDescription_SmoochumDoll) > 0x20
	.error "gDecorationDescription_SmoochumDoll may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_SmoochumDoll) < 0x20
	.space 0x20 - (. - gDecorationDescription_SmoochumDoll)
	.endif

	@ src/data/decoration/header.h:1243 header_line_1243
	.globl gDecorationDescription_TreeckoDoll
gDecorationDescription_TreeckoDoll: @ 0x085808D8
	.string "キモリの ぬいぐるみ\nマットや つくえの\nうえに おくもの"
	.byte EOS
	.if (. - gDecorationDescription_TreeckoDoll) > 0x1e
	.error "gDecorationDescription_TreeckoDoll may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_TreeckoDoll) < 0x1e
	.space 0x1e - (. - gDecorationDescription_TreeckoDoll)
	.endif

	@ src/data/decoration/header.h:1257 header_line_1257
	.globl gDecorationDescription_TorchicDoll
gDecorationDescription_TorchicDoll: @ 0x085808F6
	.string "アチャモの ぬいぐるみ\nマットや つくえの\nうえに おくもの"
	.byte EOS
	.if (. - gDecorationDescription_TorchicDoll) > 0x1f
	.error "gDecorationDescription_TorchicDoll may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_TorchicDoll) < 0x1f
	.space 0x1f - (. - gDecorationDescription_TorchicDoll)
	.endif

	@ src/data/decoration/header.h:1271 header_line_1271
	.globl gDecorationDescription_MudkipDoll
gDecorationDescription_MudkipDoll: @ 0x08580915
	.string "ミズゴロウの ぬいぐるみ\nマットや つくえの\nうえに おくもの"
	.byte EOS
	.if (. - gDecorationDescription_MudkipDoll) > 0x20
	.error "gDecorationDescription_MudkipDoll may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_MudkipDoll) < 0x20
	.space 0x20 - (. - gDecorationDescription_MudkipDoll)
	.endif

	@ src/data/decoration/header.h:1285 header_line_1285
	.globl gDecorationDescription_DuskullDoll
gDecorationDescription_DuskullDoll: @ 0x08580935
	.string "ヨマワルの ぬいぐるみ\nマットや つくえの\nうえに おくもの"
	.byte EOS
	.if (. - gDecorationDescription_DuskullDoll) > 0x1f
	.error "gDecorationDescription_DuskullDoll may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_DuskullDoll) < 0x1f
	.space 0x1f - (. - gDecorationDescription_DuskullDoll)
	.endif

	@ src/data/decoration/header.h:1299 header_line_1299
	.globl gDecorationDescription_WynautDoll
gDecorationDescription_WynautDoll: @ 0x08580954
	.string "ソーナノの ぬいぐるみ\nマットや つくえの\nうえに おくもの"
	.byte EOS
	.if (. - gDecorationDescription_WynautDoll) > 0x1f
	.error "gDecorationDescription_WynautDoll may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_WynautDoll) < 0x1f
	.space 0x1f - (. - gDecorationDescription_WynautDoll)
	.endif

	@ src/data/decoration/header.h:1313 header_line_1313
	.globl gDecorationDescription_BaltoyDoll
gDecorationDescription_BaltoyDoll: @ 0x08580973
	.string "ヤジロンの ぬいぐるみ\nマットや つくえの\nうえに おくもの"
	.byte EOS
	.if (. - gDecorationDescription_BaltoyDoll) > 0x1f
	.error "gDecorationDescription_BaltoyDoll may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_BaltoyDoll) < 0x1f
	.space 0x1f - (. - gDecorationDescription_BaltoyDoll)
	.endif

	@ src/data/decoration/header.h:1327 header_line_1327
	.globl gDecorationDescription_KecleonDoll
gDecorationDescription_KecleonDoll: @ 0x08580992
	.string "カクレオンの ぬいぐるみ\nマットや つくえの\nうえに おくもの"
	.byte EOS
	.if (. - gDecorationDescription_KecleonDoll) > 0x20
	.error "gDecorationDescription_KecleonDoll may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_KecleonDoll) < 0x20
	.space 0x20 - (. - gDecorationDescription_KecleonDoll)
	.endif

	@ src/data/decoration/header.h:1341 header_line_1341
	.globl gDecorationDescription_AzurillDoll
gDecorationDescription_AzurillDoll: @ 0x085809B2
	.string "ルリリの ぬいぐるみ\nマットや つくえの\nうえに おくもの"
	.byte EOS
	.if (. - gDecorationDescription_AzurillDoll) > 0x1e
	.error "gDecorationDescription_AzurillDoll may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_AzurillDoll) < 0x1e
	.space 0x1e - (. - gDecorationDescription_AzurillDoll)
	.endif

	@ src/data/decoration/header.h:1355 header_line_1355
	.globl gDecorationDescription_SkittyDoll
gDecorationDescription_SkittyDoll: @ 0x085809D0
	.string "エネコの ぬいぐるみ\nマットや つくえの\nうえに おくもの"
	.byte EOS
	.if (. - gDecorationDescription_SkittyDoll) > 0x1e
	.error "gDecorationDescription_SkittyDoll may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_SkittyDoll) < 0x1e
	.space 0x1e - (. - gDecorationDescription_SkittyDoll)
	.endif

	@ src/data/decoration/header.h:1369 header_line_1369
	.globl gDecorationDescription_SwabluDoll
gDecorationDescription_SwabluDoll: @ 0x085809EE
	.string "チルットの ぬいぐるみ\nマットや つくえの\nうえに おくもの"
	.byte EOS
	.if (. - gDecorationDescription_SwabluDoll) > 0x1f
	.error "gDecorationDescription_SwabluDoll may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_SwabluDoll) < 0x1f
	.space 0x1f - (. - gDecorationDescription_SwabluDoll)
	.endif

	@ src/data/decoration/header.h:1383 header_line_1383
	.globl gDecorationDescription_GulpinDoll
gDecorationDescription_GulpinDoll: @ 0x08580A0D
	.string "ゴクリンの ぬいぐるみ\nマットや つくえの\nうえに おくもの"
	.byte EOS
	.if (. - gDecorationDescription_GulpinDoll) > 0x1f
	.error "gDecorationDescription_GulpinDoll may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_GulpinDoll) < 0x1f
	.space 0x1f - (. - gDecorationDescription_GulpinDoll)
	.endif

	@ src/data/decoration/header.h:1397 header_line_1397
	.globl gDecorationDescription_LotadDoll
gDecorationDescription_LotadDoll: @ 0x08580A2C
	.string "ハスボーの ぬいぐるみ\nマットや つくえの\nうえに おくもの"
	.byte EOS
	.if (. - gDecorationDescription_LotadDoll) > 0x1f
	.error "gDecorationDescription_LotadDoll may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_LotadDoll) < 0x1f
	.space 0x1f - (. - gDecorationDescription_LotadDoll)
	.endif

	@ src/data/decoration/header.h:1411 header_line_1411
	.globl gDecorationDescription_SeedotDoll
gDecorationDescription_SeedotDoll: @ 0x08580A4B
	.string "タネボーの ぬいぐるみ\nマットや つくえの\nうえに おくもの"
	.byte EOS
	.if (. - gDecorationDescription_SeedotDoll) > 0x1f
	.error "gDecorationDescription_SeedotDoll may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_SeedotDoll) < 0x1f
	.space 0x1f - (. - gDecorationDescription_SeedotDoll)
	.endif

	@ src/data/decoration/header.h:1425 header_line_1425
	.globl gDecorationDescription_PikaCushion
gDecorationDescription_PikaCushion: @ 0x08580A6A
	.string "ピカチュウの クッション\nマットや つくえの\nうえに おくもの"
	.byte EOS
	.if (. - gDecorationDescription_PikaCushion) > 0x20
	.error "gDecorationDescription_PikaCushion may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_PikaCushion) < 0x20
	.space 0x20 - (. - gDecorationDescription_PikaCushion)
	.endif

	@ src/data/decoration/header.h:1439 header_line_1439
	.globl gDecorationDescription_RoundCushion
gDecorationDescription_RoundCushion: @ 0x08580A8A
	.string "マリルリの クッション\nマットや つくえの\nうえに おくもの"
	.byte EOS
	.if (. - gDecorationDescription_RoundCushion) > 0x1f
	.error "gDecorationDescription_RoundCushion may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_RoundCushion) < 0x1f
	.space 0x1f - (. - gDecorationDescription_RoundCushion)
	.endif

	@ src/data/decoration/header.h:1453 header_line_1453
	.globl gDecorationDescription_KissCushion
gDecorationDescription_KissCushion: @ 0x08580AA9
	.string "ムチュールの クッション\nマットや つくえの\nうえに おくもの"
	.byte EOS
	.if (. - gDecorationDescription_KissCushion) > 0x20
	.error "gDecorationDescription_KissCushion may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_KissCushion) < 0x20
	.space 0x20 - (. - gDecorationDescription_KissCushion)
	.endif

	@ src/data/decoration/header.h:1467 header_line_1467
	.globl gDecorationDescription_ZigzagCushion
gDecorationDescription_ZigzagCushion: @ 0x08580AC9
	.string "ジグザグマの クッション\nマットや つくえの\nうえに おくもの"
	.byte EOS
	.if (. - gDecorationDescription_ZigzagCushion) > 0x20
	.error "gDecorationDescription_ZigzagCushion may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_ZigzagCushion) < 0x20
	.space 0x20 - (. - gDecorationDescription_ZigzagCushion)
	.endif

	@ src/data/decoration/header.h:1481 header_line_1481
	.globl gDecorationDescription_SpinCushion
gDecorationDescription_SpinCushion: @ 0x08580AE9
	.string "パッチールの クッション\nマットや つくえの\nうえに おくもの"
	.byte EOS
	.if (. - gDecorationDescription_SpinCushion) > 0x20
	.error "gDecorationDescription_SpinCushion may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_SpinCushion) < 0x20
	.space 0x20 - (. - gDecorationDescription_SpinCushion)
	.endif

	@ src/data/decoration/header.h:1495 header_line_1495
	.globl gDecorationDescription_DiamondCushion
gDecorationDescription_DiamondCushion: @ 0x08580B09
	.string "ヤミラミの クッション\nマットや つくえの\nうえに おくもの"
	.byte EOS
	.if (. - gDecorationDescription_DiamondCushion) > 0x1f
	.error "gDecorationDescription_DiamondCushion may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_DiamondCushion) < 0x1f
	.space 0x1f - (. - gDecorationDescription_DiamondCushion)
	.endif

	@ src/data/decoration/header.h:1509 header_line_1509
	.globl gDecorationDescription_BallCushion
gDecorationDescription_BallCushion: @ 0x08580B28
	.string "ボールの クッション\nマットや つくえの\nうえに おくもの"
	.byte EOS
	.if (. - gDecorationDescription_BallCushion) > 0x1e
	.error "gDecorationDescription_BallCushion may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_BallCushion) < 0x1e
	.space 0x1e - (. - gDecorationDescription_BallCushion)
	.endif

	@ src/data/decoration/header.h:1523 header_line_1523
	.globl gDecorationDescription_GrassCushion
gDecorationDescription_GrassCushion: @ 0x08580B46
	.string "くさマーク クッション\nマットや つくえの\nうえに おくもの"
	.byte EOS
	.if (. - gDecorationDescription_GrassCushion) > 0x1f
	.error "gDecorationDescription_GrassCushion may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_GrassCushion) < 0x1f
	.space 0x1f - (. - gDecorationDescription_GrassCushion)
	.endif

	@ src/data/decoration/header.h:1537 header_line_1537
	.globl gDecorationDescription_FireCushion
gDecorationDescription_FireCushion: @ 0x08580B65
	.string "ほのおマーク クッション\nマットや つくえの\nうえに おくもの"
	.byte EOS
	.if (. - gDecorationDescription_FireCushion) > 0x20
	.error "gDecorationDescription_FireCushion may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_FireCushion) < 0x20
	.space 0x20 - (. - gDecorationDescription_FireCushion)
	.endif

	@ src/data/decoration/header.h:1551 header_line_1551
	.globl gDecorationDescription_WaterCushion
gDecorationDescription_WaterCushion: @ 0x08580B85
	.string "みずマーク クッション\nマットや つくえの\nうえに おくもの"
	.byte EOS
	.if (. - gDecorationDescription_WaterCushion) > 0x1f
	.error "gDecorationDescription_WaterCushion may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_WaterCushion) < 0x1f
	.space 0x1f - (. - gDecorationDescription_WaterCushion)
	.endif

	@ src/data/decoration/header.h:1565 header_line_1565 (+9 aliases)
	.globl gDecorationDescription_SnorlaxDoll
gDecorationDescription_SnorlaxDoll: @ 0x08580BA4
	.string "おおきな ぬいぐるみ\nマットや つくえの\nうえに おくもの"
	.byte EOS
	.if (. - gDecorationDescription_SnorlaxDoll) > 0x1e
	.error "gDecorationDescription_SnorlaxDoll may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_SnorlaxDoll) < 0x1e
	.space 0x1e - (. - gDecorationDescription_SnorlaxDoll)
	.endif

	@ src/data/decoration/header.h:1565 header_line_1565 (+9 aliases)
	.globl gDecorationDescription_RhydonDoll
gDecorationDescription_RhydonDoll: @ 0x08580BC2
	.string "おおきな ぬいぐるみ\nマットや つくえの\nうえに おくもの"
	.byte EOS
	.if (. - gDecorationDescription_RhydonDoll) > 0x1e
	.error "gDecorationDescription_RhydonDoll may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_RhydonDoll) < 0x1e
	.space 0x1e - (. - gDecorationDescription_RhydonDoll)
	.endif

	@ src/data/decoration/header.h:1565 header_line_1565 (+9 aliases)
	.globl gDecorationDescription_LaprasDoll
gDecorationDescription_LaprasDoll: @ 0x08580BE0
	.string "おおきな ぬいぐるみ\nマットや つくえの\nうえに おくもの"
	.byte EOS
	.if (. - gDecorationDescription_LaprasDoll) > 0x1e
	.error "gDecorationDescription_LaprasDoll may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_LaprasDoll) < 0x1e
	.space 0x1e - (. - gDecorationDescription_LaprasDoll)
	.endif

	@ src/data/decoration/header.h:1565 header_line_1565 (+9 aliases)
	.globl gDecorationDescription_VenusaurDoll
gDecorationDescription_VenusaurDoll: @ 0x08580BFE
	.string "おおきな ぬいぐるみ\nマットや つくえの\nうえに おくもの"
	.byte EOS
	.if (. - gDecorationDescription_VenusaurDoll) > 0x1e
	.error "gDecorationDescription_VenusaurDoll may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_VenusaurDoll) < 0x1e
	.space 0x1e - (. - gDecorationDescription_VenusaurDoll)
	.endif

	@ src/data/decoration/header.h:1565 header_line_1565 (+9 aliases)
	.globl gDecorationDescription_CharizardDoll
gDecorationDescription_CharizardDoll: @ 0x08580C1C
	.string "おおきな ぬいぐるみ\nマットや つくえの\nうえに おくもの"
	.byte EOS
	.if (. - gDecorationDescription_CharizardDoll) > 0x1e
	.error "gDecorationDescription_CharizardDoll may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_CharizardDoll) < 0x1e
	.space 0x1e - (. - gDecorationDescription_CharizardDoll)
	.endif

	@ src/data/decoration/header.h:1565 header_line_1565 (+9 aliases)
	.globl gDecorationDescription_BlastoiseDoll
gDecorationDescription_BlastoiseDoll: @ 0x08580C3A
	.string "おおきな ぬいぐるみ\nマットや つくえの\nうえに おくもの"
	.byte EOS
	.if (. - gDecorationDescription_BlastoiseDoll) > 0x1e
	.error "gDecorationDescription_BlastoiseDoll may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_BlastoiseDoll) < 0x1e
	.space 0x1e - (. - gDecorationDescription_BlastoiseDoll)
	.endif

	@ src/data/decoration/header.h:1565 header_line_1565 (+9 aliases)
	.globl gDecorationDescription_WailmerDoll
gDecorationDescription_WailmerDoll: @ 0x08580C58
	.string "おおきな ぬいぐるみ\nマットや つくえの\nうえに おくもの"
	.byte EOS
	.if (. - gDecorationDescription_WailmerDoll) > 0x1e
	.error "gDecorationDescription_WailmerDoll may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_WailmerDoll) < 0x1e
	.space 0x1e - (. - gDecorationDescription_WailmerDoll)
	.endif

	@ src/data/decoration/header.h:1565 header_line_1565 (+9 aliases)
	.globl gDecorationDescription_RegirockDoll
gDecorationDescription_RegirockDoll: @ 0x08580C76
	.string "おおきな ぬいぐるみ\nマットや つくえの\nうえに おくもの"
	.byte EOS
	.if (. - gDecorationDescription_RegirockDoll) > 0x1e
	.error "gDecorationDescription_RegirockDoll may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_RegirockDoll) < 0x1e
	.space 0x1e - (. - gDecorationDescription_RegirockDoll)
	.endif

	@ src/data/decoration/header.h:1565 header_line_1565 (+9 aliases)
	.globl gDecorationDescription_RegiceDoll
gDecorationDescription_RegiceDoll: @ 0x08580C94
	.string "おおきな ぬいぐるみ\nマットや つくえの\nうえに おくもの"
	.byte EOS
	.if (. - gDecorationDescription_RegiceDoll) > 0x1e
	.error "gDecorationDescription_RegiceDoll may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_RegiceDoll) < 0x1e
	.space 0x1e - (. - gDecorationDescription_RegiceDoll)
	.endif

	@ src/data/decoration/header.h:1565 header_line_1565 (+9 aliases)
	.globl gDecorationDescription_RegisteelDoll
gDecorationDescription_RegisteelDoll: @ 0x08580CB2
	.string "おおきな ぬいぐるみ\nマットや つくえの\nうえに おくもの"
	.byte EOS
	.if (. - gDecorationDescription_RegisteelDoll) > 0x1e
	.error "gDecorationDescription_RegisteelDoll may not grow beyond its original slot"
	.endif
	.if (. - gDecorationDescription_RegisteelDoll) < 0x1e
	.space 0x1e - (. - gDecorationDescription_RegisteelDoll)
	.endif
