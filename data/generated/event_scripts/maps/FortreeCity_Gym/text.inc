	@ data/maps/FortreeCity_Gym/scripts.inc:137 FortreeCity_Gym_Text_GymGuideAdvice
	.globl FortreeCity_Gym_Text_GymGuideAdvice
FortreeCity_Gym_Text_GymGuideAdvice: @ 0x08204578
	.string "げんき しとぉや!!\nチャンピオンを めざす {PLAYER}!!\pヒワマキシティ ジムの リーダー ナギは\nひこうタイプ ポケモンの つかいてだ!\pこの かいてんとびら だらけの\nジムの おくで\pかのじょは あらたな チャレンジャーが\nはばたこうと するのを まっている!\pじゃ きばってこォー!!{EOS}"
	.if (. - FortreeCity_Gym_Text_GymGuideAdvice) > 0x91
	.error "FortreeCity_Gym_Text_GymGuideAdvice may not grow beyond its original slot"
	.endif
	.if (. - FortreeCity_Gym_Text_GymGuideAdvice) < 0x91
	.space 0x91 - (. - FortreeCity_Gym_Text_GymGuideAdvice)
	.endif
	@ data/maps/FortreeCity_Gym/scripts.inc:148 FortreeCity_Gym_Text_GymGuidePostVictory
	.globl FortreeCity_Gym_Text_GymGuidePostVictory
FortreeCity_Gym_Text_GymGuidePostVictory: @ 0x08204609
	.string "えんやっと きみは はばたいたッ!{EOS}"
	.if (. - FortreeCity_Gym_Text_GymGuidePostVictory) > 0x12
	.error "FortreeCity_Gym_Text_GymGuidePostVictory may not grow beyond its original slot"
	.endif
	.if (. - FortreeCity_Gym_Text_GymGuidePostVictory) < 0x12
	.space 0x12 - (. - FortreeCity_Gym_Text_GymGuidePostVictory)
	.endif
	@ data/maps/FortreeCity_Gym/scripts.inc:152 FortreeCity_Gym_Text_JaredIntro (+1 aliases)
	.globl FortreeCity_Gym_Text_JaredIntro
FortreeCity_Gym_Text_JaredIntro: @ 0x0820461B
	.string "かれいな とりポケモンの たたかいを\nみせて やるぜっ!{EOS}"
	.if (. - FortreeCity_Gym_Text_JaredIntro) > 0x1d
	.error "FortreeCity_Gym_Text_JaredIntro may not grow beyond its original slot"
	.endif
	.if (. - FortreeCity_Gym_Text_JaredIntro) < 0x1d
	.space 0x1d - (. - FortreeCity_Gym_Text_JaredIntro)
	.endif
	@ data/maps/FortreeCity_Gym/scripts.inc:156 FortreeCity_Gym_Text_JaredDefeat (+1 aliases)
	.globl FortreeCity_Gym_Text_JaredDefeat
FortreeCity_Gym_Text_JaredDefeat: @ 0x08204638
	.string "きみ…… つよいんだな……{EOS}"
	.if (. - FortreeCity_Gym_Text_JaredDefeat) > 0xe
	.error "FortreeCity_Gym_Text_JaredDefeat may not grow beyond its original slot"
	.endif
	.if (. - FortreeCity_Gym_Text_JaredDefeat) < 0xe
	.space 0xe - (. - FortreeCity_Gym_Text_JaredDefeat)
	.endif
	@ data/maps/FortreeCity_Gym/scripts.inc:160 FortreeCity_Gym_Text_JaredPostBattle
	.globl FortreeCity_Gym_Text_JaredPostBattle
FortreeCity_Gym_Text_JaredPostBattle: @ 0x08204646
	.string "トレーナーは あたまの かいてんも\nはやく なければ つとまらないぜ!\pきみは リーダーの ところまで\nちゃんと たどりつく ことが できるかい?{EOS}"
	.if (. - FortreeCity_Gym_Text_JaredPostBattle) > 0x4a
	.error "FortreeCity_Gym_Text_JaredPostBattle may not grow beyond its original slot"
	.endif
	.if (. - FortreeCity_Gym_Text_JaredPostBattle) < 0x4a
	.space 0x4a - (. - FortreeCity_Gym_Text_JaredPostBattle)
	.endif
	@ data/maps/FortreeCity_Gym/scripts.inc:166 FortreeCity_Gym_Text_EdwardoIntro (+1 aliases)
	.globl FortreeCity_Gym_Text_EdwardoIntro
FortreeCity_Gym_Text_EdwardoIntro: @ 0x08204690
	.string "とりポケモンを あいする ものは\nこの ジムを もくひょうと している!\pヒワマキ ジムの いちいん として\nまける わけには いかないんだ!{EOS}"
	.if (. - FortreeCity_Gym_Text_EdwardoIntro) > 0x48
	.error "FortreeCity_Gym_Text_EdwardoIntro may not grow beyond its original slot"
	.endif
	.if (. - FortreeCity_Gym_Text_EdwardoIntro) < 0x48
	.space 0x48 - (. - FortreeCity_Gym_Text_EdwardoIntro)
	.endif
	@ data/maps/FortreeCity_Gym/scripts.inc:172 FortreeCity_Gym_Text_EdwardoDefeat (+1 aliases)
	.globl FortreeCity_Gym_Text_EdwardoDefeat
FortreeCity_Gym_Text_EdwardoDefeat: @ 0x082046D8
	.string "オレには にが おもすぎたか……!{EOS}"
	.if (. - FortreeCity_Gym_Text_EdwardoDefeat) > 0x12
	.error "FortreeCity_Gym_Text_EdwardoDefeat may not grow beyond its original slot"
	.endif
	.if (. - FortreeCity_Gym_Text_EdwardoDefeat) < 0x12
	.space 0x12 - (. - FortreeCity_Gym_Text_EdwardoDefeat)
	.endif
	@ data/maps/FortreeCity_Gym/scripts.inc:176 FortreeCity_Gym_Text_EdwardoPostBattle
	.globl FortreeCity_Gym_Text_EdwardoPostBattle
FortreeCity_Gym_Text_EdwardoPostBattle: @ 0x082046EA
	.string "せかいは ひろい\nつよい トレーナーは たくさん いる\pオレも ここで しゅぎょうを つづけて\nつよくなって みせるよ!{EOS}"
	.if (. - FortreeCity_Gym_Text_EdwardoPostBattle) > 0x3d
	.error "FortreeCity_Gym_Text_EdwardoPostBattle may not grow beyond its original slot"
	.endif
	.if (. - FortreeCity_Gym_Text_EdwardoPostBattle) < 0x3d
	.space 0x3d - (. - FortreeCity_Gym_Text_EdwardoPostBattle)
	.endif
	@ data/maps/FortreeCity_Gym/scripts.inc:182 FortreeCity_Gym_Text_FlintIntro (+1 aliases)
	.globl FortreeCity_Gym_Text_FlintIntro
FortreeCity_Gym_Text_FlintIntro: @ 0x08204727
	.string "ジムリーダーの ナギさんの\nてを わずらわせるまでも ない!\pきみの あいては オレで じゅうぶん!{EOS}"
	.if (. - FortreeCity_Gym_Text_FlintIntro) > 0x33
	.error "FortreeCity_Gym_Text_FlintIntro may not grow beyond its original slot"
	.endif
	.if (. - FortreeCity_Gym_Text_FlintIntro) < 0x33
	.space 0x33 - (. - FortreeCity_Gym_Text_FlintIntro)
	.endif
	@ data/maps/FortreeCity_Gym/scripts.inc:187 FortreeCity_Gym_Text_FlintDefeat (+1 aliases)
	.globl FortreeCity_Gym_Text_FlintDefeat
FortreeCity_Gym_Text_FlintDefeat: @ 0x0820475A
	.string "ナギさん…… まけました……!{EOS}"
	.if (. - FortreeCity_Gym_Text_FlintDefeat) > 0x10
	.error "FortreeCity_Gym_Text_FlintDefeat may not grow beyond its original slot"
	.endif
	.if (. - FortreeCity_Gym_Text_FlintDefeat) < 0x10
	.space 0x10 - (. - FortreeCity_Gym_Text_FlintDefeat)
	.endif
	@ data/maps/FortreeCity_Gym/scripts.inc:191 FortreeCity_Gym_Text_FlintPostBattle
	.globl FortreeCity_Gym_Text_FlintPostBattle
FortreeCity_Gym_Text_FlintPostBattle: @ 0x0820476A
	.string "ナギさんは かわいくて つよい……\nほんと さいこうの リーダーだよ!\p……ポッ{EOS}"
	.if (. - FortreeCity_Gym_Text_FlintPostBattle) > 0x29
	.error "FortreeCity_Gym_Text_FlintPostBattle may not grow beyond its original slot"
	.endif
	.if (. - FortreeCity_Gym_Text_FlintPostBattle) < 0x29
	.space 0x29 - (. - FortreeCity_Gym_Text_FlintPostBattle)
	.endif
	@ data/maps/FortreeCity_Gym/scripts.inc:196 FortreeCity_Gym_Text_AshleyIntro (+1 aliases)
	.globl FortreeCity_Gym_Text_AshleyIntro
FortreeCity_Gym_Text_AshleyIntro: @ 0x08204793
	.string "ナギさんの おしえを うけた あたし!\nそう かんたんに たおされないわ!{EOS}"
	.if (. - FortreeCity_Gym_Text_AshleyIntro) > 0x26
	.error "FortreeCity_Gym_Text_AshleyIntro may not grow beyond its original slot"
	.endif
	.if (. - FortreeCity_Gym_Text_AshleyIntro) < 0x26
	.space 0x26 - (. - FortreeCity_Gym_Text_AshleyIntro)
	.endif
	@ data/maps/FortreeCity_Gym/scripts.inc:200 FortreeCity_Gym_Text_AshleyDefeat (+1 aliases)
	.globl FortreeCity_Gym_Text_AshleyDefeat
FortreeCity_Gym_Text_AshleyDefeat: @ 0x082047B9
	.string "たおされ ちゃった……{EOS}"
	.if (. - FortreeCity_Gym_Text_AshleyDefeat) > 0xc
	.error "FortreeCity_Gym_Text_AshleyDefeat may not grow beyond its original slot"
	.endif
	.if (. - FortreeCity_Gym_Text_AshleyDefeat) < 0xc
	.space 0xc - (. - FortreeCity_Gym_Text_AshleyDefeat)
	.endif
	@ data/maps/FortreeCity_Gym/scripts.inc:203 FortreeCity_Gym_Text_AshleyPostBattle
	.globl FortreeCity_Gym_Text_AshleyPostBattle
FortreeCity_Gym_Text_AshleyPostBattle: @ 0x082047C5
	.string "ナギさんが いてくれるから\nヒワマキの ひとは あんしんして くらせるの{EOS}"
	.if (. - FortreeCity_Gym_Text_AshleyPostBattle) > 0x25
	.error "FortreeCity_Gym_Text_AshleyPostBattle may not grow beyond its original slot"
	.endif
	.if (. - FortreeCity_Gym_Text_AshleyPostBattle) < 0x25
	.space 0x25 - (. - FortreeCity_Gym_Text_AshleyPostBattle)
	.endif
	@ data/maps/FortreeCity_Gym/scripts.inc:207 FortreeCity_Gym_Text_HumbertoIntro (+1 aliases)
	.globl FortreeCity_Gym_Text_HumbertoIntro
FortreeCity_Gym_Text_HumbertoIntro: @ 0x082047EA
	.string "ナギさまが たたかわれる ときの\nあの りりしい おかお……\pおまえ なんかにゃ みせられないぜ!{EOS}"
	.if (. - FortreeCity_Gym_Text_HumbertoIntro) > 0x32
	.error "FortreeCity_Gym_Text_HumbertoIntro may not grow beyond its original slot"
	.endif
	.if (. - FortreeCity_Gym_Text_HumbertoIntro) < 0x32
	.space 0x32 - (. - FortreeCity_Gym_Text_HumbertoIntro)
	.endif
	@ data/maps/FortreeCity_Gym/scripts.inc:213 FortreeCity_Gym_Text_HumbertoDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl FortreeCity_Gym_Text_HumbertoDefeat
FortreeCity_Gym_Text_HumbertoDefeat: @ 0x0820481C
	.string "うう!\nおれでは とめられ なかった{EOS}"
	.if (. - FortreeCity_Gym_Text_HumbertoDefeat) != 0x13
	.error "FortreeCity_Gym_Text_HumbertoDefeat must retain its original byte length"
	.endif
	@ data/maps/FortreeCity_Gym/scripts.inc:217 FortreeCity_Gym_Text_HumbertoPostBattle
	.globl FortreeCity_Gym_Text_HumbertoPostBattle
FortreeCity_Gym_Text_HumbertoPostBattle: @ 0x0820482F
	.string "ナギさまに みとれて\nボロまけ しないように\lちゅういするんだな!{EOS}"
	.if (. - FortreeCity_Gym_Text_HumbertoPostBattle) > 0x22
	.error "FortreeCity_Gym_Text_HumbertoPostBattle may not grow beyond its original slot"
	.endif
	.if (. - FortreeCity_Gym_Text_HumbertoPostBattle) < 0x22
	.space 0x22 - (. - FortreeCity_Gym_Text_HumbertoPostBattle)
	.endif
	@ data/maps/FortreeCity_Gym/scripts.inc:222 FortreeCity_Gym_Text_DariusIntro (+1 aliases)
	.globl FortreeCity_Gym_Text_DariusIntro
FortreeCity_Gym_Text_DariusIntro: @ 0x08204851
	.string "ひこうタイプ って いっても\nいろんな ポケモンが いるんだぜ!\lおまえ それ わかってる?{EOS}"
	.if (. - FortreeCity_Gym_Text_DariusIntro) > 0x2f
	.error "FortreeCity_Gym_Text_DariusIntro may not grow beyond its original slot"
	.endif
	.if (. - FortreeCity_Gym_Text_DariusIntro) < 0x2f
	.space 0x2f - (. - FortreeCity_Gym_Text_DariusIntro)
	.endif
	@ data/maps/FortreeCity_Gym/scripts.inc:227 FortreeCity_Gym_Text_DariusDefeat (+1 aliases)
	.globl FortreeCity_Gym_Text_DariusDefeat
FortreeCity_Gym_Text_DariusDefeat: @ 0x08204880
	.string "なかなか わかってるな!{EOS}"
	.if (. - FortreeCity_Gym_Text_DariusDefeat) > 0xd
	.error "FortreeCity_Gym_Text_DariusDefeat may not grow beyond its original slot"
	.endif
	.if (. - FortreeCity_Gym_Text_DariusDefeat) < 0xd
	.space 0xd - (. - FortreeCity_Gym_Text_DariusDefeat)
	.endif
	@ data/maps/FortreeCity_Gym/scripts.inc:230 FortreeCity_Gym_Text_DariusPostBattle
	.globl FortreeCity_Gym_Text_DariusPostBattle
FortreeCity_Gym_Text_DariusPostBattle: @ 0x0820488D
	.string "ぼくは まけたけど\nナギ リーダーの ポケモンは\lほんと てごわいぞ!{EOS}"
	.if (. - FortreeCity_Gym_Text_DariusPostBattle) > 0x24
	.error "FortreeCity_Gym_Text_DariusPostBattle may not grow beyond its original slot"
	.endif
	.if (. - FortreeCity_Gym_Text_DariusPostBattle) < 0x24
	.space 0x24 - (. - FortreeCity_Gym_Text_DariusPostBattle)
	.endif
	@ data/maps/FortreeCity_Gym/scripts.inc:235 FortreeCity_Gym_Text_WinonaIntro (+1 aliases)
	.globl FortreeCity_Gym_Text_WinonaIntro
FortreeCity_Gym_Text_WinonaIntro: @ 0x082048B1
	.string "わたしは この ヒワマキ ジムで\nリーダーを している ナギ……\pとりポケモンと こころを かよわし\nいっしょに おおぞらを まい……\pどんな くるしい しょうぶも\nゆうがに かってみせる……\pさあ わたしと ポケモンが おりなす\nかれいな まいを みせましょう!{EOS}"
	.if (. - FortreeCity_Gym_Text_WinonaIntro) > 0x85
	.error "FortreeCity_Gym_Text_WinonaIntro may not grow beyond its original slot"
	.endif
	.if (. - FortreeCity_Gym_Text_WinonaIntro) < 0x85
	.space 0x85 - (. - FortreeCity_Gym_Text_WinonaIntro)
	.endif
	@ data/maps/FortreeCity_Gym/scripts.inc:245 FortreeCity_Gym_Text_WinonaDefeat (+1 aliases)
	.globl FortreeCity_Gym_Text_WinonaDefeat
FortreeCity_Gym_Text_WinonaDefeat: @ 0x08204936
	.string "わたしより かれいに\nポケモンを たたかわせる ひと……\lはじめて であいました……\pその じつりょくを みとめ\nこの ジムバッジを おわたしします!{EOS}"
	.if (. - FortreeCity_Gym_Text_WinonaDefeat) > 0x4c
	.error "FortreeCity_Gym_Text_WinonaDefeat may not grow beyond its original slot"
	.endif
	.if (. - FortreeCity_Gym_Text_WinonaDefeat) < 0x4c
	.space 0x4c - (. - FortreeCity_Gym_Text_WinonaDefeat)
	.endif
	@ data/maps/FortreeCity_Gym/scripts.inc:252 FortreeCity_Gym_Text_ReceivedFeatherBadge
	.globl FortreeCity_Gym_Text_ReceivedFeatherBadge
FortreeCity_Gym_Text_ReceivedFeatherBadge: @ 0x08204982
	.string "{PLAYER}は ナギから\nフェザーバッジを もらった!{EOS}"
	.if (. - FortreeCity_Gym_Text_ReceivedFeatherBadge) > 0x18
	.error "FortreeCity_Gym_Text_ReceivedFeatherBadge may not grow beyond its original slot"
	.endif
	.if (. - FortreeCity_Gym_Text_ReceivedFeatherBadge) < 0x18
	.space 0x18 - (. - FortreeCity_Gym_Text_ReceivedFeatherBadge)
	.endif
	@ data/maps/FortreeCity_Gym/scripts.inc:256 FortreeCity_Gym_Text_ExplainFeatherBadgeTakeThis
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl FortreeCity_Gym_Text_ExplainFeatherBadgeTakeThis
FortreeCity_Gym_Text_ExplainFeatherBadgeTakeThis: @ 0x0820499A
	.string "フェザーバッジを つけてると\nひとから もらった ポケモンでも\lレベル70までの ポケモンなら\lいうことを すなおに きいてくれます!\pひでんわざの そらをとぶ を\nつかえる ようにも なります!\pそして これを\nあなたに プレゼント します{EOS}"
	.if (. - FortreeCity_Gym_Text_ExplainFeatherBadgeTakeThis) != 0x7a
	.error "FortreeCity_Gym_Text_ExplainFeatherBadgeTakeThis must retain its original byte length"
	.endif
	@ data/maps/FortreeCity_Gym/scripts.inc:265 FortreeCity_Gym_Text_ExplainAerialAce
	.globl FortreeCity_Gym_Text_ExplainAerialAce
FortreeCity_Gym_Text_ExplainAerialAce: @ 0x08204A14
	.string "わざマシン40の なかみは\nつばめがえし!\pその すばやさ……\nどんな ポケモンでも\lよけることは できないでしょう!\p…… …… ……{EOS}"
	.if (. - FortreeCity_Gym_Text_ExplainAerialAce) > 0x45
	.error "FortreeCity_Gym_Text_ExplainAerialAce may not grow beyond its original slot"
	.endif
	.if (. - FortreeCity_Gym_Text_ExplainAerialAce) < 0x45
	.space 0x45 - (. - FortreeCity_Gym_Text_ExplainAerialAce)
	.endif
	@ data/maps/FortreeCity_Gym/scripts.inc:271 FortreeCity_Gym_Text_RegisteredWinona
	.globl FortreeCity_Gym_Text_RegisteredWinona
FortreeCity_Gym_Text_RegisteredWinona: @ 0x08204A59
	.string "ジムリーダー ナギを\nポケナビに とうろく した!{EOS}"
	.if (. - FortreeCity_Gym_Text_RegisteredWinona) > 0x1a
	.error "FortreeCity_Gym_Text_RegisteredWinona may not grow beyond its original slot"
	.endif
	.if (. - FortreeCity_Gym_Text_RegisteredWinona) < 0x1a
	.space 0x1a - (. - FortreeCity_Gym_Text_RegisteredWinona)
	.endif
	@ data/maps/FortreeCity_Gym/scripts.inc:275 FortreeCity_Gym_Text_WinonaPostBattle
	.globl FortreeCity_Gym_Text_WinonaPostBattle
FortreeCity_Gym_Text_WinonaPostBattle: @ 0x08204A73
	.string "あなたには まけました けど\pわたしは これからも\nとりポケモンに こだわって いきます{EOS}"
	.if (. - FortreeCity_Gym_Text_WinonaPostBattle) > 0x2d
	.error "FortreeCity_Gym_Text_WinonaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - FortreeCity_Gym_Text_WinonaPostBattle) < 0x2d
	.space 0x2d - (. - FortreeCity_Gym_Text_WinonaPostBattle)
	.endif
	@ data/maps/FortreeCity_Gym/scripts.inc:279 FortreeCity_Gym_Text_GymStatue
	.globl FortreeCity_Gym_Text_GymStatue
FortreeCity_Gym_Text_GymStatue: @ 0x08204AA0
	.string "ヒワマキシティ ポケモンジム{EOS}"
	.if (. - FortreeCity_Gym_Text_GymStatue) > 0xf
	.error "FortreeCity_Gym_Text_GymStatue may not grow beyond its original slot"
	.endif
	.if (. - FortreeCity_Gym_Text_GymStatue) < 0xf
	.space 0xf - (. - FortreeCity_Gym_Text_GymStatue)
	.endif
	@ data/maps/FortreeCity_Gym/scripts.inc:282 FortreeCity_Gym_Text_GymStatueCertified
	.globl FortreeCity_Gym_Text_GymStatueCertified
FortreeCity_Gym_Text_GymStatueCertified: @ 0x08204AAF
	.string "ヒワマキシティ ポケモンジム\pナギ にんてい トレーナー!\n{PLAYER}{EOS}"
	.if (. - FortreeCity_Gym_Text_GymStatueCertified) > 0x21
	.error "FortreeCity_Gym_Text_GymStatueCertified may not grow beyond its original slot"
	.endif
	.if (. - FortreeCity_Gym_Text_GymStatueCertified) < 0x21
	.space 0x21 - (. - FortreeCity_Gym_Text_GymStatueCertified)
	.endif
	@ data/maps/FortreeCity_Gym/scripts.inc:287 FortreeCity_Gym_Text_WinonaPreRematch (+1 aliases)
	.globl FortreeCity_Gym_Text_WinonaPreRematch
FortreeCity_Gym_Text_WinonaPreRematch: @ 0x08204AD0
	.string "ナギ『ひとは ちじょうに いる かぎり\nいんりょくから のがれることは できない\pでも ぜんりょくで はばたけば\nそらを とぶことは できるのです\pチャンピオンにまで のぼりつめた\nあなたの じつりょく\lもういちど みせて いただきますわ!{EOS}"
	.if (. - FortreeCity_Gym_Text_WinonaPreRematch) > 0x79
	.error "FortreeCity_Gym_Text_WinonaPreRematch may not grow beyond its original slot"
	.endif
	.if (. - FortreeCity_Gym_Text_WinonaPreRematch) < 0x79
	.space 0x79 - (. - FortreeCity_Gym_Text_WinonaPreRematch)
	.endif
	@ data/maps/FortreeCity_Gym/scripts.inc:297 FortreeCity_Gym_Text_WinonaRematchDefeat (+1 aliases)
	.globl FortreeCity_Gym_Text_WinonaRematchDefeat
FortreeCity_Gym_Text_WinonaRematchDefeat: @ 0x08204B49
	.string "やはり とどかなかった……{EOS}"
	.if (. - FortreeCity_Gym_Text_WinonaRematchDefeat) > 0xe
	.error "FortreeCity_Gym_Text_WinonaRematchDefeat may not grow beyond its original slot"
	.endif
	.if (. - FortreeCity_Gym_Text_WinonaRematchDefeat) < 0xe
	.space 0xe - (. - FortreeCity_Gym_Text_WinonaRematchDefeat)
	.endif
	@ data/maps/FortreeCity_Gym/scripts.inc:300 FortreeCity_Gym_Text_WinonaPostRematch
	.globl FortreeCity_Gym_Text_WinonaPostRematch
FortreeCity_Gym_Text_WinonaPostRematch: @ 0x08204B57
	.string "ナギ『たとえ しょうぶに まけても\nこころの つばさが おれて いなければ\lなんどでも うかび あがれる……\pわたしは そう しんじて いますよ!{EOS}"
	.if (. - FortreeCity_Gym_Text_WinonaPostRematch) > 0x4a
	.error "FortreeCity_Gym_Text_WinonaPostRematch may not grow beyond its original slot"
	.endif
	.if (. - FortreeCity_Gym_Text_WinonaPostRematch) < 0x4a
	.space 0x4a - (. - FortreeCity_Gym_Text_WinonaPostRematch)
	.endif
	@ data/maps/FortreeCity_Gym/scripts.inc:307 FortreeCity_Gym_Text_WinonaRematchNeedTwoMons (+1 aliases)
	.globl FortreeCity_Gym_Text_WinonaRematchNeedTwoMons
FortreeCity_Gym_Text_WinonaRematchNeedTwoMons: @ 0x08204BA1
	.string "ナギ『ひとは ちじょうに いる かぎり\nいんりょくから のがれることは できない\pでも ぜんりょくで はばたけば\nそらを とぶことは できるのです\pチャンピオンにまで のぼりつめた\nあなたの じつりょく\lもういちど みせて いただきますわ!\n……あら? たたかえる ポケモンを\n1ひきしか もっていませんね\pせめて 2ひき いじょうの\nポケモンを もって また きてください{EOS}"
	.if (. - FortreeCity_Gym_Text_WinonaRematchNeedTwoMons) > 0xbc
	.error "FortreeCity_Gym_Text_WinonaRematchNeedTwoMons may not grow beyond its original slot"
	.endif
	.if (. - FortreeCity_Gym_Text_WinonaRematchNeedTwoMons) < 0xbc
	.space 0xbc - (. - FortreeCity_Gym_Text_WinonaRematchNeedTwoMons)
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
	loadword 0x00, FortreeCity_PokemonCenter_1F_Text_GoToSafariZone
	callstd 0x02
	end
.globl EventScript_JP_08204C83
EventScript_JP_08204C83: @ 0x08204C83
	loadword 0x00, FortreeCity_PokemonCenter_1F_Text_RecordCornerIsNeat
	callstd 0x02
	end
.globl EventScript_JP_08204C8C
EventScript_JP_08204C8C: @ 0x08204C8C
	loadword 0x00, FortreeCity_PokemonCenter_1F_Text_DoYouKnowAboutPokenav
	callstd 0x02
	end
