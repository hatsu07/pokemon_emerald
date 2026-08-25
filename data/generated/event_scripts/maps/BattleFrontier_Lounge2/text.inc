	@ data/maps/BattleFrontier_Lounge2/scripts.inc:115 BattleFrontier_Lounge2_Text_FrontierManiacIntro
	.globl BattleFrontier_Lounge2_Text_FrontierManiacIntro
BattleFrontier_Lounge2_Text_FrontierManiacIntro: @ 0x08236B0A
	.string "やあやあ ぼくは バトルフロンティアいちの\nじょうほうつう!\pフロンティアマニアって よんでくれよ!\pきみ トレーナーだろ?\pぼくが あつめた バトルフロンティアの\nホットな じょうほうを おしえて あげるよ!"
	.byte EOS
	.if (. - BattleFrontier_Lounge2_Text_FrontierManiacIntro) > 0x6a
	.error "BattleFrontier_Lounge2_Text_FrontierManiacIntro may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_Lounge2_Text_FrontierManiacIntro) < 0x6a
	.space 0x6a - (. - BattleFrontier_Lounge2_Text_FrontierManiacIntro)
	.endif
	@ data/maps/BattleFrontier_Lounge2/scripts.inc:118 BattleFrontier_Lounge2_Text_SwingByForTheLatestWord
	.globl BattleFrontier_Lounge2_Text_SwingByForTheLatestWord
BattleFrontier_Lounge2_Text_SwingByForTheLatestWord: @ 0x08236B74
	.string "やあやあ また ぼくの じょうほうを\nききに きたんだね! しかたないなー!"
	.byte EOS
	.if (. - BattleFrontier_Lounge2_Text_SwingByForTheLatestWord) > 0x27
	.error "BattleFrontier_Lounge2_Text_SwingByForTheLatestWord may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_Lounge2_Text_SwingByForTheLatestWord) < 0x27
	.space 0x27 - (. - BattleFrontier_Lounge2_Text_SwingByForTheLatestWord)
	.endif
	@ data/maps/BattleFrontier_Lounge2/scripts.inc:122 BattleFrontier_Lounge2_Text_MyInformationsBeenUsefulRight
	.globl BattleFrontier_Lounge2_Text_MyInformationsBeenUsefulRight
BattleFrontier_Lounge2_Text_MyInformationsBeenUsefulRight: @ 0x08236B9B
	.string "どう? どう? どう?\pぼくの じょうほうは もちろん\nすごーく さんこうに なってるだろ?"
	.byte EOS
	.if (. - BattleFrontier_Lounge2_Text_MyInformationsBeenUsefulRight) > 0x2f
	.error "BattleFrontier_Lounge2_Text_MyInformationsBeenUsefulRight may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_Lounge2_Text_MyInformationsBeenUsefulRight) < 0x2f
	.space 0x2f - (. - BattleFrontier_Lounge2_Text_MyInformationsBeenUsefulRight)
	.endif
	@ data/maps/BattleFrontier_Lounge2/scripts.inc:125 BattleFrontier_Lounge2_Text_FacilityIsHottest
	.globl BattleFrontier_Lounge2_Text_FacilityIsHottest
BattleFrontier_Lounge2_Text_FacilityIsHottest: @ 0x08236BCA
	.string "そうだねぇ……\pいまは {STR_VAR_1}が\nアッつい みたいだね!"
	.byte EOS
	.if (. - BattleFrontier_Lounge2_Text_FacilityIsHottest) > 0x1c
	.error "BattleFrontier_Lounge2_Text_FacilityIsHottest may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_Lounge2_Text_FacilityIsHottest) < 0x1c
	.space 0x1c - (. - BattleFrontier_Lounge2_Text_FacilityIsHottest)
	.endif
	@ data/maps/BattleFrontier_Lounge2/scripts.inc:128 BattleFrontier_Lounge2_Text_BattleTowerIsHottest
	.globl BattleFrontier_Lounge2_Text_BattleTowerIsHottest
BattleFrontier_Lounge2_Text_BattleTowerIsHottest: @ 0x08236BE6
	.string "そうだねぇ……\pいまは バトルタワー{STR_VAR_1}が\nアッつい みたいだね!"
	.byte EOS
	.if (. - BattleFrontier_Lounge2_Text_BattleTowerIsHottest) > 0x22
	.error "BattleFrontier_Lounge2_Text_BattleTowerIsHottest may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_Lounge2_Text_BattleTowerIsHottest) < 0x22
	.space 0x22 - (. - BattleFrontier_Lounge2_Text_BattleTowerIsHottest)
	.endif
	@ data/maps/BattleFrontier_Lounge2/scripts.inc:131 BattleFrontier_Lounge2_Text_SalonMaidenIsThere
	.globl BattleFrontier_Lounge2_Text_SalonMaidenIsThere
BattleFrontier_Lounge2_Text_SalonMaidenIsThere: @ 0x08236C08
	.string "しってるかい?\pあそこは エニシダが\nフロンティアブレーンって よんでる\lトレーナーの うちの ひとり……\lタワータイクーンって いう\lなぞの トレーナーが おさめてるのさ!"
	.byte EOS
	.if (. - BattleFrontier_Lounge2_Text_SalonMaidenIsThere) > 0x58
	.error "BattleFrontier_Lounge2_Text_SalonMaidenIsThere may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_Lounge2_Text_SalonMaidenIsThere) < 0x58
	.space 0x58 - (. - BattleFrontier_Lounge2_Text_SalonMaidenIsThere)
	.endif
	@ data/maps/BattleFrontier_Lounge2/scripts.inc:134 BattleFrontier_Lounge2_Text_SalonMaidenSilverMons
	.globl BattleFrontier_Lounge2_Text_SalonMaidenSilverMons
BattleFrontier_Lounge2_Text_SalonMaidenSilverMons: @ 0x08236C60
	.string "きみは タワータイクーンと\nたたかったこと あるかい?\pやつは あいての ちからを はかるとき\nエスパーの ねんりきポケモン!\lほのおの かざんポケモン!\lノーマルの いねむりポケモンの\l3ひきを つかってくる らしいぜ!"
	.byte EOS
	.if (. - BattleFrontier_Lounge2_Text_SalonMaidenSilverMons) > 0x70
	.error "BattleFrontier_Lounge2_Text_SalonMaidenSilverMons may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_Lounge2_Text_SalonMaidenSilverMons) < 0x70
	.space 0x70 - (. - BattleFrontier_Lounge2_Text_SalonMaidenSilverMons)
	.endif
	@ data/maps/BattleFrontier_Lounge2/scripts.inc:137 BattleFrontier_Lounge2_Text_SalonMaidenGoldMons
	.globl BattleFrontier_Lounge2_Text_SalonMaidenGoldMons
BattleFrontier_Lounge2_Text_SalonMaidenGoldMons: @ 0x08236CD0
	.string "きみは ほんきの タワータイクーンと\nたたかったこと あるかい?\pやつは ほんとの ちからで たたかうとき\nドラゴンと エスパーの むげんポケモン!\lでんきの いかづちポケモン!\lノーマルの いねむりポケモンの\l3ひきを つかってくる らしいぜ!"
	.byte EOS
	.if (. - BattleFrontier_Lounge2_Text_SalonMaidenGoldMons) > 0x7c
	.error "BattleFrontier_Lounge2_Text_SalonMaidenGoldMons may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_Lounge2_Text_SalonMaidenGoldMons) < 0x7c
	.space 0x7c - (. - BattleFrontier_Lounge2_Text_SalonMaidenGoldMons)
	.endif
	@ data/maps/BattleFrontier_Lounge2/scripts.inc:140 BattleFrontier_Lounge2_Text_DomeAceIsThere
	.globl BattleFrontier_Lounge2_Text_DomeAceIsThere
BattleFrontier_Lounge2_Text_DomeAceIsThere: @ 0x08236D4C
	.string "しってるかい?\pあそこは エニシダが\nフロンティアブレーンって よんでる\lトレーナーの うちの ひとり……\lドームスーパースターって いう\lどハデな トレーナーが おさめてるのさ!"
	.byte EOS
	.if (. - BattleFrontier_Lounge2_Text_DomeAceIsThere) > 0x5b
	.error "BattleFrontier_Lounge2_Text_DomeAceIsThere may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_Lounge2_Text_DomeAceIsThere) < 0x5b
	.space 0x5b - (. - BattleFrontier_Lounge2_Text_DomeAceIsThere)
	.endif
	@ data/maps/BattleFrontier_Lounge2/scripts.inc:143 BattleFrontier_Lounge2_Text_DomeAceSilverMons
	.globl BattleFrontier_Lounge2_Text_DomeAceSilverMons
BattleFrontier_Lounge2_Text_DomeAceSilverMons: @ 0x08236DA7
	.string "きみは ドームスーパースターと\nたたかったこと あるかい?\pやつは あいての ちからを なめてるとき\nドラゴンと ひこうの ドラゴンポケモン!\lみずと じめんの ぬまうおポケモン!\lほのおと ひこうの かえんポケモンの\l3ひきを つかってくる らしいぜ!"
	.byte EOS
	.if (. - BattleFrontier_Lounge2_Text_DomeAceSilverMons) > 0x80
	.error "BattleFrontier_Lounge2_Text_DomeAceSilverMons may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_Lounge2_Text_DomeAceSilverMons) < 0x80
	.space 0x80 - (. - BattleFrontier_Lounge2_Text_DomeAceSilverMons)
	.endif
	@ data/maps/BattleFrontier_Lounge2/scripts.inc:146 BattleFrontier_Lounge2_Text_DomeAceGoldMons
	.globl BattleFrontier_Lounge2_Text_DomeAceGoldMons
BattleFrontier_Lounge2_Text_DomeAceGoldMons: @ 0x08236E27
	.string "きみは ほんきの ドームスーパースターと\nたたかったこと あるかい?\pやつは じぶんの せんりゃくを みせるとき\nドラゴンと エスパーの むげんポケモン!\lみずと じめんの ぬまうおポケモン!\lはがねと エスパーの てつあしポケモンの\l3ひきを つかってくる らしいぜ!"
	.byte EOS
	.if (. - BattleFrontier_Lounge2_Text_DomeAceGoldMons) > 0x88
	.error "BattleFrontier_Lounge2_Text_DomeAceGoldMons may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_Lounge2_Text_DomeAceGoldMons) < 0x88
	.space 0x88 - (. - BattleFrontier_Lounge2_Text_DomeAceGoldMons)
	.endif
	@ data/maps/BattleFrontier_Lounge2/scripts.inc:149 BattleFrontier_Lounge2_Text_FactoryHeadIsThere
	.globl BattleFrontier_Lounge2_Text_FactoryHeadIsThere
BattleFrontier_Lounge2_Text_FactoryHeadIsThere: @ 0x08236EAF
	.string "しってるかい?\pあそこは エニシダが\nフロンティアブレーンって よんでる\lトレーナーの うちの ひとり……\lファクトリーヘッドって いう\lやばい トレーナーが おさめてるのさ!"
	.byte EOS
	.if (. - BattleFrontier_Lounge2_Text_FactoryHeadIsThere) > 0x59
	.error "BattleFrontier_Lounge2_Text_FactoryHeadIsThere may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_Lounge2_Text_FactoryHeadIsThere) < 0x59
	.space 0x59 - (. - BattleFrontier_Lounge2_Text_FactoryHeadIsThere)
	.endif
	@ data/maps/BattleFrontier_Lounge2/scripts.inc:152 BattleFrontier_Lounge2_Text_FactoryHeadSilverMons
	.globl BattleFrontier_Lounge2_Text_FactoryHeadSilverMons
BattleFrontier_Lounge2_Text_FactoryHeadSilverMons: @ 0x08236F08
	.string "きみは もう ファクトリーヘッドと\nたたかったこと あるかい?\pあいつが つかう ポケモンは\nレンタルポケモンの\lなかから どれか 3ひき!\lきみと ほぼ おなじ じょうけん らしいぜ!"
	.byte EOS
	.if (. - BattleFrontier_Lounge2_Text_FactoryHeadSilverMons) > 0x5e
	.error "BattleFrontier_Lounge2_Text_FactoryHeadSilverMons may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_Lounge2_Text_FactoryHeadSilverMons) < 0x5e
	.space 0x5e - (. - BattleFrontier_Lounge2_Text_FactoryHeadSilverMons)
	.endif
	@ data/maps/BattleFrontier_Lounge2/scripts.inc:155 BattleFrontier_Lounge2_Text_FactoryHeadGoldMons
	.globl BattleFrontier_Lounge2_Text_FactoryHeadGoldMons
BattleFrontier_Lounge2_Text_FactoryHeadGoldMons: @ 0x08236F66
	.string "きみは ほんきの ファクトリーヘッドと\nたたかったこと あるかい?\pあいつは ほんきで たたかう ときでも\nレンタルポケモンの\lなかから どれか 3ひき!\lきみと ほとんど おなじ じょうけんで\lたたかう らしいぜ!"
	.byte EOS
	.if (. - BattleFrontier_Lounge2_Text_FactoryHeadGoldMons) > 0x6d
	.error "BattleFrontier_Lounge2_Text_FactoryHeadGoldMons may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_Lounge2_Text_FactoryHeadGoldMons) < 0x6d
	.space 0x6d - (. - BattleFrontier_Lounge2_Text_FactoryHeadGoldMons)
	.endif
	@ data/maps/BattleFrontier_Lounge2/scripts.inc:158 BattleFrontier_Lounge2_Text_PikeQueenIsThere
	.globl BattleFrontier_Lounge2_Text_PikeQueenIsThere
BattleFrontier_Lounge2_Text_PikeQueenIsThere: @ 0x08236FD3
	.string "しってるかい?\pあそこには エニシダが\nフロンティアブレーンって よんでる\lトレーナーの うちの ひとり……\lチューブクイーンって いう\lこわーい トレーナーが おさめてるのさ!"
	.byte EOS
	.if (. - BattleFrontier_Lounge2_Text_PikeQueenIsThere) > 0x5a
	.error "BattleFrontier_Lounge2_Text_PikeQueenIsThere may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_Lounge2_Text_PikeQueenIsThere) < 0x5a
	.space 0x5a - (. - BattleFrontier_Lounge2_Text_PikeQueenIsThere)
	.endif
	@ data/maps/BattleFrontier_Lounge2/scripts.inc:161 BattleFrontier_Lounge2_Text_PikeQueenSilverMons
	.globl BattleFrontier_Lounge2_Text_PikeQueenSilverMons
BattleFrontier_Lounge2_Text_PikeQueenSilverMons: @ 0x0823702D
	.string "きみは チューブクイーンと\nたたかったこと あるかい?\pやつは きげんの いいとき\nどくの キバへびポケモン!\lむしと いわの はっこうポケモン!\lみずの いつくしみポケモンの\l3ひきを つかってくる らしいぜ!"
	.byte EOS
	.if (. - BattleFrontier_Lounge2_Text_PikeQueenSilverMons) > 0x6b
	.error "BattleFrontier_Lounge2_Text_PikeQueenSilverMons may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_Lounge2_Text_PikeQueenSilverMons) < 0x6b
	.space 0x6b - (. - BattleFrontier_Lounge2_Text_PikeQueenSilverMons)
	.endif
	@ data/maps/BattleFrontier_Lounge2/scripts.inc:164 BattleFrontier_Lounge2_Text_PikeQueenGoldMons
	.globl BattleFrontier_Lounge2_Text_PikeQueenGoldMons
BattleFrontier_Lounge2_Text_PikeQueenGoldMons: @ 0x08237098
	.string "きみは ほんきの チューブクイーンと\nたたかったこと あるかい?\pやつは ほんきで おこったとき\nどくの キバへびポケモン!\lはがねと じめんの てつへびポケモン!\lみずと ひこうの きょうあくポケモンの\l3ひきを つかってくる らしいぜ!"
	.byte EOS
	.if (. - BattleFrontier_Lounge2_Text_PikeQueenGoldMons) > 0x79
	.error "BattleFrontier_Lounge2_Text_PikeQueenGoldMons may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_Lounge2_Text_PikeQueenGoldMons) < 0x79
	.space 0x79 - (. - BattleFrontier_Lounge2_Text_PikeQueenGoldMons)
	.endif
	@ data/maps/BattleFrontier_Lounge2/scripts.inc:167 BattleFrontier_Lounge2_Text_ArenaTycoonIsThere
	.globl BattleFrontier_Lounge2_Text_ArenaTycoonIsThere
BattleFrontier_Lounge2_Text_ArenaTycoonIsThere: @ 0x08237111
	.string "しってるかい?\pあそこには エニシダが\nフロンティアブレーンって よんでる\lトレーナーの うちの ひとり……\lアリーナキャプテンって いう\lかわいい トレーナーが おさめてるのさ!"
	.byte EOS
	.if (. - BattleFrontier_Lounge2_Text_ArenaTycoonIsThere) > 0x5b
	.error "BattleFrontier_Lounge2_Text_ArenaTycoonIsThere may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_Lounge2_Text_ArenaTycoonIsThere) < 0x5b
	.space 0x5b - (. - BattleFrontier_Lounge2_Text_ArenaTycoonIsThere)
	.endif
	@ data/maps/BattleFrontier_Lounge2/scripts.inc:170 BattleFrontier_Lounge2_Text_ArenaTycoonSilverMons
	.globl BattleFrontier_Lounge2_Text_ArenaTycoonSilverMons
BattleFrontier_Lounge2_Text_ArenaTycoonSilverMons: @ 0x0823716C
	.string "きみは もう アリーナキャプテンと\nたたかったこと あるかい?\pあのこは あいての ちからを うかがうとき\nむしと かくとうの 1ぽんヅノポケモン!\lあくの げっこうポケモン!\lむしと ゴーストの ぬけがらポケモンの\l3ひきを つかってくる らしいぜ!"
	.byte EOS
	.if (. - BattleFrontier_Lounge2_Text_ArenaTycoonSilverMons) > 0x7f
	.error "BattleFrontier_Lounge2_Text_ArenaTycoonSilverMons may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_Lounge2_Text_ArenaTycoonSilverMons) < 0x7f
	.space 0x7f - (. - BattleFrontier_Lounge2_Text_ArenaTycoonSilverMons)
	.endif
	@ data/maps/BattleFrontier_Lounge2/scripts.inc:173 BattleFrontier_Lounge2_Text_ArenaTycoonGoldMons
	.globl BattleFrontier_Lounge2_Text_ArenaTycoonGoldMons
BattleFrontier_Lounge2_Text_ArenaTycoonGoldMons: @ 0x082371EB
	.string "きみは ほんきの アリーナキャプテンと\nたたかったこと あるかい?\pあのこは マジで たたかう とき\nあくの げっこうポケモン!\lゴーストと どくの シャドーポケモン!\lくさと かくとうの きのこポケモンの\l3ひきを つかってくる らしいぜ!"
	.byte EOS
	.if (. - BattleFrontier_Lounge2_Text_ArenaTycoonGoldMons) > 0x7a
	.error "BattleFrontier_Lounge2_Text_ArenaTycoonGoldMons may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_Lounge2_Text_ArenaTycoonGoldMons) < 0x7a
	.space 0x7a - (. - BattleFrontier_Lounge2_Text_ArenaTycoonGoldMons)
	.endif
	@ data/maps/BattleFrontier_Lounge2/scripts.inc:176 BattleFrontier_Lounge2_Text_PalaceMavenIsThere
	.globl BattleFrontier_Lounge2_Text_PalaceMavenIsThere
BattleFrontier_Lounge2_Text_PalaceMavenIsThere: @ 0x08237265
	.string "あそこには エニシダが\nフロンティアブレーンって よんでる\lトレーナーの うちの ひとり……\lパレスガーディアンって いう\lあやしい トレーナーが おさめてるのさ!"
	.byte EOS
	.if (. - BattleFrontier_Lounge2_Text_PalaceMavenIsThere) > 0x53
	.error "BattleFrontier_Lounge2_Text_PalaceMavenIsThere may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_Lounge2_Text_PalaceMavenIsThere) < 0x53
	.space 0x53 - (. - BattleFrontier_Lounge2_Text_PalaceMavenIsThere)
	.endif
	@ data/maps/BattleFrontier_Lounge2/scripts.inc:179 BattleFrontier_Lounge2_Text_PalaceMavenSilverMons
	.globl BattleFrontier_Lounge2_Text_PalaceMavenSilverMons
BattleFrontier_Lounge2_Text_PalaceMavenSilverMons: @ 0x082372B8
	.string "きみは パレスガーディアンと\nたたかったこと あるかい?\pやつは あいての こころを ためすとき\nどくと ひこうの こうもりポケモン!\lノーマルの ものぐさポケモン\lみずと こおりの のりものポケモンの\l3ひきを つかってくる らしいぜ!"
	.byte EOS
	.if (. - BattleFrontier_Lounge2_Text_PalaceMavenSilverMons) > 0x78
	.error "BattleFrontier_Lounge2_Text_PalaceMavenSilverMons may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_Lounge2_Text_PalaceMavenSilverMons) < 0x78
	.space 0x78 - (. - BattleFrontier_Lounge2_Text_PalaceMavenSilverMons)
	.endif
	@ data/maps/BattleFrontier_Lounge2/scripts.inc:182 BattleFrontier_Lounge2_Text_PalaceMavenGoldMons
	.globl BattleFrontier_Lounge2_Text_PalaceMavenGoldMons
BattleFrontier_Lounge2_Text_PalaceMavenGoldMons: @ 0x08237330
	.string "きみは ほんきの パレスガーディアンと\nたたかったこと あるかい?\pやつが てかげんぬきで たたかうときは\nほのおの でんせつポケモン!\lノーマルの ものぐさポケモン\lみずの オーロラポケモンの\l3ひきを つかってくる らしいぜ!"
	.byte EOS
	.if (. - BattleFrontier_Lounge2_Text_PalaceMavenGoldMons) > 0x74
	.error "BattleFrontier_Lounge2_Text_PalaceMavenGoldMons may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_Lounge2_Text_PalaceMavenGoldMons) < 0x74
	.space 0x74 - (. - BattleFrontier_Lounge2_Text_PalaceMavenGoldMons)
	.endif
	@ data/maps/BattleFrontier_Lounge2/scripts.inc:185 BattleFrontier_Lounge2_Text_PyramidKingIsThere
	.globl BattleFrontier_Lounge2_Text_PyramidKingIsThere
BattleFrontier_Lounge2_Text_PyramidKingIsThere: @ 0x082373A4
	.string "しってるかい?\pあそこには エニシダが\nフロンティアブレーンって よんでる\lトレーナーの うちの ひとり……\lピラミッドキングって いう\lアツーい トレーナーが おさめてるのさ!"
	.byte EOS
	.if (. - BattleFrontier_Lounge2_Text_PyramidKingIsThere) > 0x5a
	.error "BattleFrontier_Lounge2_Text_PyramidKingIsThere may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_Lounge2_Text_PyramidKingIsThere) < 0x5a
	.space 0x5a - (. - BattleFrontier_Lounge2_Text_PyramidKingIsThere)
	.endif
	@ data/maps/BattleFrontier_Lounge2/scripts.inc:188 BattleFrontier_Lounge2_Text_PyramidKingSilverMons
	.globl BattleFrontier_Lounge2_Text_PyramidKingSilverMons
BattleFrontier_Lounge2_Text_PyramidKingSilverMons: @ 0x082373FE
	.string "きみは もう ピラミッドキングと\nたたかったこと あるかい?\pかれは あいての ちからを ためすとき\nいわの いわやまポケモン!\lこおりの ひょうざんポケモン!\lはがねの くろがねポケモンの\l3ひきを つかってくる らしいぜ!"
	.byte EOS
	.if (. - BattleFrontier_Lounge2_Text_PyramidKingSilverMons) > 0x72
	.error "BattleFrontier_Lounge2_Text_PyramidKingSilverMons may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_Lounge2_Text_PyramidKingSilverMons) < 0x72
	.space 0x72 - (. - BattleFrontier_Lounge2_Text_PyramidKingSilverMons)
	.endif
	@ data/maps/BattleFrontier_Lounge2/scripts.inc:191 BattleFrontier_Lounge2_Text_PyramidKingGoldMons
	.globl BattleFrontier_Lounge2_Text_PyramidKingGoldMons
BattleFrontier_Lounge2_Text_PyramidKingGoldMons: @ 0x08237470
	.string "きみは ほんきの ピラミッドキングと\nたたかったこと あるかい?\pかれに あつい ちからが みなぎるときは\nこおりと ひこうの れいとうポケモン!\lでんきと ひこうの でんげきポケモン!\lほのおと ひこうの かえんポケモンの\l3ひきを つかってくる らしいぜ!"
	.byte EOS
	.if (. - BattleFrontier_Lounge2_Text_PyramidKingGoldMons) > 0x83
	.error "BattleFrontier_Lounge2_Text_PyramidKingGoldMons may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_Lounge2_Text_PyramidKingGoldMons) < 0x83
	.space 0x83 - (. - BattleFrontier_Lounge2_Text_PyramidKingGoldMons)
	.endif
	@ data/maps/BattleFrontier_Lounge2/scripts.inc:194 BattleFrontier_Lounge2_Text_DoubleBattleAdvice1
	.globl BattleFrontier_Lounge2_Text_DoubleBattleAdvice1
BattleFrontier_Lounge2_Text_DoubleBattleAdvice1: @ 0x082374F3
	.string "ダブルバトルが できる ばしょは\nいくつか あるけど やっぱり きほんは\lバトルタワーの ダブル バトルルーム!\pまずは ここから バトルフロンティアでの\nダブルバトルを まなんで いくと いいぜ!"
	.byte EOS
	.if (. - BattleFrontier_Lounge2_Text_DoubleBattleAdvice1) > 0x64
	.error "BattleFrontier_Lounge2_Text_DoubleBattleAdvice1 may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_Lounge2_Text_DoubleBattleAdvice1) < 0x64
	.space 0x64 - (. - BattleFrontier_Lounge2_Text_DoubleBattleAdvice1)
	.endif
	@ data/maps/BattleFrontier_Lounge2/scripts.inc:197 BattleFrontier_Lounge2_Text_DoubleBattleAdvice2
	.globl BattleFrontier_Lounge2_Text_DoubleBattleAdvice2
BattleFrontier_Lounge2_Text_DoubleBattleAdvice2: @ 0x08237557
	.string "ここでの たたかいには\nちゅうい しなよ!\pダブルバトル ならではの せんぽうで\nたたかう トレーナーも いるみたいだぜ!"
	.byte EOS
	.if (. - BattleFrontier_Lounge2_Text_DoubleBattleAdvice2) > 0x3e
	.error "BattleFrontier_Lounge2_Text_DoubleBattleAdvice2 may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_Lounge2_Text_DoubleBattleAdvice2) < 0x3e
	.space 0x3e - (. - BattleFrontier_Lounge2_Text_DoubleBattleAdvice2)
	.endif
	@ data/maps/BattleFrontier_Lounge2/scripts.inc:200 BattleFrontier_Lounge2_Text_DoubleBattleAdvice3
	.globl BattleFrontier_Lounge2_Text_DoubleBattleAdvice3
BattleFrontier_Lounge2_Text_DoubleBattleAdvice3: @ 0x08237595
	.string "ここの たたかいで\nダブルバトルに じしんが ついたら\lほかの ダブルバトルが できる ばしょに\lチャレンジ してみると いいかもな!"
	.byte EOS
	.if (. - BattleFrontier_Lounge2_Text_DoubleBattleAdvice3) > 0x44
	.error "BattleFrontier_Lounge2_Text_DoubleBattleAdvice3 may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_Lounge2_Text_DoubleBattleAdvice3) < 0x44
	.space 0x44 - (. - BattleFrontier_Lounge2_Text_DoubleBattleAdvice3)
	.endif
	@ data/maps/BattleFrontier_Lounge2/scripts.inc:203 BattleFrontier_Lounge2_Text_MultiBattleAdvice
	.globl BattleFrontier_Lounge2_Text_MultiBattleAdvice
BattleFrontier_Lounge2_Text_MultiBattleAdvice: @ 0x082375D9
	.string "バトルサロンには\nいろんな トレーナーが あつまるんだぜ!\pもしかしたら きみの ともだちや\nでしにも あえるかも しれないな!\lよーく さがして みると いいぜ!"
	.byte EOS
	.if (. - BattleFrontier_Lounge2_Text_MultiBattleAdvice) > 0x53
	.error "BattleFrontier_Lounge2_Text_MultiBattleAdvice may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_Lounge2_Text_MultiBattleAdvice) < 0x53
	.space 0x53 - (. - BattleFrontier_Lounge2_Text_MultiBattleAdvice)
	.endif
	@ data/maps/BattleFrontier_Lounge2/scripts.inc:206 BattleFrontier_Lounge2_Text_LinkMultiBattleAdvice
	.globl BattleFrontier_Lounge2_Text_LinkMultiBattleAdvice
BattleFrontier_Lounge2_Text_LinkMultiBattleAdvice: @ 0x0823762C
	.string "ともだちが あつまったら\nつうしんマルチ バトルルーム!!\pつよい ともだちと いっしょに あそべば\nつよい トレーナーたち との\lたたかいが まってるぜ!"
	.byte EOS
	.if (. - BattleFrontier_Lounge2_Text_LinkMultiBattleAdvice) > 0x4f
	.error "BattleFrontier_Lounge2_Text_LinkMultiBattleAdvice may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_Lounge2_Text_LinkMultiBattleAdvice) < 0x4f
	.space 0x4f - (. - BattleFrontier_Lounge2_Text_LinkMultiBattleAdvice)
	.endif
	@ data/maps/BattleFrontier_Lounge2/scripts.inc:209 BattleFrontier_Lounge2_Text_NewsGatheringPower
	.globl BattleFrontier_Lounge2_Text_NewsGatheringPower
BattleFrontier_Lounge2_Text_NewsGatheringPower: @ 0x0823767B
	.string "すっげえ じょうほうりょくー!!\nやっぱ センパイは ちがうっすよー"
	.byte EOS
	.if (. - BattleFrontier_Lounge2_Text_NewsGatheringPower) > 0x23
	.error "BattleFrontier_Lounge2_Text_NewsGatheringPower may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_Lounge2_Text_NewsGatheringPower) < 0x23
	.space 0x23 - (. - BattleFrontier_Lounge2_Text_NewsGatheringPower)
	.endif
	@ data/maps/BattleFrontier_Lounge2/scripts.inc:212 BattleFrontier_Lounge2_Text_AmazingPowersOfObservation
	.globl BattleFrontier_Lounge2_Text_AmazingPowersOfObservation
BattleFrontier_Lounge2_Text_AmazingPowersOfObservation: @ 0x0823769E
	.string "すっげえ かんさつりょくー!!\nやっぱ センパイは ちがうっすわー"
	.byte EOS
	.if (. - BattleFrontier_Lounge2_Text_AmazingPowersOfObservation) > 0x22
	.error "BattleFrontier_Lounge2_Text_AmazingPowersOfObservation may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_Lounge2_Text_AmazingPowersOfObservation) < 0x22
	.space 0x22 - (. - BattleFrontier_Lounge2_Text_AmazingPowersOfObservation)
	.endif
	@ data/maps/BattleFrontier_Lounge2/scripts.inc:215 BattleFrontier_Lounge2_Text_AmazingPowerOfPersuasion
	.globl BattleFrontier_Lounge2_Text_AmazingPowerOfPersuasion
BattleFrontier_Lounge2_Text_AmazingPowerOfPersuasion: @ 0x082376C0
	.string "すっげえ せっとくりょくー!!\nやっぱ センパイは ちがうっすねー"
	.byte EOS
	.if (. - BattleFrontier_Lounge2_Text_AmazingPowerOfPersuasion) > 0x22
	.error "BattleFrontier_Lounge2_Text_AmazingPowerOfPersuasion may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_Lounge2_Text_AmazingPowerOfPersuasion) < 0x22
	.space 0x22 - (. - BattleFrontier_Lounge2_Text_AmazingPowerOfPersuasion)
	.endif
	@ data/maps/BattleFrontier_Lounge2/scripts.inc:218 BattleFrontier_Lounge2_Text_ThisPlaceIsScaringMe
	.globl BattleFrontier_Lounge2_Text_ThisPlaceIsScaringMe
BattleFrontier_Lounge2_Text_ThisPlaceIsScaringMe: @ 0x082376E2
	.string "なによ ここ……\nちょっと こわい……"
	.byte EOS
	.if (. - BattleFrontier_Lounge2_Text_ThisPlaceIsScaringMe) > 0x14
	.error "BattleFrontier_Lounge2_Text_ThisPlaceIsScaringMe may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_Lounge2_Text_ThisPlaceIsScaringMe) < 0x14
	.space 0x14 - (. - BattleFrontier_Lounge2_Text_ThisPlaceIsScaringMe)
	.endif
	@ Embedded ROM bytes: file offset 0x2376F6, size 0x27C
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x00, 0x6A, 0x5A, 0x2B, 0x57, 0x01, 0x06, 0x01, 0x6D, 0x78, 0x23, 0x08, 0x04, 0x14, 0x78, 0x23
	.byte 0x08, 0x21, 0x04, 0x80, 0x02, 0x00, 0x06, 0x03, 0x5F, 0x78, 0x23, 0x08, 0x29, 0x57, 0x01, 0x0F
	.byte 0x00
	.4byte BattleFrontier_Lounge3_Text_YouLookToughExplainGambling @ ROM pointer 0x0823799B
	.byte 0x09, 0x04, 0x05, 0x23, 0x77, 0x23, 0x08, 0x02, 0x25, 0xD1, 0x01, 0x66, 0x6D, 0x0F, 0x00
	.4byte BattleFrontier_Lounge3_Text_HowAboutEnteringEventForMe
	.byte 0x09, 0x05, 0x21, 0x0D, 0x80, 0x00, 0x00, 0x06, 0x01, 0x19, 0x79, 0x23, 0x08
	.byte 0x0F, 0x00
	.4byte BattleFrontier_Lounge3_Text_SpotMeSomeBattlePoints
	.byte 0x09, 0x05, 0x21, 0x0D, 0x80, 0x00, 0x00, 0x06, 0x01, 0x19
	.byte 0x79, 0x23, 0x08, 0x67
	.4byte BattleFrontier_Lounge3_Text_HowMuchCanYouSpot @ ROM pointer 0x08237F6A
	.byte 0x66, 0x25, 0xC4, 0x01, 0x05, 0x5D, 0x77, 0x23, 0x08, 0x02, 0x6F, 0x14, 0x04, 0x57, 0x00, 0x19
	.byte 0x32, 0x40, 0x0D, 0x80, 0x19, 0x00, 0x80, 0x0D, 0x80, 0x21, 0x00, 0x80, 0x00, 0x00, 0x06, 0x01
	.byte 0xA4, 0x77, 0x23, 0x08, 0x21, 0x00, 0x80, 0x01, 0x00, 0x06, 0x01, 0xAF, 0x77, 0x23, 0x08, 0x21
	.byte 0x00, 0x80, 0x02, 0x00, 0x06, 0x01, 0xBA, 0x77, 0x23, 0x08, 0x21, 0x00, 0x80, 0x03, 0x00, 0x06
	.byte 0x01, 0x23, 0x79, 0x23, 0x08, 0x21, 0x00, 0x80, 0x7F, 0x00, 0x06, 0x01, 0x23, 0x79, 0x23, 0x08
	.byte 0x02, 0x16, 0x08, 0x80, 0x05, 0x00, 0x05, 0xC5, 0x77, 0x23, 0x08, 0x02, 0x16, 0x08, 0x80, 0x0A
	.byte 0x00, 0x05, 0xC5, 0x77, 0x23, 0x08, 0x02, 0x16, 0x08, 0x80, 0x0F, 0x00, 0x05, 0xC5, 0x77, 0x23
	.byte 0x08, 0x02, 0x26, 0x01, 0x40, 0xC9, 0x01, 0x22, 0x01, 0x40, 0x08, 0x80, 0x06, 0x04, 0xE9, 0x77
	.byte 0x23, 0x08, 0x0F, 0x00
	.4byte BattleFrontier_Lounge3_Text_YouDontHaveEnoughPoints @ ROM pointer 0x08237F8B
	.byte 0x09, 0x04, 0x67, 0x6A, 0x7F, 0x23, 0x08, 0x66, 0x05, 0x5D, 0x77, 0x23, 0x08, 0x02, 0x19, 0x04
	.byte 0x80, 0x08, 0x80, 0x25, 0xC8, 0x01, 0x16, 0x33, 0x40, 0x01, 0x00, 0x25, 0xC5, 0x01, 0x2F, 0x5F
	.byte 0x00, 0x0F, 0x00
	.4byte BattleFrontier_Lounge3_Text_ThanksOffYouGo
	.byte 0x09, 0x04, 0x05, 0x0A, 0x78, 0x23, 0x08, 0x02, 0x25
	.byte 0xD2, 0x01, 0x66, 0x6D, 0x25, 0xC6, 0x01, 0x6C, 0x02, 0x16, 0x04, 0x80, 0x00, 0x00, 0x2B, 0xC4
	.byte 0x08, 0x07, 0x01, 0x59, 0x78, 0x23, 0x08, 0x2B, 0xC6, 0x08, 0x07, 0x01, 0x59, 0x78, 0x23, 0x08
	.byte 0x2B, 0xC8, 0x08, 0x07, 0x01, 0x59, 0x78, 0x23, 0x08, 0x2B, 0xCA, 0x08, 0x07, 0x01, 0x59, 0x78
	.byte 0x23, 0x08, 0x2B, 0xCC, 0x08, 0x07, 0x01, 0x59, 0x78, 0x23, 0x08, 0x2B, 0xCE, 0x08, 0x07, 0x01
	.byte 0x59, 0x78, 0x23, 0x08, 0x2B, 0xD0, 0x08, 0x07, 0x01, 0x59, 0x78, 0x23, 0x08, 0x03, 0x17, 0x04
	.byte 0x80, 0x01, 0x00, 0x03, 0x0F, 0x00
	.4byte BattleFrontier_Lounge3_Text_CantYouSeeWereBusyHere
	.byte 0x09, 0x04, 0x05, 0x65, 0x79, 0x23
	.byte 0x08, 0x02, 0x0F, 0x00
	.4byte BattleFrontier_Lounge3_Text_Oh @ ROM pointer 0x082384DA
	.byte 0x09, 0x04, 0x21, 0x33, 0x40, 0x01, 0x00, 0x06, 0x04, 0x86, 0x78, 0x23, 0x08, 0x05, 0x23, 0x77
	.byte 0x23, 0x08, 0x02, 0x21, 0x33, 0x40, 0x01, 0x00, 0x06, 0x01, 0x12, 0x79, 0x23, 0x08, 0x21, 0x33
	.byte 0x40, 0x02, 0x00, 0x06, 0x01, 0xA2, 0x78, 0x23, 0x08, 0x05, 0xE5, 0x78, 0x23, 0x08, 0x02, 0x0F
	.byte 0x00, 0x2E, 0x84, 0x23, 0x08, 0x09, 0x04, 0x21, 0x32, 0x40, 0x00, 0x00, 0x07, 0x01, 0xF4, 0x78
	.byte 0x23, 0x08, 0x21, 0x32, 0x40, 0x01, 0x00, 0x07, 0x01, 0xFE, 0x78, 0x23, 0x08, 0x21, 0x32, 0x40
	.byte 0x02, 0x00, 0x07, 0x01, 0x08, 0x79, 0x23, 0x08, 0x0F, 0x00
	.4byte BattleFrontier_Lounge3_Text_ObtainedBattlePoints
	.byte 0x09, 0x09
	.byte 0x25, 0xC7, 0x01, 0x0F, 0x00, 0xA4, 0x84, 0x23, 0x08, 0x09, 0x04, 0x16, 0x33, 0x40, 0x00, 0x00
	.byte 0x6C, 0x02, 0x0F, 0x00
	.4byte BattleFrontier_Lounge3_Text_NiceTryCantReturnPoints @ ROM pointer 0x082383E2
	.byte 0x09, 0x04, 0x16, 0x33, 0x40, 0x00, 0x00, 0x6C, 0x02, 0x83, 0x00, 0x0A, 0x00, 0x16, 0x04, 0x80
	.byte 0x0A, 0x00, 0x03, 0x83, 0x00, 0x14, 0x00, 0x16, 0x04, 0x80, 0x14, 0x00, 0x03, 0x83, 0x00, 0x1E
	.byte 0x00, 0x16, 0x04, 0x80, 0x1E, 0x00, 0x03, 0x25, 0xD2, 0x01, 0x66, 0x6D, 0x6C, 0x02, 0x0F, 0x00
	.4byte BattleFrontier_Lounge3_Text_NotInterested @ ROM pointer 0x082384BF
	.byte 0x09, 0x04, 0x6C, 0x02, 0x25, 0xC6, 0x01, 0x05, 0x19, 0x79, 0x23, 0x08, 0x02, 0x0F, 0x00, 0x50
	.byte 0x85, 0x23, 0x08, 0x09, 0x02, 0x02, 0x6A, 0x5A, 0x0F, 0x00
	.4byte BattleFrontier_Lounge3_Text_BackedWrongTrainer
	.byte 0x09, 0x04
	.byte 0x05, 0x65, 0x79, 0x23, 0x08, 0x02, 0x6A, 0x5A, 0x0F, 0x00
	.4byte BattleFrontier_Lounge3_Text_KnowWinnerWhenISeeOne
	.byte 0x09, 0x04
	.byte 0x05, 0x65, 0x79, 0x23, 0x08, 0x02, 0x6A, 0x5A, 0x0F, 0x00
	.4byte BattleFrontier_Lounge3_Text_TrainerGoodButRattled
	.byte 0x09, 0x04
	.byte 0x05, 0x65, 0x79, 0x23, 0x08, 0x02, 0x68, 0x4F, 0x0F, 0x80, 0x25, 0x36, 0x24, 0x08, 0x51, 0x00
	.byte 0x00, 0x6C, 0x02
