	@ data/text/apprentice.inc:142 gText_ApprenticeLevelModeThanks7
	.globl gText_ApprenticeLevelModeThanks7
gText_ApprenticeLevelModeThanks7: @ 0x0826DD08
	.string "{STR_VAR_1} ですのね!\nわかりました がんばりますわ!\pそれでは {PLAYER}さん\nこれからも よろしく おねがいしますわ\lごきげんよう!"
	.byte EOS
	.if (. - gText_ApprenticeLevelModeThanks7) > 0x3f
	.error "gText_ApprenticeLevelModeThanks7 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeLevelModeThanks7) < 0x3f
	.space 0x3f - (. - gText_ApprenticeLevelModeThanks7)
	.endif

	@ data/text/apprentice.inc:145 gText_ApprenticePleaseTeach8
	.globl gText_ApprenticePleaseTeach8
gText_ApprenticePleaseTeach8: @ 0x0826DD47
	.string "キャー! キャー!!!\n{PLAYER}さんに はなしかけられた!\lかっ かんげきっ……!\pわたし! {STR_VAR_1}と いいますっ!\nトレーナーに なって すぐに\lポケモンかいの おおもの {PLAYER}さんと\lおはなし できて かんどう してますっ!\pそそそそ そうだ!\n{PLAYER}さん おねがいが!\lわたしを でしに して くださいっ!\lいろいろ おしえて ほしいのですっ!"
	.byte EOS
	.if (. - gText_ApprenticePleaseTeach8) > 0xab
	.error "gText_ApprenticePleaseTeach8 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticePleaseTeach8) < 0xab
	.space 0xab - (. - gText_ApprenticePleaseTeach8)
	.endif

	@ data/text/apprentice.inc:148 gText_ApprenticeRejectTeaching8
	.globl gText_ApprenticeRejectTeaching8
gText_ApprenticeRejectTeaching8: @ 0x0826DDF2
	.string "うっわああ!!\n{PLAYER}さんに ことわられた……\lきっ きちょうな けいけん だわっ!\p{PLAYER}さんっ! こんどは\nよい おへんじも きかせて くださいっ!\lわたしに ごしどうを おねがいしますっ!"
	.byte EOS
	.if (. - gText_ApprenticeRejectTeaching8) > 0x60
	.error "gText_ApprenticeRejectTeaching8 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeRejectTeaching8) < 0x60
	.space 0x60 - (. - gText_ApprenticeRejectTeaching8)
	.endif

	@ data/text/apprentice.inc:151 gText_ApprenticeWhichLevelMode8
	.globl gText_ApprenticeWhichLevelMode8
gText_ApprenticeWhichLevelMode8: @ 0x0826DE52
	.string "ひええええぇ! {PLAYER}さんに\nはい って いわれたああぁ!!\lきょうは もう ねむれない……\lおありがとう ございますう!\pではっ うかがいます!\nわたしは バトルタワー\lレベル50のへやと オープンレベルのへや\lどちらに むいてると おもわれますかっ?"
	.byte EOS
	.if (. - gText_ApprenticeWhichLevelMode8) > 0x7f
	.error "gText_ApprenticeWhichLevelMode8 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichLevelMode8) < 0x7f
	.space 0x7f - (. - gText_ApprenticeWhichLevelMode8)
	.endif

	@ data/text/apprentice.inc:154 gText_ApprenticeLevelModeThanks8
	.globl gText_ApprenticeLevelModeThanks8
gText_ApprenticeLevelModeThanks8: @ 0x0826DED1
	.string "{STR_VAR_1} りょうかいですっ\nりょうかいで ありますっ!\lわたし かんげき です!\pでは また こんど\nいろいろと おしえて くださいね!"
	.byte EOS
	.if (. - gText_ApprenticeLevelModeThanks8) > 0x43
	.error "gText_ApprenticeLevelModeThanks8 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeLevelModeThanks8) < 0x43
	.space 0x43 - (. - gText_ApprenticeLevelModeThanks8)
	.endif

	@ data/text/apprentice.inc:157 gText_ApprenticePleaseTeach9
	.globl gText_ApprenticePleaseTeach9
gText_ApprenticePleaseTeach9: @ 0x0826DF14
	.string "ワォ! きみは\nもしや もしや {PLAYER}{KUN}!\lストロングで フェイマスな トレーナー!\lいや おじさん ラッキーだなー!\pハロウ おじさんは {STR_VAR_1}ね!\nポケモン ティーチャー さがしてるんだ\lそんな ときに グッドタイミングで\l{PLAYER}{KUN}が あらわれた!\pと いうわけで {PLAYER}{KUN}!\nおじさんを でしいり させて くれ!"
	.byte EOS
	.if (. - gText_ApprenticePleaseTeach9) > 0x9f
	.error "gText_ApprenticePleaseTeach9 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticePleaseTeach9) < 0x9f
	.space 0x9f - (. - gText_ApprenticePleaseTeach9)
	.endif

	@ data/text/apprentice.inc:160 gText_ApprenticeRejectTeaching9
	.globl gText_ApprenticeRejectTeaching9
gText_ApprenticeRejectTeaching9: @ 0x0826DFB3
	.string "ぐわーっ!\nきみも なかなか クールで タフだね……\lそんなこと いわずに おねがいだよ!"
	.byte EOS
	.if (. - gText_ApprenticeRejectTeaching9) > 0x2e
	.error "gText_ApprenticeRejectTeaching9 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeRejectTeaching9) < 0x2e
	.space 0x2e - (. - gText_ApprenticeRejectTeaching9)
	.endif

	@ data/text/apprentice.inc:163 gText_ApprenticeWhichLevelMode9
	.globl gText_ApprenticeWhichLevelMode9
gText_ApprenticeWhichLevelMode9: @ 0x0826DFE1
	.string "おぅー! グッと くるね!\nエクセレント!\pでは ファースト アドバイス たのむね!\nバトルタワー なんだけどさ\lおじさんが やるなら レベルは\l50と オープン どっちが ベターかな?"
	.byte EOS
	.if (. - gText_ApprenticeWhichLevelMode9) > 0x5e
	.error "gText_ApprenticeWhichLevelMode9 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichLevelMode9) < 0x5e
	.space 0x5e - (. - gText_ApprenticeWhichLevelMode9)
	.endif

	@ data/text/apprentice.inc:166 gText_ApprenticeLevelModeThanks9
	.globl gText_ApprenticeLevelModeThanks9
gText_ApprenticeLevelModeThanks9: @ 0x0826E03F
	.string "あはぁ {STR_VAR_1}ね\nオーケイ オーケイ!\lおじさん バーっと がんばって くるよ!\pそれじゃあ これからも よろしくね\nアディオース!"
	.byte EOS
	.if (. - gText_ApprenticeLevelModeThanks9) > 0x42
	.error "gText_ApprenticeLevelModeThanks9 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeLevelModeThanks9) < 0x42
	.space 0x42 - (. - gText_ApprenticeLevelModeThanks9)
	.endif

	@ data/text/apprentice.inc:169 gText_ApprenticePleaseTeach10
	.globl gText_ApprenticePleaseTeach10
gText_ApprenticePleaseTeach10: @ 0x0826E081
	.string "お おいっ {PLAYER}{KUN}だろ!\nさっき おまわりさんが さがしてたぞ!\p…… …… ……\nなんてね うっそ うそ!\pおいらは {STR_VAR_1} って いうんだ\nこうみえても ポケモンチャンピオンさ!\l……て いうのも ウソ!\pじつは おいら ポケモンしょうぶが\nあんまり とくいじゃ なくてさ!\lひとつ どうだろ\lおいらの ししょうに なってくれない かな?"
	.byte EOS
	.if (. - gText_ApprenticePleaseTeach10) > 0xac
	.error "gText_ApprenticePleaseTeach10 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticePleaseTeach10) < 0xac
	.space 0xac - (. - gText_ApprenticePleaseTeach10)
	.endif

	@ data/text/apprentice.inc:172 gText_ApprenticeRejectTeaching10
	.globl gText_ApprenticeRejectTeaching10
gText_ApprenticeRejectTeaching10: @ 0x0826E12D
	.string "そんな つめたい こと いうと\nこうだぞ!\pうえーん うえーん えーん えん えん\pなんてね うそなき!\pね! いいだろ\nおいらの ししょうに なって おくれよ!"
	.byte EOS
	.if (. - gText_ApprenticeRejectTeaching10) > 0x52
	.error "gText_ApprenticeRejectTeaching10 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeRejectTeaching10) < 0x52
	.space 0x52 - (. - gText_ApprenticeRejectTeaching10)
	.endif

	@ data/text/apprentice.inc:175 gText_ApprenticeWhichLevelMode10
	.globl gText_ApprenticeWhichLevelMode10
gText_ApprenticeWhichLevelMode10: @ 0x0826E17F
	.string "やったー!\nおれいに ふねを かって あげよう!\pなんて じょうだん だけど……\nししょう! よろしく たのむぜ!\pあのさ バトルタワーで\nレベル50と オープンレベルと あるだろ!\pどっちで がんばれば いいか\nまよってるんだよ……\lししょうが きめて くれないかな?"
	.byte EOS
	.if (. - gText_ApprenticeWhichLevelMode10) > 0x88
	.error "gText_ApprenticeWhichLevelMode10 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichLevelMode10) < 0x88
	.space 0x88 - (. - gText_ApprenticeWhichLevelMode10)
	.endif

	@ data/text/apprentice.inc:178 gText_ApprenticeLevelModeThanks10
	.globl gText_ApprenticeLevelModeThanks10
gText_ApprenticeLevelModeThanks10: @ 0x0826E207
	.string "そうか\n{STR_VAR_1}が いいのね!\lじゃあ ちがうほうに いこうっと!\p…… なんて じょうだん!\nちゃんと ししょうの いうこと きくよ\pありがとう ししょう!\nまた あったら よろしくなー"
	.byte EOS
	.if (. - gText_ApprenticeLevelModeThanks10) > 0x5d
	.error "gText_ApprenticeLevelModeThanks10 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeLevelModeThanks10) < 0x5d
	.space 0x5d - (. - gText_ApprenticeLevelModeThanks10)
	.endif

	@ data/text/apprentice.inc:181 gText_ApprenticePleaseTeach11
	.globl gText_ApprenticePleaseTeach11
gText_ApprenticePleaseTeach11: @ 0x0826E264
	.string "は・じ・め・ま・し・て!\nはーい はじめまして!\lわし ノリノリ ふなのり {STR_VAR_1}!\lきみも じこしょうかい いってみようぜ!\pふん ふん なまえは {PLAYER}{KUN}!\nポケモン だいすきで\lびみょうな おとしごろね!\pじつは きみは わしが はなしかけた\nほんじつ 10にんめの トレーナーでーす!\pこの であいを きねんして\nぜひとも わしを でしに してください!"
	.byte EOS
	.if (. - gText_ApprenticePleaseTeach11) > 0xb5
	.error "gText_ApprenticePleaseTeach11 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticePleaseTeach11) < 0xb5
	.space 0xb5 - (. - gText_ApprenticePleaseTeach11)
	.endif

	@ data/text/apprentice.inc:184 gText_ApprenticeRejectTeaching11
	.globl gText_ApprenticeRejectTeaching11
gText_ApprenticeRejectTeaching11: @ 0x0826E319
	.string "そんな!\nノリが わるいじゃ ないか!\pな いいじゃ ないか\nぜひとも わしを でしに してください!"
	.byte EOS
	.if (. - gText_ApprenticeRejectTeaching11) > 0x34
	.error "gText_ApprenticeRejectTeaching11 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeRejectTeaching11) < 0x34
	.space 0x34 - (. - gText_ApprenticeRejectTeaching11)
	.endif

	@ data/text/apprentice.inc:187 gText_ApprenticeWhichLevelMode11
	.globl gText_ApprenticeWhichLevelMode11
gText_ApprenticeWhichLevelMode11: @ 0x0826E34D
	.string "ようよう! ノリが いいね!\n{PLAYER}さん よろしく たのみますよ!\pそれじゃあ 1つめの しつもん\nいってみようぜ!\lバトルタワーに かんする しつもんだ!\pレベル50のへやと オープンレベルのへや\nわしが いくなら さあ どっち?"
	.byte EOS
	.if (. - gText_ApprenticeWhichLevelMode11) > 0x74
	.error "gText_ApprenticeWhichLevelMode11 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichLevelMode11) < 0x74
	.space 0x74 - (. - gText_ApprenticeWhichLevelMode11)
	.endif

