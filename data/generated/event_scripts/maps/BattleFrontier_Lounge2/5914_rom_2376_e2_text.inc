	@ data/maps/BattleFrontier_Lounge2/scripts.inc:115 BattleFrontier_Lounge2_Text_FrontierManiacIntro
	.globl gText_Rom_236B0A
gText_Rom_236B0A: @ 0x08236B0A
	.string "やあやあ ぼくは バトルフロンティアいちの\nじょうほうつう!\pフロンティアマニアって よんでくれよ!\pきみ トレーナーだろ?\pぼくが あつめた バトルフロンティアの\nホットな じょうほうを おしえて あげるよ!"
	.byte EOS
	.if (. - gText_Rom_236B0A) > 0x6a
	.error "gText_Rom_236B0A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_236B0A) < 0x6a
	.space 0x6a - (. - gText_Rom_236B0A)
	.endif
	@ data/maps/BattleFrontier_Lounge2/scripts.inc:118 BattleFrontier_Lounge2_Text_SwingByForTheLatestWord
	.globl gText_Rom_236B74
gText_Rom_236B74: @ 0x08236B74
	.string "やあやあ また ぼくの じょうほうを\nききに きたんだね! しかたないなー!"
	.byte EOS
	.if (. - gText_Rom_236B74) > 0x27
	.error "gText_Rom_236B74 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_236B74) < 0x27
	.space 0x27 - (. - gText_Rom_236B74)
	.endif
	@ data/maps/BattleFrontier_Lounge2/scripts.inc:122 BattleFrontier_Lounge2_Text_MyInformationsBeenUsefulRight
	.globl gText_Rom_236B9B
gText_Rom_236B9B: @ 0x08236B9B
	.string "どう? どう? どう?\pぼくの じょうほうは もちろん\nすごーく さんこうに なってるだろ?"
	.byte EOS
	.if (. - gText_Rom_236B9B) > 0x2f
	.error "gText_Rom_236B9B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_236B9B) < 0x2f
	.space 0x2f - (. - gText_Rom_236B9B)
	.endif
	@ data/maps/BattleFrontier_Lounge2/scripts.inc:125 BattleFrontier_Lounge2_Text_FacilityIsHottest
	.globl gText_Rom_236BCA
gText_Rom_236BCA: @ 0x08236BCA
	.string "そうだねぇ……\pいまは {STR_VAR_1}が\nアッつい みたいだね!"
	.byte EOS
	.if (. - gText_Rom_236BCA) > 0x1c
	.error "gText_Rom_236BCA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_236BCA) < 0x1c
	.space 0x1c - (. - gText_Rom_236BCA)
	.endif
	@ data/maps/BattleFrontier_Lounge2/scripts.inc:128 BattleFrontier_Lounge2_Text_BattleTowerIsHottest
	.globl gText_Rom_236BE6
gText_Rom_236BE6: @ 0x08236BE6
	.string "そうだねぇ……\pいまは バトルタワー{STR_VAR_1}が\nアッつい みたいだね!"
	.byte EOS
	.if (. - gText_Rom_236BE6) > 0x22
	.error "gText_Rom_236BE6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_236BE6) < 0x22
	.space 0x22 - (. - gText_Rom_236BE6)
	.endif
	@ data/maps/BattleFrontier_Lounge2/scripts.inc:131 BattleFrontier_Lounge2_Text_SalonMaidenIsThere
	.globl gText_Rom_236C08
gText_Rom_236C08: @ 0x08236C08
	.string "しってるかい?\pあそこは エニシダが\nフロンティアブレーンって よんでる\lトレーナーの うちの ひとり……\lタワータイクーンって いう\lなぞの トレーナーが おさめてるのさ!"
	.byte EOS
	.if (. - gText_Rom_236C08) > 0x58
	.error "gText_Rom_236C08 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_236C08) < 0x58
	.space 0x58 - (. - gText_Rom_236C08)
	.endif
	@ data/maps/BattleFrontier_Lounge2/scripts.inc:134 BattleFrontier_Lounge2_Text_SalonMaidenSilverMons
	.globl gText_Rom_236C60
gText_Rom_236C60: @ 0x08236C60
	.string "きみは タワータイクーンと\nたたかったこと あるかい?\pやつは あいての ちからを はかるとき\nエスパーの ねんりきポケモン!\lほのおの かざんポケモン!\lノーマルの いねむりポケモンの\l3ひきを つかってくる らしいぜ!"
	.byte EOS
	.if (. - gText_Rom_236C60) > 0x70
	.error "gText_Rom_236C60 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_236C60) < 0x70
	.space 0x70 - (. - gText_Rom_236C60)
	.endif
	@ data/maps/BattleFrontier_Lounge2/scripts.inc:137 BattleFrontier_Lounge2_Text_SalonMaidenGoldMons
	.globl gText_Rom_236CD0
gText_Rom_236CD0: @ 0x08236CD0
	.string "きみは ほんきの タワータイクーンと\nたたかったこと あるかい?\pやつは ほんとの ちからで たたかうとき\nドラゴンと エスパーの むげんポケモン!\lでんきの いかづちポケモン!\lノーマルの いねむりポケモンの\l3ひきを つかってくる らしいぜ!"
	.byte EOS
	.if (. - gText_Rom_236CD0) > 0x7c
	.error "gText_Rom_236CD0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_236CD0) < 0x7c
	.space 0x7c - (. - gText_Rom_236CD0)
	.endif
	@ data/maps/BattleFrontier_Lounge2/scripts.inc:140 BattleFrontier_Lounge2_Text_DomeAceIsThere
	.globl gText_Rom_236D4C
gText_Rom_236D4C: @ 0x08236D4C
	.string "しってるかい?\pあそこは エニシダが\nフロンティアブレーンって よんでる\lトレーナーの うちの ひとり……\lドームスーパースターって いう\lどハデな トレーナーが おさめてるのさ!"
	.byte EOS
	.if (. - gText_Rom_236D4C) > 0x5b
	.error "gText_Rom_236D4C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_236D4C) < 0x5b
	.space 0x5b - (. - gText_Rom_236D4C)
	.endif
	@ data/maps/BattleFrontier_Lounge2/scripts.inc:143 BattleFrontier_Lounge2_Text_DomeAceSilverMons
	.globl gText_Rom_236DA7
gText_Rom_236DA7: @ 0x08236DA7
	.string "きみは ドームスーパースターと\nたたかったこと あるかい?\pやつは あいての ちからを なめてるとき\nドラゴンと ひこうの ドラゴンポケモン!\lみずと じめんの ぬまうおポケモン!\lほのおと ひこうの かえんポケモンの\l3ひきを つかってくる らしいぜ!"
	.byte EOS
	.if (. - gText_Rom_236DA7) > 0x80
	.error "gText_Rom_236DA7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_236DA7) < 0x80
	.space 0x80 - (. - gText_Rom_236DA7)
	.endif
	@ data/maps/BattleFrontier_Lounge2/scripts.inc:146 BattleFrontier_Lounge2_Text_DomeAceGoldMons
	.globl gText_Rom_236E27
gText_Rom_236E27: @ 0x08236E27
	.string "きみは ほんきの ドームスーパースターと\nたたかったこと あるかい?\pやつは じぶんの せんりゃくを みせるとき\nドラゴンと エスパーの むげんポケモン!\lみずと じめんの ぬまうおポケモン!\lはがねと エスパーの てつあしポケモンの\l3ひきを つかってくる らしいぜ!"
	.byte EOS
	.if (. - gText_Rom_236E27) > 0x88
	.error "gText_Rom_236E27 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_236E27) < 0x88
	.space 0x88 - (. - gText_Rom_236E27)
	.endif
	@ data/maps/BattleFrontier_Lounge2/scripts.inc:149 BattleFrontier_Lounge2_Text_FactoryHeadIsThere
	.globl gText_Rom_236EAF
gText_Rom_236EAF: @ 0x08236EAF
	.string "しってるかい?\pあそこは エニシダが\nフロンティアブレーンって よんでる\lトレーナーの うちの ひとり……\lファクトリーヘッドって いう\lやばい トレーナーが おさめてるのさ!"
	.byte EOS
	.if (. - gText_Rom_236EAF) > 0x59
	.error "gText_Rom_236EAF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_236EAF) < 0x59
	.space 0x59 - (. - gText_Rom_236EAF)
	.endif
	@ data/maps/BattleFrontier_Lounge2/scripts.inc:152 BattleFrontier_Lounge2_Text_FactoryHeadSilverMons
	.globl gText_Rom_236F08
gText_Rom_236F08: @ 0x08236F08
	.string "きみは もう ファクトリーヘッドと\nたたかったこと あるかい?\pあいつが つかう ポケモンは\nレンタルポケモンの\lなかから どれか 3ひき!\lきみと ほぼ おなじ じょうけん らしいぜ!"
	.byte EOS
	.if (. - gText_Rom_236F08) > 0x5e
	.error "gText_Rom_236F08 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_236F08) < 0x5e
	.space 0x5e - (. - gText_Rom_236F08)
	.endif
	@ data/maps/BattleFrontier_Lounge2/scripts.inc:155 BattleFrontier_Lounge2_Text_FactoryHeadGoldMons
	.globl gText_Rom_236F66
gText_Rom_236F66: @ 0x08236F66
	.string "きみは ほんきの ファクトリーヘッドと\nたたかったこと あるかい?\pあいつは ほんきで たたかう ときでも\nレンタルポケモンの\lなかから どれか 3ひき!\lきみと ほとんど おなじ じょうけんで\lたたかう らしいぜ!"
	.byte EOS
	.if (. - gText_Rom_236F66) > 0x6d
	.error "gText_Rom_236F66 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_236F66) < 0x6d
	.space 0x6d - (. - gText_Rom_236F66)
	.endif
	@ data/maps/BattleFrontier_Lounge2/scripts.inc:158 BattleFrontier_Lounge2_Text_PikeQueenIsThere
	.globl gText_Rom_236FD3
gText_Rom_236FD3: @ 0x08236FD3
	.string "しってるかい?\pあそこには エニシダが\nフロンティアブレーンって よんでる\lトレーナーの うちの ひとり……\lチューブクイーンって いう\lこわーい トレーナーが おさめてるのさ!"
	.byte EOS
	.if (. - gText_Rom_236FD3) > 0x5a
	.error "gText_Rom_236FD3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_236FD3) < 0x5a
	.space 0x5a - (. - gText_Rom_236FD3)
	.endif
	@ data/maps/BattleFrontier_Lounge2/scripts.inc:161 BattleFrontier_Lounge2_Text_PikeQueenSilverMons
	.globl gText_Rom_23702D
gText_Rom_23702D: @ 0x0823702D
	.string "きみは チューブクイーンと\nたたかったこと あるかい?\pやつは きげんの いいとき\nどくの キバへびポケモン!\lむしと いわの はっこうポケモン!\lみずの いつくしみポケモンの\l3ひきを つかってくる らしいぜ!"
	.byte EOS
	.if (. - gText_Rom_23702D) > 0x6b
	.error "gText_Rom_23702D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23702D) < 0x6b
	.space 0x6b - (. - gText_Rom_23702D)
	.endif
	@ data/maps/BattleFrontier_Lounge2/scripts.inc:164 BattleFrontier_Lounge2_Text_PikeQueenGoldMons
	.globl gText_Rom_237098
gText_Rom_237098: @ 0x08237098
	.string "きみは ほんきの チューブクイーンと\nたたかったこと あるかい?\pやつは ほんきで おこったとき\nどくの キバへびポケモン!\lはがねと じめんの てつへびポケモン!\lみずと ひこうの きょうあくポケモンの\l3ひきを つかってくる らしいぜ!"
	.byte EOS
	.if (. - gText_Rom_237098) > 0x79
	.error "gText_Rom_237098 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_237098) < 0x79
	.space 0x79 - (. - gText_Rom_237098)
	.endif
	@ data/maps/BattleFrontier_Lounge2/scripts.inc:167 BattleFrontier_Lounge2_Text_ArenaTycoonIsThere
	.globl gText_Rom_237111
gText_Rom_237111: @ 0x08237111
	.string "しってるかい?\pあそこには エニシダが\nフロンティアブレーンって よんでる\lトレーナーの うちの ひとり……\lアリーナキャプテンって いう\lかわいい トレーナーが おさめてるのさ!"
	.byte EOS
	.if (. - gText_Rom_237111) > 0x5b
	.error "gText_Rom_237111 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_237111) < 0x5b
	.space 0x5b - (. - gText_Rom_237111)
	.endif
	@ data/maps/BattleFrontier_Lounge2/scripts.inc:170 BattleFrontier_Lounge2_Text_ArenaTycoonSilverMons
	.globl gText_Rom_23716C
gText_Rom_23716C: @ 0x0823716C
	.string "きみは もう アリーナキャプテンと\nたたかったこと あるかい?\pあのこは あいての ちからを うかがうとき\nむしと かくとうの 1ぽんヅノポケモン!\lあくの げっこうポケモン!\lむしと ゴーストの ぬけがらポケモンの\l3ひきを つかってくる らしいぜ!"
	.byte EOS
	.if (. - gText_Rom_23716C) > 0x7f
	.error "gText_Rom_23716C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23716C) < 0x7f
	.space 0x7f - (. - gText_Rom_23716C)
	.endif
	@ data/maps/BattleFrontier_Lounge2/scripts.inc:173 BattleFrontier_Lounge2_Text_ArenaTycoonGoldMons
	.globl gText_Rom_2371EB
gText_Rom_2371EB: @ 0x082371EB
	.string "きみは ほんきの アリーナキャプテンと\nたたかったこと あるかい?\pあのこは マジで たたかう とき\nあくの げっこうポケモン!\lゴーストと どくの シャドーポケモン!\lくさと かくとうの きのこポケモンの\l3ひきを つかってくる らしいぜ!"
	.byte EOS
	.if (. - gText_Rom_2371EB) > 0x7a
	.error "gText_Rom_2371EB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2371EB) < 0x7a
	.space 0x7a - (. - gText_Rom_2371EB)
	.endif
	@ data/maps/BattleFrontier_Lounge2/scripts.inc:176 BattleFrontier_Lounge2_Text_PalaceMavenIsThere
	.globl gText_Rom_237265
gText_Rom_237265: @ 0x08237265
	.string "あそこには エニシダが\nフロンティアブレーンって よんでる\lトレーナーの うちの ひとり……\lパレスガーディアンって いう\lあやしい トレーナーが おさめてるのさ!"
	.byte EOS
	.if (. - gText_Rom_237265) > 0x53
	.error "gText_Rom_237265 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_237265) < 0x53
	.space 0x53 - (. - gText_Rom_237265)
	.endif
	@ data/maps/BattleFrontier_Lounge2/scripts.inc:179 BattleFrontier_Lounge2_Text_PalaceMavenSilverMons
	.globl gText_Rom_2372B8
gText_Rom_2372B8: @ 0x082372B8
	.string "きみは パレスガーディアンと\nたたかったこと あるかい?\pやつは あいての こころを ためすとき\nどくと ひこうの こうもりポケモン!\lノーマルの ものぐさポケモン\lみずと こおりの のりものポケモンの\l3ひきを つかってくる らしいぜ!"
	.byte EOS
	.if (. - gText_Rom_2372B8) > 0x78
	.error "gText_Rom_2372B8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2372B8) < 0x78
	.space 0x78 - (. - gText_Rom_2372B8)
	.endif
	@ data/maps/BattleFrontier_Lounge2/scripts.inc:182 BattleFrontier_Lounge2_Text_PalaceMavenGoldMons
	.globl gText_Rom_237330
gText_Rom_237330: @ 0x08237330
	.string "きみは ほんきの パレスガーディアンと\nたたかったこと あるかい?\pやつが てかげんぬきで たたかうときは\nほのおの でんせつポケモン!\lノーマルの ものぐさポケモン\lみずの オーロラポケモンの\l3ひきを つかってくる らしいぜ!"
	.byte EOS
	.if (. - gText_Rom_237330) > 0x74
	.error "gText_Rom_237330 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_237330) < 0x74
	.space 0x74 - (. - gText_Rom_237330)
	.endif
	@ data/maps/BattleFrontier_Lounge2/scripts.inc:185 BattleFrontier_Lounge2_Text_PyramidKingIsThere
	.globl gText_Rom_2373A4
gText_Rom_2373A4: @ 0x082373A4
	.string "しってるかい?\pあそこには エニシダが\nフロンティアブレーンって よんでる\lトレーナーの うちの ひとり……\lピラミッドキングって いう\lアツーい トレーナーが おさめてるのさ!"
	.byte EOS
	.if (. - gText_Rom_2373A4) > 0x5a
	.error "gText_Rom_2373A4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2373A4) < 0x5a
	.space 0x5a - (. - gText_Rom_2373A4)
	.endif
	@ data/maps/BattleFrontier_Lounge2/scripts.inc:188 BattleFrontier_Lounge2_Text_PyramidKingSilverMons
	.globl gText_Rom_2373FE
gText_Rom_2373FE: @ 0x082373FE
	.string "きみは もう ピラミッドキングと\nたたかったこと あるかい?\pかれは あいての ちからを ためすとき\nいわの いわやまポケモン!\lこおりの ひょうざんポケモン!\lはがねの くろがねポケモンの\l3ひきを つかってくる らしいぜ!"
	.byte EOS
	.if (. - gText_Rom_2373FE) > 0x72
	.error "gText_Rom_2373FE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2373FE) < 0x72
	.space 0x72 - (. - gText_Rom_2373FE)
	.endif
	@ data/maps/BattleFrontier_Lounge2/scripts.inc:191 BattleFrontier_Lounge2_Text_PyramidKingGoldMons
	.globl gText_Rom_237470
gText_Rom_237470: @ 0x08237470
	.string "きみは ほんきの ピラミッドキングと\nたたかったこと あるかい?\pかれに あつい ちからが みなぎるときは\nこおりと ひこうの れいとうポケモン!\lでんきと ひこうの でんげきポケモン!\lほのおと ひこうの かえんポケモンの\l3ひきを つかってくる らしいぜ!"
	.byte EOS
	.if (. - gText_Rom_237470) > 0x83
	.error "gText_Rom_237470 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_237470) < 0x83
	.space 0x83 - (. - gText_Rom_237470)
	.endif
	@ data/maps/BattleFrontier_Lounge2/scripts.inc:194 BattleFrontier_Lounge2_Text_DoubleBattleAdvice1
	.globl gText_Rom_2374F3
gText_Rom_2374F3: @ 0x082374F3
	.string "ダブルバトルが できる ばしょは\nいくつか あるけど やっぱり きほんは\lバトルタワーの ダブル バトルルーム!\pまずは ここから バトルフロンティアでの\nダブルバトルを まなんで いくと いいぜ!"
	.byte EOS
	.if (. - gText_Rom_2374F3) > 0x64
	.error "gText_Rom_2374F3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2374F3) < 0x64
	.space 0x64 - (. - gText_Rom_2374F3)
	.endif
	@ data/maps/BattleFrontier_Lounge2/scripts.inc:197 BattleFrontier_Lounge2_Text_DoubleBattleAdvice2
	.globl gText_Rom_237557
gText_Rom_237557: @ 0x08237557
	.string "ここでの たたかいには\nちゅうい しなよ!\pダブルバトル ならではの せんぽうで\nたたかう トレーナーも いるみたいだぜ!"
	.byte EOS
	.if (. - gText_Rom_237557) > 0x3e
	.error "gText_Rom_237557 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_237557) < 0x3e
	.space 0x3e - (. - gText_Rom_237557)
	.endif
	@ data/maps/BattleFrontier_Lounge2/scripts.inc:200 BattleFrontier_Lounge2_Text_DoubleBattleAdvice3
	.globl gText_Rom_237595
gText_Rom_237595: @ 0x08237595
	.string "ここの たたかいで\nダブルバトルに じしんが ついたら\lほかの ダブルバトルが できる ばしょに\lチャレンジ してみると いいかもな!"
	.byte EOS
	.if (. - gText_Rom_237595) > 0x44
	.error "gText_Rom_237595 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_237595) < 0x44
	.space 0x44 - (. - gText_Rom_237595)
	.endif
	@ data/maps/BattleFrontier_Lounge2/scripts.inc:203 BattleFrontier_Lounge2_Text_MultiBattleAdvice
	.globl gText_Rom_2375D9
gText_Rom_2375D9: @ 0x082375D9
	.string "バトルサロンには\nいろんな トレーナーが あつまるんだぜ!\pもしかしたら きみの ともだちや\nでしにも あえるかも しれないな!\lよーく さがして みると いいぜ!"
	.byte EOS
	.if (. - gText_Rom_2375D9) > 0x53
	.error "gText_Rom_2375D9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2375D9) < 0x53
	.space 0x53 - (. - gText_Rom_2375D9)
	.endif
	@ data/maps/BattleFrontier_Lounge2/scripts.inc:206 BattleFrontier_Lounge2_Text_LinkMultiBattleAdvice
	.globl gText_Rom_23762C
gText_Rom_23762C: @ 0x0823762C
	.string "ともだちが あつまったら\nつうしんマルチ バトルルーム!!\pつよい ともだちと いっしょに あそべば\nつよい トレーナーたち との\lたたかいが まってるぜ!"
	.byte EOS
	.if (. - gText_Rom_23762C) > 0x4f
	.error "gText_Rom_23762C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23762C) < 0x4f
	.space 0x4f - (. - gText_Rom_23762C)
	.endif
	@ data/maps/BattleFrontier_Lounge2/scripts.inc:209 BattleFrontier_Lounge2_Text_NewsGatheringPower
	.globl gText_Rom_23767B
gText_Rom_23767B: @ 0x0823767B
	.string "すっげえ じょうほうりょくー!!\nやっぱ センパイは ちがうっすよー"
	.byte EOS
	.if (. - gText_Rom_23767B) > 0x23
	.error "gText_Rom_23767B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23767B) < 0x23
	.space 0x23 - (. - gText_Rom_23767B)
	.endif
	@ data/maps/BattleFrontier_Lounge2/scripts.inc:212 BattleFrontier_Lounge2_Text_AmazingPowersOfObservation
	.globl gText_Rom_23769E
gText_Rom_23769E: @ 0x0823769E
	.string "すっげえ かんさつりょくー!!\nやっぱ センパイは ちがうっすわー"
	.byte EOS
	.if (. - gText_Rom_23769E) > 0x22
	.error "gText_Rom_23769E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23769E) < 0x22
	.space 0x22 - (. - gText_Rom_23769E)
	.endif
	@ data/maps/BattleFrontier_Lounge2/scripts.inc:215 BattleFrontier_Lounge2_Text_AmazingPowerOfPersuasion
	.globl gText_Rom_2376C0
gText_Rom_2376C0: @ 0x082376C0
	.string "すっげえ せっとくりょくー!!\nやっぱ センパイは ちがうっすねー"
	.byte EOS
	.if (. - gText_Rom_2376C0) > 0x22
	.error "gText_Rom_2376C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2376C0) < 0x22
	.space 0x22 - (. - gText_Rom_2376C0)
	.endif
	@ data/maps/BattleFrontier_Lounge2/scripts.inc:218 BattleFrontier_Lounge2_Text_ThisPlaceIsScaringMe
	.globl gText_Rom_2376E2
gText_Rom_2376E2: @ 0x082376E2
	.string "なによ ここ……\nちょっと こわい……"
	.byte EOS
	.if (. - gText_Rom_2376E2) > 0x14
	.error "gText_Rom_2376E2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2376E2) < 0x14
	.space 0x14 - (. - gText_Rom_2376E2)
	.endif
	@ Embedded ROM bytes: file offset 0x2376F6, size 0x27C
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x00, 0x6A, 0x5A, 0x2B, 0x57, 0x01, 0x06, 0x01, 0x6D, 0x78, 0x23, 0x08, 0x04, 0x14, 0x78, 0x23
	.byte 0x08, 0x21, 0x04, 0x80, 0x02, 0x00, 0x06, 0x03, 0x5F, 0x78, 0x23, 0x08, 0x29, 0x57, 0x01, 0x0F
	.byte 0x00
	.4byte gText_Rom_23799B @ ROM pointer 0x0823799B
	.byte 0x09, 0x04, 0x05, 0x23, 0x77, 0x23, 0x08, 0x02, 0x25, 0xD1, 0x01, 0x66, 0x6D, 0x0F, 0x00, 0xFE
	.byte 0x7E, 0x23, 0x08, 0x09, 0x05, 0x21, 0x0D, 0x80, 0x00, 0x00, 0x06, 0x01, 0x19, 0x79, 0x23, 0x08
	.byte 0x0F, 0x00, 0x29, 0x7F, 0x23, 0x08, 0x09, 0x05, 0x21, 0x0D, 0x80, 0x00, 0x00, 0x06, 0x01, 0x19
	.byte 0x79, 0x23, 0x08, 0x67
	.4byte gText_Rom_237F6A @ ROM pointer 0x08237F6A
	.byte 0x66, 0x25, 0xC4, 0x01, 0x05, 0x5D, 0x77, 0x23, 0x08, 0x02, 0x6F, 0x14, 0x04, 0x57, 0x00, 0x19
	.byte 0x32, 0x40, 0x0D, 0x80, 0x19, 0x00, 0x80, 0x0D, 0x80, 0x21, 0x00, 0x80, 0x00, 0x00, 0x06, 0x01
	.byte 0xA4, 0x77, 0x23, 0x08, 0x21, 0x00, 0x80, 0x01, 0x00, 0x06, 0x01, 0xAF, 0x77, 0x23, 0x08, 0x21
	.byte 0x00, 0x80, 0x02, 0x00, 0x06, 0x01, 0xBA, 0x77, 0x23, 0x08, 0x21, 0x00, 0x80, 0x03, 0x00, 0x06
	.byte 0x01, 0x23, 0x79, 0x23, 0x08, 0x21, 0x00, 0x80, 0x7F, 0x00, 0x06, 0x01, 0x23, 0x79, 0x23, 0x08
	.byte 0x02, 0x16, 0x08, 0x80, 0x05, 0x00, 0x05, 0xC5, 0x77, 0x23, 0x08, 0x02, 0x16, 0x08, 0x80, 0x0A
	.byte 0x00, 0x05, 0xC5, 0x77, 0x23, 0x08, 0x02, 0x16, 0x08, 0x80, 0x0F, 0x00, 0x05, 0xC5, 0x77, 0x23
	.byte 0x08, 0x02, 0x26, 0x01, 0x40, 0xC9, 0x01, 0x22, 0x01, 0x40, 0x08, 0x80, 0x06, 0x04, 0xE9, 0x77
	.byte 0x23, 0x08, 0x0F, 0x00
	.4byte gText_Rom_237F8B @ ROM pointer 0x08237F8B
	.byte 0x09, 0x04, 0x67, 0x6A, 0x7F, 0x23, 0x08, 0x66, 0x05, 0x5D, 0x77, 0x23, 0x08, 0x02, 0x19, 0x04
	.byte 0x80, 0x08, 0x80, 0x25, 0xC8, 0x01, 0x16, 0x33, 0x40, 0x01, 0x00, 0x25, 0xC5, 0x01, 0x2F, 0x5F
	.byte 0x00, 0x0F, 0x00, 0xBE, 0x7F, 0x23, 0x08, 0x09, 0x04, 0x05, 0x0A, 0x78, 0x23, 0x08, 0x02, 0x25
	.byte 0xD2, 0x01, 0x66, 0x6D, 0x25, 0xC6, 0x01, 0x6C, 0x02, 0x16, 0x04, 0x80, 0x00, 0x00, 0x2B, 0xC4
	.byte 0x08, 0x07, 0x01, 0x59, 0x78, 0x23, 0x08, 0x2B, 0xC6, 0x08, 0x07, 0x01, 0x59, 0x78, 0x23, 0x08
	.byte 0x2B, 0xC8, 0x08, 0x07, 0x01, 0x59, 0x78, 0x23, 0x08, 0x2B, 0xCA, 0x08, 0x07, 0x01, 0x59, 0x78
	.byte 0x23, 0x08, 0x2B, 0xCC, 0x08, 0x07, 0x01, 0x59, 0x78, 0x23, 0x08, 0x2B, 0xCE, 0x08, 0x07, 0x01
	.byte 0x59, 0x78, 0x23, 0x08, 0x2B, 0xD0, 0x08, 0x07, 0x01, 0x59, 0x78, 0x23, 0x08, 0x03, 0x17, 0x04
	.byte 0x80, 0x01, 0x00, 0x03, 0x0F, 0x00, 0x72, 0x79, 0x23, 0x08, 0x09, 0x04, 0x05, 0x65, 0x79, 0x23
	.byte 0x08, 0x02, 0x0F, 0x00
	.4byte gText_Rom_2384DA @ ROM pointer 0x082384DA
	.byte 0x09, 0x04, 0x21, 0x33, 0x40, 0x01, 0x00, 0x06, 0x04, 0x86, 0x78, 0x23, 0x08, 0x05, 0x23, 0x77
	.byte 0x23, 0x08, 0x02, 0x21, 0x33, 0x40, 0x01, 0x00, 0x06, 0x01, 0x12, 0x79, 0x23, 0x08, 0x21, 0x33
	.byte 0x40, 0x02, 0x00, 0x06, 0x01, 0xA2, 0x78, 0x23, 0x08, 0x05, 0xE5, 0x78, 0x23, 0x08, 0x02, 0x0F
	.byte 0x00, 0x2E, 0x84, 0x23, 0x08, 0x09, 0x04, 0x21, 0x32, 0x40, 0x00, 0x00, 0x07, 0x01, 0xF4, 0x78
	.byte 0x23, 0x08, 0x21, 0x32, 0x40, 0x01, 0x00, 0x07, 0x01, 0xFE, 0x78, 0x23, 0x08, 0x21, 0x32, 0x40
	.byte 0x02, 0x00, 0x07, 0x01, 0x08, 0x79, 0x23, 0x08, 0x0F, 0x00, 0x8B, 0x84, 0x23, 0x08, 0x09, 0x09
	.byte 0x25, 0xC7, 0x01, 0x0F, 0x00, 0xA4, 0x84, 0x23, 0x08, 0x09, 0x04, 0x16, 0x33, 0x40, 0x00, 0x00
	.byte 0x6C, 0x02, 0x0F, 0x00
	.4byte gText_Rom_2383E2 @ ROM pointer 0x082383E2
	.byte 0x09, 0x04, 0x16, 0x33, 0x40, 0x00, 0x00, 0x6C, 0x02, 0x83, 0x00, 0x0A, 0x00, 0x16, 0x04, 0x80
	.byte 0x0A, 0x00, 0x03, 0x83, 0x00, 0x14, 0x00, 0x16, 0x04, 0x80, 0x14, 0x00, 0x03, 0x83, 0x00, 0x1E
	.byte 0x00, 0x16, 0x04, 0x80, 0x1E, 0x00, 0x03, 0x25, 0xD2, 0x01, 0x66, 0x6D, 0x6C, 0x02, 0x0F, 0x00
	.4byte gText_Rom_2384BF @ ROM pointer 0x082384BF
	.byte 0x09, 0x04, 0x6C, 0x02, 0x25, 0xC6, 0x01, 0x05, 0x19, 0x79, 0x23, 0x08, 0x02, 0x0F, 0x00, 0x50
	.byte 0x85, 0x23, 0x08, 0x09, 0x02, 0x02, 0x6A, 0x5A, 0x0F, 0x00, 0xDF, 0x84, 0x23, 0x08, 0x09, 0x04
	.byte 0x05, 0x65, 0x79, 0x23, 0x08, 0x02, 0x6A, 0x5A, 0x0F, 0x00, 0x39, 0x85, 0x23, 0x08, 0x09, 0x04
	.byte 0x05, 0x65, 0x79, 0x23, 0x08, 0x02, 0x6A, 0x5A, 0x0F, 0x00, 0x08, 0x85, 0x23, 0x08, 0x09, 0x04
	.byte 0x05, 0x65, 0x79, 0x23, 0x08, 0x02, 0x68, 0x4F, 0x0F, 0x80, 0x25, 0x36, 0x24, 0x08, 0x51, 0x00
	.byte 0x00, 0x6C, 0x02
