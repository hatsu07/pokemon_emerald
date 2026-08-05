	@ data/text/apprentice.inc:142 gText_ApprenticeLevelModeThanks7
	.globl gText_Rom_26DD08
gText_Rom_26DD08: @ 0x0826DD08
	.string "{STR_VAR_1} ですのね!\nわかりました がんばりますわ!\pそれでは {PLAYER}さん\nこれからも よろしく おねがいしますわ\lごきげんよう!"
	.byte EOS
	.if (. - gText_Rom_26DD08) > 0x3f
	.error "gText_Rom_26DD08 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26DD08) < 0x3f
	.space 0x3f - (. - gText_Rom_26DD08)
	.endif

	@ data/text/apprentice.inc:145 gText_ApprenticePleaseTeach8
	.globl gText_Rom_26DD47
gText_Rom_26DD47: @ 0x0826DD47
	.string "キャー! キャー!!!\n{PLAYER}さんに はなしかけられた!\lかっ かんげきっ……!\pわたし! {STR_VAR_1}と いいますっ!\nトレーナーに なって すぐに\lポケモンかいの おおもの {PLAYER}さんと\lおはなし できて かんどう してますっ!\pそそそそ そうだ!\n{PLAYER}さん おねがいが!\lわたしを でしに して くださいっ!\lいろいろ おしえて ほしいのですっ!"
	.byte EOS
	.if (. - gText_Rom_26DD47) > 0xab
	.error "gText_Rom_26DD47 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26DD47) < 0xab
	.space 0xab - (. - gText_Rom_26DD47)
	.endif

	@ data/text/apprentice.inc:148 gText_ApprenticeRejectTeaching8
	.globl gText_Rom_26DDF2
gText_Rom_26DDF2: @ 0x0826DDF2
	.string "うっわああ!!\n{PLAYER}さんに ことわられた……\lきっ きちょうな けいけん だわっ!\p{PLAYER}さんっ! こんどは\nよい おへんじも きかせて くださいっ!\lわたしに ごしどうを おねがいしますっ!"
	.byte EOS
	.if (. - gText_Rom_26DDF2) > 0x60
	.error "gText_Rom_26DDF2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26DDF2) < 0x60
	.space 0x60 - (. - gText_Rom_26DDF2)
	.endif

	@ data/text/apprentice.inc:151 gText_ApprenticeWhichLevelMode8
	.globl gText_Rom_26DE52
gText_Rom_26DE52: @ 0x0826DE52
	.string "ひええええぇ! {PLAYER}さんに\nはい って いわれたああぁ!!\lきょうは もう ねむれない……\lおありがとう ございますう!\pではっ うかがいます!\nわたしは バトルタワー\lレベル50のへやと オープンレベルのへや\lどちらに むいてると おもわれますかっ?"
	.byte EOS
	.if (. - gText_Rom_26DE52) > 0x7f
	.error "gText_Rom_26DE52 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26DE52) < 0x7f
	.space 0x7f - (. - gText_Rom_26DE52)
	.endif

	@ data/text/apprentice.inc:154 gText_ApprenticeLevelModeThanks8
	.globl gText_Rom_26DED1
gText_Rom_26DED1: @ 0x0826DED1
	.string "{STR_VAR_1} りょうかいですっ\nりょうかいで ありますっ!\lわたし かんげき です!\pでは また こんど\nいろいろと おしえて くださいね!"
	.byte EOS
	.if (. - gText_Rom_26DED1) > 0x43
	.error "gText_Rom_26DED1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26DED1) < 0x43
	.space 0x43 - (. - gText_Rom_26DED1)
	.endif

	@ data/text/apprentice.inc:157 gText_ApprenticePleaseTeach9
	.globl gText_Rom_26DF14
gText_Rom_26DF14: @ 0x0826DF14
	.string "ワォ! きみは\nもしや もしや {PLAYER}{KUN}!\lストロングで フェイマスな トレーナー!\lいや おじさん ラッキーだなー!\pハロウ おじさんは {STR_VAR_1}ね!\nポケモン ティーチャー さがしてるんだ\lそんな ときに グッドタイミングで\l{PLAYER}{KUN}が あらわれた!\pと いうわけで {PLAYER}{KUN}!\nおじさんを でしいり させて くれ!"
	.byte EOS
	.if (. - gText_Rom_26DF14) > 0x9f
	.error "gText_Rom_26DF14 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26DF14) < 0x9f
	.space 0x9f - (. - gText_Rom_26DF14)
	.endif

	@ data/text/apprentice.inc:160 gText_ApprenticeRejectTeaching9
	.globl gText_Rom_26DFB3
gText_Rom_26DFB3: @ 0x0826DFB3
	.string "ぐわーっ!\nきみも なかなか クールで タフだね……\lそんなこと いわずに おねがいだよ!"
	.byte EOS
	.if (. - gText_Rom_26DFB3) > 0x2e
	.error "gText_Rom_26DFB3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26DFB3) < 0x2e
	.space 0x2e - (. - gText_Rom_26DFB3)
	.endif

	@ data/text/apprentice.inc:163 gText_ApprenticeWhichLevelMode9
	.globl gText_Rom_26DFE1
gText_Rom_26DFE1: @ 0x0826DFE1
	.string "おぅー! グッと くるね!\nエクセレント!\pでは ファースト アドバイス たのむね!\nバトルタワー なんだけどさ\lおじさんが やるなら レベルは\l50と オープン どっちが ベターかな?"
	.byte EOS
	.if (. - gText_Rom_26DFE1) > 0x5e
	.error "gText_Rom_26DFE1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26DFE1) < 0x5e
	.space 0x5e - (. - gText_Rom_26DFE1)
	.endif

	@ data/text/apprentice.inc:166 gText_ApprenticeLevelModeThanks9
	.globl gText_Rom_26E03F
gText_Rom_26E03F: @ 0x0826E03F
	.string "あはぁ {STR_VAR_1}ね\nオーケイ オーケイ!\lおじさん バーっと がんばって くるよ!\pそれじゃあ これからも よろしくね\nアディオース!"
	.byte EOS
	.if (. - gText_Rom_26E03F) > 0x42
	.error "gText_Rom_26E03F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26E03F) < 0x42
	.space 0x42 - (. - gText_Rom_26E03F)
	.endif

	@ data/text/apprentice.inc:169 gText_ApprenticePleaseTeach10
	.globl gText_Rom_26E081
gText_Rom_26E081: @ 0x0826E081
	.string "お おいっ {PLAYER}{KUN}だろ!\nさっき おまわりさんが さがしてたぞ!\p…… …… ……\nなんてね うっそ うそ!\pおいらは {STR_VAR_1} って いうんだ\nこうみえても ポケモンチャンピオンさ!\l……て いうのも ウソ!\pじつは おいら ポケモンしょうぶが\nあんまり とくいじゃ なくてさ!\lひとつ どうだろ\lおいらの ししょうに なってくれない かな?"
	.byte EOS
	.if (. - gText_Rom_26E081) > 0xac
	.error "gText_Rom_26E081 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26E081) < 0xac
	.space 0xac - (. - gText_Rom_26E081)
	.endif

	@ data/text/apprentice.inc:172 gText_ApprenticeRejectTeaching10
	.globl gText_Rom_26E12D
gText_Rom_26E12D: @ 0x0826E12D
	.string "そんな つめたい こと いうと\nこうだぞ!\pうえーん うえーん えーん えん えん\pなんてね うそなき!\pね! いいだろ\nおいらの ししょうに なって おくれよ!"
	.byte EOS
	.if (. - gText_Rom_26E12D) > 0x52
	.error "gText_Rom_26E12D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26E12D) < 0x52
	.space 0x52 - (. - gText_Rom_26E12D)
	.endif

	@ data/text/apprentice.inc:175 gText_ApprenticeWhichLevelMode10
	.globl gText_Rom_26E17F
gText_Rom_26E17F: @ 0x0826E17F
	.string "やったー!\nおれいに ふねを かって あげよう!\pなんて じょうだん だけど……\nししょう! よろしく たのむぜ!\pあのさ バトルタワーで\nレベル50と オープンレベルと あるだろ!\pどっちで がんばれば いいか\nまよってるんだよ……\lししょうが きめて くれないかな?"
	.byte EOS
	.if (. - gText_Rom_26E17F) > 0x88
	.error "gText_Rom_26E17F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26E17F) < 0x88
	.space 0x88 - (. - gText_Rom_26E17F)
	.endif

	@ data/text/apprentice.inc:178 gText_ApprenticeLevelModeThanks10
	.globl gText_Rom_26E207
gText_Rom_26E207: @ 0x0826E207
	.string "そうか\n{STR_VAR_1}が いいのね!\lじゃあ ちがうほうに いこうっと!\p…… なんて じょうだん!\nちゃんと ししょうの いうこと きくよ\pありがとう ししょう!\nまた あったら よろしくなー"
	.byte EOS
	.if (. - gText_Rom_26E207) > 0x5d
	.error "gText_Rom_26E207 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26E207) < 0x5d
	.space 0x5d - (. - gText_Rom_26E207)
	.endif

	@ data/text/apprentice.inc:181 gText_ApprenticePleaseTeach11
	.globl gText_Rom_26E264
gText_Rom_26E264: @ 0x0826E264
	.string "は・じ・め・ま・し・て!\nはーい はじめまして!\lわし ノリノリ ふなのり {STR_VAR_1}!\lきみも じこしょうかい いってみようぜ!\pふん ふん なまえは {PLAYER}{KUN}!\nポケモン だいすきで\lびみょうな おとしごろね!\pじつは きみは わしが はなしかけた\nほんじつ 10にんめの トレーナーでーす!\pこの であいを きねんして\nぜひとも わしを でしに してください!"
	.byte EOS
	.if (. - gText_Rom_26E264) > 0xb5
	.error "gText_Rom_26E264 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26E264) < 0xb5
	.space 0xb5 - (. - gText_Rom_26E264)
	.endif

	@ data/text/apprentice.inc:184 gText_ApprenticeRejectTeaching11
	.globl gText_Rom_26E319
gText_Rom_26E319: @ 0x0826E319
	.string "そんな!\nノリが わるいじゃ ないか!\pな いいじゃ ないか\nぜひとも わしを でしに してください!"
	.byte EOS
	.if (. - gText_Rom_26E319) > 0x34
	.error "gText_Rom_26E319 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26E319) < 0x34
	.space 0x34 - (. - gText_Rom_26E319)
	.endif

	@ data/text/apprentice.inc:187 gText_ApprenticeWhichLevelMode11
	.globl gText_Rom_26E34D
gText_Rom_26E34D: @ 0x0826E34D
	.string "ようよう! ノリが いいね!\n{PLAYER}さん よろしく たのみますよ!\pそれじゃあ 1つめの しつもん\nいってみようぜ!\lバトルタワーに かんする しつもんだ!\pレベル50のへやと オープンレベルのへや\nわしが いくなら さあ どっち?"
	.byte EOS
	.if (. - gText_Rom_26E34D) > 0x74
	.error "gText_Rom_26E34D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26E34D) < 0x74
	.space 0x74 - (. - gText_Rom_26E34D)
	.endif

