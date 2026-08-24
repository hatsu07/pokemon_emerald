	@ data/maps/FortreeCity_Gym/scripts.inc:137 FortreeCity_Gym_Text_GymGuideAdvice
	.globl gText_Rom_204578
gText_Rom_204578: @ 0x08204578
	.string "げんき しとぉや!!\nチャンピオンを めざす {PLAYER}!!\pヒワマキシティ ジムの リーダー ナギは\nひこうタイプ ポケモンの つかいてだ!\pこの かいてんとびら だらけの\nジムの おくで\pかのじょは あらたな チャレンジャーが\nはばたこうと するのを まっている!\pじゃ きばってこォー!!{EOS}"
	.if (. - gText_Rom_204578) > 0x91
	.error "gText_Rom_204578 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204578) < 0x91
	.space 0x91 - (. - gText_Rom_204578)
	.endif
	@ data/maps/FortreeCity_Gym/scripts.inc:148 FortreeCity_Gym_Text_GymGuidePostVictory
	.globl gText_Rom_204609
gText_Rom_204609: @ 0x08204609
	.string "えんやっと きみは はばたいたッ!{EOS}"
	.if (. - gText_Rom_204609) > 0x12
	.error "gText_Rom_204609 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204609) < 0x12
	.space 0x12 - (. - gText_Rom_204609)
	.endif
	@ data/maps/FortreeCity_Gym/scripts.inc:152 FortreeCity_Gym_Text_JaredIntro (+1 aliases)
	.globl gText_Rom_20461B
gText_Rom_20461B: @ 0x0820461B
	.string "かれいな とりポケモンの たたかいを\nみせて やるぜっ!{EOS}"
	.if (. - gText_Rom_20461B) > 0x1d
	.error "gText_Rom_20461B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20461B) < 0x1d
	.space 0x1d - (. - gText_Rom_20461B)
	.endif
	@ data/maps/FortreeCity_Gym/scripts.inc:156 FortreeCity_Gym_Text_JaredDefeat (+1 aliases)
	.globl gText_Rom_204638
gText_Rom_204638: @ 0x08204638
	.string "きみ…… つよいんだな……{EOS}"
	.if (. - gText_Rom_204638) > 0xe
	.error "gText_Rom_204638 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204638) < 0xe
	.space 0xe - (. - gText_Rom_204638)
	.endif
	@ data/maps/FortreeCity_Gym/scripts.inc:160 FortreeCity_Gym_Text_JaredPostBattle
	.globl gText_Rom_204646
gText_Rom_204646: @ 0x08204646
	.string "トレーナーは あたまの かいてんも\nはやく なければ つとまらないぜ!\pきみは リーダーの ところまで\nちゃんと たどりつく ことが できるかい?{EOS}"
	.if (. - gText_Rom_204646) > 0x4a
	.error "gText_Rom_204646 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204646) < 0x4a
	.space 0x4a - (. - gText_Rom_204646)
	.endif
	@ data/maps/FortreeCity_Gym/scripts.inc:166 FortreeCity_Gym_Text_EdwardoIntro (+1 aliases)
	.globl gText_Rom_204690
gText_Rom_204690: @ 0x08204690
	.string "とりポケモンを あいする ものは\nこの ジムを もくひょうと している!\pヒワマキ ジムの いちいん として\nまける わけには いかないんだ!{EOS}"
	.if (. - gText_Rom_204690) > 0x48
	.error "gText_Rom_204690 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204690) < 0x48
	.space 0x48 - (. - gText_Rom_204690)
	.endif
	@ data/maps/FortreeCity_Gym/scripts.inc:172 FortreeCity_Gym_Text_EdwardoDefeat (+1 aliases)
	.globl gText_Rom_2046D8
gText_Rom_2046D8: @ 0x082046D8
	.string "オレには にが おもすぎたか……!{EOS}"
	.if (. - gText_Rom_2046D8) > 0x12
	.error "gText_Rom_2046D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2046D8) < 0x12
	.space 0x12 - (. - gText_Rom_2046D8)
	.endif
	@ data/maps/FortreeCity_Gym/scripts.inc:176 FortreeCity_Gym_Text_EdwardoPostBattle
	.globl gText_Rom_2046EA
gText_Rom_2046EA: @ 0x082046EA
	.string "せかいは ひろい\nつよい トレーナーは たくさん いる\pオレも ここで しゅぎょうを つづけて\nつよくなって みせるよ!{EOS}"
	.if (. - gText_Rom_2046EA) > 0x3d
	.error "gText_Rom_2046EA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2046EA) < 0x3d
	.space 0x3d - (. - gText_Rom_2046EA)
	.endif
	@ data/maps/FortreeCity_Gym/scripts.inc:182 FortreeCity_Gym_Text_FlintIntro (+1 aliases)
	.globl gText_Rom_204727
gText_Rom_204727: @ 0x08204727
	.string "ジムリーダーの ナギさんの\nてを わずらわせるまでも ない!\pきみの あいては オレで じゅうぶん!{EOS}"
	.if (. - gText_Rom_204727) > 0x33
	.error "gText_Rom_204727 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204727) < 0x33
	.space 0x33 - (. - gText_Rom_204727)
	.endif
	@ data/maps/FortreeCity_Gym/scripts.inc:187 FortreeCity_Gym_Text_FlintDefeat (+1 aliases)
	.globl gText_Rom_20475A
gText_Rom_20475A: @ 0x0820475A
	.string "ナギさん…… まけました……!{EOS}"
	.if (. - gText_Rom_20475A) > 0x10
	.error "gText_Rom_20475A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20475A) < 0x10
	.space 0x10 - (. - gText_Rom_20475A)
	.endif
	@ data/maps/FortreeCity_Gym/scripts.inc:191 FortreeCity_Gym_Text_FlintPostBattle
	.globl gText_Rom_20476A
gText_Rom_20476A: @ 0x0820476A
	.string "ナギさんは かわいくて つよい……\nほんと さいこうの リーダーだよ!\p……ポッ{EOS}"
	.if (. - gText_Rom_20476A) > 0x29
	.error "gText_Rom_20476A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20476A) < 0x29
	.space 0x29 - (. - gText_Rom_20476A)
	.endif
	@ data/maps/FortreeCity_Gym/scripts.inc:196 FortreeCity_Gym_Text_AshleyIntro (+1 aliases)
	.globl gText_Rom_204793
gText_Rom_204793: @ 0x08204793
	.string "ナギさんの おしえを うけた あたし!\nそう かんたんに たおされないわ!{EOS}"
	.if (. - gText_Rom_204793) > 0x26
	.error "gText_Rom_204793 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204793) < 0x26
	.space 0x26 - (. - gText_Rom_204793)
	.endif
	@ data/maps/FortreeCity_Gym/scripts.inc:200 FortreeCity_Gym_Text_AshleyDefeat (+1 aliases)
	.globl gText_Rom_2047B9
gText_Rom_2047B9: @ 0x082047B9
	.string "たおされ ちゃった……{EOS}"
	.if (. - gText_Rom_2047B9) > 0xc
	.error "gText_Rom_2047B9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2047B9) < 0xc
	.space 0xc - (. - gText_Rom_2047B9)
	.endif
	@ data/maps/FortreeCity_Gym/scripts.inc:203 FortreeCity_Gym_Text_AshleyPostBattle
	.globl gText_Rom_2047C5
gText_Rom_2047C5: @ 0x082047C5
	.string "ナギさんが いてくれるから\nヒワマキの ひとは あんしんして くらせるの{EOS}"
	.if (. - gText_Rom_2047C5) > 0x25
	.error "gText_Rom_2047C5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2047C5) < 0x25
	.space 0x25 - (. - gText_Rom_2047C5)
	.endif
	@ data/maps/FortreeCity_Gym/scripts.inc:207 FortreeCity_Gym_Text_HumbertoIntro (+1 aliases)
	.globl gText_Rom_2047EA
gText_Rom_2047EA: @ 0x082047EA
	.string "ナギさまが たたかわれる ときの\nあの りりしい おかお……\pおまえ なんかにゃ みせられないぜ!{EOS}"
	.if (. - gText_Rom_2047EA) > 0x32
	.error "gText_Rom_2047EA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2047EA) < 0x32
	.space 0x32 - (. - gText_Rom_2047EA)
	.endif
	@ data/maps/FortreeCity_Gym/scripts.inc:213 FortreeCity_Gym_Text_HumbertoDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_20481C
gText_Rom_20481C: @ 0x0820481C
	.string "うう!\nおれでは とめられ なかった{EOS}"
	.if (. - gText_Rom_20481C) != 0x13
	.error "gText_Rom_20481C must retain its original byte length"
	.endif
	.globl gText_Rom_20482A
	.set gText_Rom_20482A, gText_Rom_20481C + 0xe
	.globl gText_Rom_20482B
	.set gText_Rom_20482B, gText_Rom_20481C + 0xf
	@ data/maps/FortreeCity_Gym/scripts.inc:217 FortreeCity_Gym_Text_HumbertoPostBattle
	.globl gText_Rom_20482F
gText_Rom_20482F: @ 0x0820482F
	.string "ナギさまに みとれて\nボロまけ しないように\lちゅういするんだな!{EOS}"
	.if (. - gText_Rom_20482F) > 0x22
	.error "gText_Rom_20482F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20482F) < 0x22
	.space 0x22 - (. - gText_Rom_20482F)
	.endif
	@ data/maps/FortreeCity_Gym/scripts.inc:222 FortreeCity_Gym_Text_DariusIntro (+1 aliases)
	.globl gText_Rom_204851
gText_Rom_204851: @ 0x08204851
	.string "ひこうタイプ って いっても\nいろんな ポケモンが いるんだぜ!\lおまえ それ わかってる?{EOS}"
	.if (. - gText_Rom_204851) > 0x2f
	.error "gText_Rom_204851 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204851) < 0x2f
	.space 0x2f - (. - gText_Rom_204851)
	.endif
	@ data/maps/FortreeCity_Gym/scripts.inc:227 FortreeCity_Gym_Text_DariusDefeat (+1 aliases)
	.globl gText_Rom_204880
gText_Rom_204880: @ 0x08204880
	.string "なかなか わかってるな!{EOS}"
	.if (. - gText_Rom_204880) > 0xd
	.error "gText_Rom_204880 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204880) < 0xd
	.space 0xd - (. - gText_Rom_204880)
	.endif
	@ data/maps/FortreeCity_Gym/scripts.inc:230 FortreeCity_Gym_Text_DariusPostBattle
	.globl gText_Rom_20488D
gText_Rom_20488D: @ 0x0820488D
	.string "ぼくは まけたけど\nナギ リーダーの ポケモンは\lほんと てごわいぞ!{EOS}"
	.if (. - gText_Rom_20488D) > 0x24
	.error "gText_Rom_20488D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20488D) < 0x24
	.space 0x24 - (. - gText_Rom_20488D)
	.endif
	@ data/maps/FortreeCity_Gym/scripts.inc:235 FortreeCity_Gym_Text_WinonaIntro (+1 aliases)
	.globl gText_Rom_2048B1
gText_Rom_2048B1: @ 0x082048B1
	.string "わたしは この ヒワマキ ジムで\nリーダーを している ナギ……\pとりポケモンと こころを かよわし\nいっしょに おおぞらを まい……\pどんな くるしい しょうぶも\nゆうがに かってみせる……\pさあ わたしと ポケモンが おりなす\nかれいな まいを みせましょう!{EOS}"
	.if (. - gText_Rom_2048B1) > 0x85
	.error "gText_Rom_2048B1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2048B1) < 0x85
	.space 0x85 - (. - gText_Rom_2048B1)
	.endif
	@ data/maps/FortreeCity_Gym/scripts.inc:245 FortreeCity_Gym_Text_WinonaDefeat (+1 aliases)
	.globl gText_Rom_204936
gText_Rom_204936: @ 0x08204936
	.string "わたしより かれいに\nポケモンを たたかわせる ひと……\lはじめて であいました……\pその じつりょくを みとめ\nこの ジムバッジを おわたしします!{EOS}"
	.if (. - gText_Rom_204936) > 0x4c
	.error "gText_Rom_204936 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204936) < 0x4c
	.space 0x4c - (. - gText_Rom_204936)
	.endif
	@ data/maps/FortreeCity_Gym/scripts.inc:252 FortreeCity_Gym_Text_ReceivedFeatherBadge
	.globl gText_Rom_204982
gText_Rom_204982: @ 0x08204982
	.string "{PLAYER}は ナギから\nフェザーバッジを もらった!{EOS}"
	.if (. - gText_Rom_204982) > 0x18
	.error "gText_Rom_204982 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204982) < 0x18
	.space 0x18 - (. - gText_Rom_204982)
	.endif
	@ data/maps/FortreeCity_Gym/scripts.inc:256 FortreeCity_Gym_Text_ExplainFeatherBadgeTakeThis
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_20499A
gText_Rom_20499A: @ 0x0820499A
	.string "フェザーバッジを つけてると\nひとから もらった ポケモンでも\lレベル70までの ポケモンなら\lいうことを すなおに きいてくれます!\pひでんわざの そらをとぶ を\nつかえる ようにも なります!\pそして これを\nあなたに プレゼント します{EOS}"
	.if (. - gText_Rom_20499A) != 0x7a
	.error "gText_Rom_20499A must retain its original byte length"
	.endif
	.globl gText_Rom_204A10
	.set gText_Rom_204A10, gText_Rom_20499A + 0x76
	@ data/maps/FortreeCity_Gym/scripts.inc:265 FortreeCity_Gym_Text_ExplainAerialAce
	.globl gText_Rom_204A14
gText_Rom_204A14: @ 0x08204A14
	.string "わざマシン40の なかみは\nつばめがえし!\pその すばやさ……\nどんな ポケモンでも\lよけることは できないでしょう!\p…… …… ……{EOS}"
	.if (. - gText_Rom_204A14) > 0x45
	.error "gText_Rom_204A14 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204A14) < 0x45
	.space 0x45 - (. - gText_Rom_204A14)
	.endif
	@ data/maps/FortreeCity_Gym/scripts.inc:271 FortreeCity_Gym_Text_RegisteredWinona
	.globl gText_Rom_204A59
gText_Rom_204A59: @ 0x08204A59
	.string "ジムリーダー ナギを\nポケナビに とうろく した!{EOS}"
	.if (. - gText_Rom_204A59) > 0x1a
	.error "gText_Rom_204A59 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204A59) < 0x1a
	.space 0x1a - (. - gText_Rom_204A59)
	.endif
	@ data/maps/FortreeCity_Gym/scripts.inc:275 FortreeCity_Gym_Text_WinonaPostBattle
	.globl gText_Rom_204A73
gText_Rom_204A73: @ 0x08204A73
	.string "あなたには まけました けど\pわたしは これからも\nとりポケモンに こだわって いきます{EOS}"
	.if (. - gText_Rom_204A73) > 0x2d
	.error "gText_Rom_204A73 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204A73) < 0x2d
	.space 0x2d - (. - gText_Rom_204A73)
	.endif
	@ data/maps/FortreeCity_Gym/scripts.inc:279 FortreeCity_Gym_Text_GymStatue
	.globl gText_Rom_204AA0
gText_Rom_204AA0: @ 0x08204AA0
	.string "ヒワマキシティ ポケモンジム{EOS}"
	.if (. - gText_Rom_204AA0) > 0xf
	.error "gText_Rom_204AA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204AA0) < 0xf
	.space 0xf - (. - gText_Rom_204AA0)
	.endif
	@ data/maps/FortreeCity_Gym/scripts.inc:282 FortreeCity_Gym_Text_GymStatueCertified
	.globl gText_Rom_204AAF
gText_Rom_204AAF: @ 0x08204AAF
	.string "ヒワマキシティ ポケモンジム\pナギ にんてい トレーナー!\n{PLAYER}{EOS}"
	.if (. - gText_Rom_204AAF) > 0x21
	.error "gText_Rom_204AAF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204AAF) < 0x21
	.space 0x21 - (. - gText_Rom_204AAF)
	.endif
	@ data/maps/FortreeCity_Gym/scripts.inc:287 FortreeCity_Gym_Text_WinonaPreRematch (+1 aliases)
	.globl gText_Rom_204AD0
gText_Rom_204AD0: @ 0x08204AD0
	.string "ナギ『ひとは ちじょうに いる かぎり\nいんりょくから のがれることは できない\pでも ぜんりょくで はばたけば\nそらを とぶことは できるのです\pチャンピオンにまで のぼりつめた\nあなたの じつりょく\lもういちど みせて いただきますわ!{EOS}"
	.if (. - gText_Rom_204AD0) > 0x79
	.error "gText_Rom_204AD0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204AD0) < 0x79
	.space 0x79 - (. - gText_Rom_204AD0)
	.endif
	@ data/maps/FortreeCity_Gym/scripts.inc:297 FortreeCity_Gym_Text_WinonaRematchDefeat (+1 aliases)
	.globl gText_Rom_204B49
gText_Rom_204B49: @ 0x08204B49
	.string "やはり とどかなかった……{EOS}"
	.if (. - gText_Rom_204B49) > 0xe
	.error "gText_Rom_204B49 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204B49) < 0xe
	.space 0xe - (. - gText_Rom_204B49)
	.endif
	@ data/maps/FortreeCity_Gym/scripts.inc:300 FortreeCity_Gym_Text_WinonaPostRematch
	.globl gText_Rom_204B57
gText_Rom_204B57: @ 0x08204B57
	.string "ナギ『たとえ しょうぶに まけても\nこころの つばさが おれて いなければ\lなんどでも うかび あがれる……\pわたしは そう しんじて いますよ!{EOS}"
	.if (. - gText_Rom_204B57) > 0x4a
	.error "gText_Rom_204B57 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204B57) < 0x4a
	.space 0x4a - (. - gText_Rom_204B57)
	.endif
	@ data/maps/FortreeCity_Gym/scripts.inc:307 FortreeCity_Gym_Text_WinonaRematchNeedTwoMons (+1 aliases)
	.globl gText_Rom_204BA1
gText_Rom_204BA1: @ 0x08204BA1
	.string "ナギ『ひとは ちじょうに いる かぎり\nいんりょくから のがれることは できない\pでも ぜんりょくで はばたけば\nそらを とぶことは できるのです\pチャンピオンにまで のぼりつめた\nあなたの じつりょく\lもういちど みせて いただきますわ!\n……あら? たたかえる ポケモンを\n1ひきしか もっていませんね\pせめて 2ひき いじょうの\nポケモンを もって また きてください{EOS}"
	.if (. - gText_Rom_204BA1) > 0xbc
	.error "gText_Rom_204BA1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204BA1) < 0xbc
	.space 0xbc - (. - gText_Rom_204BA1)
	.endif
	@ analyzed canonical ROM range 0x08204C5D-0x08204C94
	@ semantic recovery: script_data; byte-verified against linked ROM
gMapScriptDispatch_FortreeCity_PokemonCenter_1F_OnTransition_OnResume: @ 0x08204C5D
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_08204C68
	.byte 0x05
	.4byte SharedMapScript_0824790F
	.byte 0
EventScript_JP_08204C68: @ 0x08204C68
	setrespawn 0x0007
	end
.globl EventScript_JP_08204C6C
EventScript_JP_08204C6C: @ 0x08204C6C
	setvar 0x800B, 0x0001
	call 0x082429B8
	waitmessage
	waitbuttonpress
	release
	end
.globl EventScript_JP_08204C7A
EventScript_JP_08204C7A: @ 0x08204C7A
	loadword 0x00, gText_Rom_204C95
	callstd 0x02
	end
.globl EventScript_JP_08204C83
EventScript_JP_08204C83: @ 0x08204C83
	loadword 0x00, gText_Rom_204CCE
	callstd 0x02
	end
.globl EventScript_JP_08204C8C
EventScript_JP_08204C8C: @ 0x08204C8C
	loadword 0x00, gText_Rom_204D21
	callstd 0x02
	end
