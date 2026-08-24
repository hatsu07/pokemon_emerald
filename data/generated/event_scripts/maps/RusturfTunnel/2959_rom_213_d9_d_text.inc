	@ data/maps/RusturfTunnel/scripts.inc:421 RusturfTunnel_Text_ComeAndGetSome
	.globl gText_Rom_213991
gText_Rom_213991: @ 0x08213991
	.string "くるのか?\nくるなら こいよ!{EOS}"
	.if (. - gText_Rom_213991) > 0x10
	.error "gText_Rom_213991 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_213991) < 0x10
	.space 0x10 - (. - gText_Rom_213991)
	.endif
	@ data/maps/RusturfTunnel/scripts.inc:424 RusturfTunnel_Text_Peeko
	.globl gText_Rom_2139A1
gText_Rom_2139A1: @ 0x082139A1
	.string "ピーコちゃん『ピ ピひょー!{EOS}"
	.if (. - gText_Rom_2139A1) > 0xf
	.error "gText_Rom_2139A1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2139A1) < 0xf
	.space 0xf - (. - gText_Rom_2139A1)
	.endif
	@ data/maps/RusturfTunnel/scripts.inc:427 RusturfTunnel_Text_GruntIntro
	.globl gText_Rom_2139B0
gText_Rom_2139B0: @ 0x082139B0
	.string "えーい くっそー!\pうばった ポケモンは\nなんの やくにも たたないし\pいいところへ にげこめたと おもったのに\nこの トンネル いきどまり じゃねーか!\pやい! おまえ!\nおれと しょうぶ するんだな!?{EOS}"
	.if (. - gText_Rom_2139B0) > 0x68
	.error "gText_Rom_2139B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2139B0) < 0x68
	.space 0x68 - (. - gText_Rom_2139B0)
	.endif
	@ data/maps/RusturfTunnel/scripts.inc:430 RusturfTunnel_Text_GruntDefeat (+1 aliases)
	.globl gText_Rom_213A18
gText_Rom_213A18: @ 0x08213A18
	.string "む むぐぐー!\nおれの あくじも いきどまりかっ!{EOS}"
	.if (. - gText_Rom_213A18) > 0x1a
	.error "gText_Rom_213A18 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_213A18) < 0x1a
	.space 0x1a - (. - gText_Rom_213A18)
	.endif
	@ data/maps/RusturfTunnel/scripts.inc:433 RusturfTunnel_Text_GruntTakePackage
	.globl gText_Rom_213A32
gText_Rom_213A32: @ 0x08213A32
	.string "おかしいなあ……\pリーダーの はなしでは なにかの にもつを\nデボンから ぬすんでくる っていう\lらくな しごと だった はずなのに……\pちぇっ!\nこんなもん かえして やらあ!{EOS}"
	.if (. - gText_Rom_213A32) > 0x5a
	.error "gText_Rom_213A32 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_213A32) < 0x5a
	.space 0x5a - (. - gText_Rom_213A32)
	.endif
	@ data/maps/RusturfTunnel/scripts.inc:436 RusturfTunnel_Text_PeekoGladToSeeYouSafe
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_213A8C
gText_Rom_213A8C: @ 0x08213A8C
	.string "ピーコちゃん! ぶじで よかった!{EOS}"
	.if (. - gText_Rom_213A8C) != 0x12
	.error "gText_Rom_213A8C must retain its original byte length"
	.endif
	.globl gText_Rom_213A99
	.set gText_Rom_213A99, gText_Rom_213A8C + 0xd
	@ data/maps/RusturfTunnel/scripts.inc:439 RusturfTunnel_Text_ThankYouLetsGoHomePeeko
	.globl gText_Rom_213A9E
gText_Rom_213A9E: @ 0x08213A9E
	.string "あんたは ピーコちゃんの\nいのちの おんじん じゃよ!\pわしは ハギと いうのじゃが\nきみは……?\p…… …… ……\n…… …… ……\pそうか {PLAYER}{KUN}と いうのか!\nほんとうに ありがとうよ!\pこれからさき こまった ことが あったら\nえんりょなく わしに いっとくれ!\pいつもは トウカのもりの ちかくに ある\nはまべの こやに いるからの!\pさあ ピーコちゃん\nわしらの おうちに かえろうな!\pピーコちゃん『ピひょーっ!!{EOS}"
	.if (. - gText_Rom_213A9E) > 0xd8
	.error "gText_Rom_213A9E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_213A9E) < 0xd8
	.space 0xd8 - (. - gText_Rom_213A9E)
	.endif
	@ data/maps/RusturfTunnel/scripts.inc:442 RusturfTunnel_Text_WhyCantTheyKeepDigging
	.globl gText_Rom_213B76
gText_Rom_213B76: @ 0x08213B76
	.string "……\pどうして これいじょう ほれない……\nこの いわが かたすぎるのか?\pこのさきの シダケタウンという ところに\nあいする かのじょが いるのに……\pカナズミと シダケを トンネルで むすべば\nまいにち かのじょに あいに いける\pそれなのに……\nおれは どうすれば いいんだ……{EOS}"
	.if (. - gText_Rom_213B76) > 0x8f
	.error "gText_Rom_213B76 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_213B76) < 0x8f
	.space 0x8f - (. - gText_Rom_213B76)
	.endif
	@ data/maps/RusturfTunnel/scripts.inc:445 RusturfTunnel_Text_ToGetToVerdanturf
	.globl gText_Rom_213C05
gText_Rom_213C05: @ 0x08213C05
	.string "カナズミから シダケに いこうと すると\nムロから カイナと キンセツを とおって\lいかなきゃ ならないんだ……{EOS}"
	.if (. - gText_Rom_213C05) > 0x39
	.error "gText_Rom_213C05 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_213C05) < 0x39
	.space 0x39 - (. - gText_Rom_213C05)
	.endif
	@ data/maps/RusturfTunnel/scripts.inc:448 RusturfTunnel_Text_YouShatteredBoulderTakeHM
	.globl gText_Rom_213C3E
gText_Rom_213C3E: @ 0x08213C3E
	.string "なんと! きみが この いわを\nくだいて くれたんだね\pかんしゃの しるし として\nこの ひでんマシンを うけとってくれ{EOS}"
	.if (. - gText_Rom_213C3E) > 0x3d
	.error "gText_Rom_213C3E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_213C3E) < 0x3d
	.space 0x3d - (. - gText_Rom_213C3E)
	.endif
	@ data/maps/RusturfTunnel/scripts.inc:451 RusturfTunnel_Text_ExplainStrength
	.globl gText_Rom_213C7B
gText_Rom_213C7B: @ 0x08213C7B
	.string "そいつには かいりきが はいっている\nちからもちの ポケモンに おぼえさせれば\lおおきな いわを うごかせるよ{EOS}"
	.if (. - gText_Rom_213C7B) > 0x38
	.error "gText_Rom_213C7B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_213C7B) < 0x38
	.space 0x38 - (. - gText_Rom_213C7B)
	.endif
	@ data/maps/RusturfTunnel/scripts.inc:454 RusturfTunnel_Text_WandaReunion
	.globl gText_Rom_213CB3
gText_Rom_213CB3: @ 0x08213CB3
	.string "ミチルさん!\nこれから いつでも あえます!\pミチル『よかった…… です\pさあ わたしの いえで\nゆっくり やすんで ください{EOS}"
	.if (. - gText_Rom_213CB3) > 0x40
	.error "gText_Rom_213CB3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_213CB3) < 0x40
	.space 0x40 - (. - gText_Rom_213CB3)
	.endif
	@ data/maps/RusturfTunnel/scripts.inc:457 RusturfTunnel_Text_BoyfriendOnOtherSideOfRock
	.globl gText_Rom_213CF3
gText_Rom_213CF3: @ 0x08213CF3
	.string "この いわの むこうに……\nわたしの かれが いるの\pかれ…… わたしに あうため だけに\nトンネルを ほってるわけ じゃないわ\pみんなの ために\nてを きずつけながらも がんばってるの{EOS}"
	.if (. - gText_Rom_213CF3) > 0x5e
	.error "gText_Rom_213CF3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_213CF3) < 0x5e
	.space 0x5e - (. - gText_Rom_213CF3)
	.endif
	@ data/maps/RusturfTunnel/scripts.inc:460 RusturfTunnel_Text_MikeIntro (+1 aliases)
	.globl gText_Rom_213D51
gText_Rom_213D51: @ 0x08213D51
	.string "おとこが やまに いるから やまおとこ!\pなのに ポケモンが やまに いても\nやまポケモンと いわないのは なぜだ?{EOS}"
	.if (. - gText_Rom_213D51) > 0x3b
	.error "gText_Rom_213D51 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_213D51) < 0x3b
	.space 0x3b - (. - gText_Rom_213D51)
	.endif
	@ data/maps/RusturfTunnel/scripts.inc:463 RusturfTunnel_Text_MikeDefeat (+1 aliases)
	.globl gText_Rom_213D8C
gText_Rom_213D8C: @ 0x08213D8C
	.string "ポケモン……\nちから つきた……{EOS}"
	.if (. - gText_Rom_213D8C) > 0x11
	.error "gText_Rom_213D8C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_213D8C) < 0x11
	.space 0x11 - (. - gText_Rom_213D8C)
	.endif
	@ data/maps/RusturfTunnel/scripts.inc:466 RusturfTunnel_Text_MikePostBattle
	.globl gText_Rom_213D9D
gText_Rom_213D9D: @ 0x08213D9D
	.string "ここって ポケモンを まもるため\nかいはつ こうじを やめたんだろ?\lそれって いい はなし だよな{EOS}"
	.if (. - gText_Rom_213D9D) > 0x33
	.error "gText_Rom_213D9D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_213D9D) < 0x33
	.space 0x33 - (. - gText_Rom_213D9D)
	.endif

	@ Embedded ROM bytes: file offset 0x213DD0, size 0xC2
	.byte 0x05, 0xD6, 0x3D, 0x21, 0x08, 0x00, 0x40, 0x00, 0x07, 0xFF, 0x1D, 0x00, 0x35, 0x00, 0x02, 0x05
	.byte 0xEF, 0x3D, 0x21, 0x08, 0x01, 0x0D, 0x3E, 0x21, 0x08, 0x03, 0x4E, 0x3E, 0x21, 0x08, 0x00, 0x2B
	.byte 0xC1, 0x08, 0x07, 0x01, 0xF9, 0x3D, 0x21, 0x08, 0x02, 0x26, 0x0D, 0x80, 0xB4, 0x00, 0x21, 0x0D
	.byte 0x80, 0x07, 0x00, 0x06, 0x05, 0x78, 0x41, 0x24, 0x08, 0x53, 0x0F, 0x80, 0x03, 0x2B, 0xB0, 0x08
	.byte 0x07, 0x00, 0x17, 0x3E, 0x21, 0x08, 0x02, 0xA2, 0x07, 0x00, 0x13, 0x00, 0x29, 0x02, 0x01, 0x00
	.byte 0xA2, 0x08, 0x00, 0x13, 0x00, 0x29, 0x02, 0x01, 0x00, 0xA2, 0x09, 0x00, 0x13, 0x00, 0x29, 0x02
	.byte 0x01, 0x00, 0xA2, 0x07, 0x00, 0x14, 0x00, 0x35, 0x02, 0x01, 0x00, 0xA2, 0x08, 0x00, 0x14, 0x00
	.byte 0x35, 0x02, 0x01, 0x00, 0xA2, 0x09, 0x00, 0x14, 0x00, 0x35, 0x02, 0x01, 0x00, 0x03, 0x29, 0xB6
	.byte 0x08, 0x2B, 0xBB, 0x01, 0x07, 0x00, 0x5B, 0x3E, 0x21, 0x08, 0x02, 0x2A, 0xA7, 0x03, 0x03, 0x69
	.byte 0x2B, 0xB0, 0x08, 0x06, 0x01, 0x72, 0x3E, 0x21, 0x08, 0x78, 0x53, 0x37, 0x26, 0x08, 0x6D, 0xDA
	.byte 0x6B, 0x02, 0x0F, 0x00, 0xDA, 0x3C, 0x24, 0x08, 0x09, 0x04, 0x6B, 0x02, 0x69, 0x78, 0x53, 0x37
	.byte 0x26, 0x08, 0x6D, 0xDA, 0x6B, 0x02, 0x6A, 0x5A, 0x30, 0xA1, 0x91, 0x01, 0x02, 0x00, 0x28, 0x28
	.byte 0x00, 0xC5

	setwildbattle SPECIES_REGIROCK, 40, ITEM_NONE

	@ Embedded ROM bytes: file offset 0x213E98, size 0x80
	.byte 0x29, 0xC1, 0x08, 0x25, 0x38, 0x01, 0x27, 0x2A, 0xC1, 0x08, 0x26, 0x0D, 0x80, 0xB4, 0x00, 0x21
	.byte 0x0D, 0x80, 0x01, 0x00, 0x06, 0x01, 0xCD, 0x3E, 0x21, 0x08, 0x21, 0x0D, 0x80, 0x04, 0x00, 0x06
	.byte 0x01, 0xD6, 0x3E, 0x21, 0x08, 0x21, 0x0D, 0x80, 0x05, 0x00, 0x06, 0x01, 0xD6, 0x3E, 0x21, 0x08
	.byte 0x29, 0xBB, 0x01, 0x6C, 0x02, 0x29, 0xBB, 0x01, 0x05, 0x97, 0x41, 0x24, 0x08, 0x02, 0x16, 0x04
	.byte 0x80, 0x91, 0x01, 0x05, 0xA0, 0x41, 0x24, 0x08, 0x02, 0x00, 0x6A, 0x5A, 0x2B, 0x6D, 0x00, 0x06
	.byte 0x01, 0x0E, 0x3F, 0x21, 0x08, 0x0F, 0x00, 0x18, 0x3F, 0x21, 0x08, 0x09, 0x04, 0x1A, 0x00, 0x80
	.byte 0x57, 0x01, 0x1A, 0x01, 0x80, 0x01, 0x00, 0x09, 0x00, 0x29, 0x6D, 0x00, 0x0F, 0x00, 0xAE, 0x3F
	.byte 0x21, 0x08, 0x09, 0x04, 0x6C, 0x02, 0x0F, 0x00, 0xAE, 0x3F, 0x21, 0x08, 0x09, 0x04, 0x6C, 0x02
