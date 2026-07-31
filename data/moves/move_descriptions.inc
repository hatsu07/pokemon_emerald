@ TM/HM move descriptions shared by the item table and move-description tables.
@ ROM: 0x0855C3BF - 0x0855CB51

@ TM01: きあいパンチ
    .globl gMoveDescription_FocusPunch
gMoveDescription_FocusPunch: @ 0x0855C3BF
    .string "てきに だいダメージを\nあたえるが こうげきを\nうけると ひるんでしまう"
    .byte EOS
    .if (. - gMoveDescription_FocusPunch) > 0x25
    .error "gMoveDescription_FocusPunch exceeds its original slot"
    .endif
    .if (. - gMoveDescription_FocusPunch) < 0x25
    .space 0x25 - (. - gMoveDescription_FocusPunch)
    .endif

@ TM02: ドラゴンクロー
    .globl gMoveDescription_DragonClaw
gMoveDescription_DragonClaw: @ 0x0855C3E4
    .string "ながく するどい ツメで\nてきを ひっかけて\nこうげきする"
    .byte EOS
    .if (. - gMoveDescription_DragonClaw) > 0x1E
    .error "gMoveDescription_DragonClaw exceeds its original slot"
    .endif
    .if (. - gMoveDescription_DragonClaw) < 0x1E
    .space 0x1E - (. - gMoveDescription_DragonClaw)
    .endif

@ TM03: みずのはどう
    .globl gMoveDescription_WaterPulse
gMoveDescription_WaterPulse: @ 0x0855C402
    .string "ちょうおんぱ こうげきで\nてきを こんらんさせる\nことがある"
    .byte EOS
    .if (. - gMoveDescription_WaterPulse) > 0x1F
    .error "gMoveDescription_WaterPulse exceeds its original slot"
    .endif
    .if (. - gMoveDescription_WaterPulse) < 0x1F
    .space 0x1F - (. - gMoveDescription_WaterPulse)
    .endif

@ TM04: めいそう
    .globl gMoveDescription_CalmMind
gMoveDescription_CalmMind: @ 0x0855C421
    .string "せいしんを しゅうちゅう\nさせて とくこうと\nとくぼうを あげる"
    .byte EOS
    .if (. - gMoveDescription_CalmMind) > 0x21
    .error "gMoveDescription_CalmMind exceeds its original slot"
    .endif
    .if (. - gMoveDescription_CalmMind) < 0x21
    .space 0x21 - (. - gMoveDescription_CalmMind)
    .endif

@ TM05: ほえる
    .globl gMoveDescription_Roar
gMoveDescription_Roar: @ 0x0855C442
    .string "ほえて てきを にがす\nてきが にげると\nせんとうは おわる"
    .byte EOS
    .if (. - gMoveDescription_Roar) > 0x1F
    .error "gMoveDescription_Roar exceeds its original slot"
    .endif
    .if (. - gMoveDescription_Roar) < 0x1F
    .space 0x1F - (. - gMoveDescription_Roar)
    .endif

@ TM06: どくどく
    .globl gMoveDescription_Toxic
gMoveDescription_Toxic: @ 0x0855C461
    .string "じょじょに ダメージが\nふえる もうどくを\nてきに あたえる"
    .byte EOS
    .if (. - gMoveDescription_Toxic) > 0x1F
    .error "gMoveDescription_Toxic exceeds its original slot"
    .endif
    .if (. - gMoveDescription_Toxic) < 0x1F
    .space 0x1F - (. - gMoveDescription_Toxic)
    .endif

@ TM07: あられ
    .globl gMoveDescription_Hail
gMoveDescription_Hail: @ 0x0855C480
    .string "あられを ふらして\nこおりタイプ いがいに\nダメージを あたえる"
    .byte EOS
    .if (. - gMoveDescription_Hail) > 0x21
    .error "gMoveDescription_Hail exceeds its original slot"
    .endif
    .if (. - gMoveDescription_Hail) < 0x21
    .space 0x21 - (. - gMoveDescription_Hail)
    .endif

@ TM08: ビルドアップ
    .globl gMoveDescription_BulkUp
gMoveDescription_BulkUp: @ 0x0855C4A1
    .string "からだを きたえて\nこうげきと ぼうぎょの\nちからを あげる"
    .byte EOS
    .if (. - gMoveDescription_BulkUp) > 0x1F
    .error "gMoveDescription_BulkUp exceeds its original slot"
    .endif
    .if (. - gMoveDescription_BulkUp) < 0x1F
    .space 0x1F - (. - gMoveDescription_BulkUp)
    .endif

@ TM09: タネマシンガン
    .globl gMoveDescription_BulletSeed
gMoveDescription_BulletSeed: @ 0x0855C4C0
    .string "タネを 2ー5かい\nれんぞくで はっしゃして\nてきを こうげきする"
    .byte EOS
    .if (. - gMoveDescription_BulletSeed) > 0x22
    .error "gMoveDescription_BulletSeed exceeds its original slot"
    .endif
    .if (. - gMoveDescription_BulletSeed) < 0x22
    .space 0x22 - (. - gMoveDescription_BulletSeed)
    .endif

@ TM10: めざめるパワー
    .globl gMoveDescription_HiddenPower
gMoveDescription_HiddenPower: @ 0x0855C4E2
    .string "ポケモンによって てきに\nあたえる ダメージの\nりょうが へんかする"
    .byte EOS
    .if (. - gMoveDescription_HiddenPower) > 0x23
    .error "gMoveDescription_HiddenPower exceeds its original slot"
    .endif
    .if (. - gMoveDescription_HiddenPower) < 0x23
    .space 0x23 - (. - gMoveDescription_HiddenPower)
    .endif

@ TM11: にほんばれ
    .globl gMoveDescription_SunnyDay
gMoveDescription_SunnyDay: @ 0x0855C505
    .string "5ターンの あいだ\nほのおタイプの\nわざのいりょくが あがる"
    .byte EOS
    .if (. - gMoveDescription_SunnyDay) > 0x1F
    .error "gMoveDescription_SunnyDay exceeds its original slot"
    .endif
    .if (. - gMoveDescription_SunnyDay) < 0x1F
    .space 0x1F - (. - gMoveDescription_SunnyDay)
    .endif

@ TM12: ちょうはつ
    .globl gMoveDescription_Taunt
gMoveDescription_Taunt: @ 0x0855C524
    .string "あいてを おこらせて\nこうげきわざ しか\nだせない ように する"
    .byte EOS
    .if (. - gMoveDescription_Taunt) > 0x21
    .error "gMoveDescription_Taunt exceeds its original slot"
    .endif
    .if (. - gMoveDescription_Taunt) < 0x21
    .space 0x21 - (. - gMoveDescription_Taunt)
    .endif

@ TM13: れいとうビーム
    .globl gMoveDescription_IceBeam
gMoveDescription_IceBeam: @ 0x0855C545
    .string "れいきを はっしゃして\nてきを こうげきする\nこおらせる ことがある"
    .byte EOS
    .if (. - gMoveDescription_IceBeam) > 0x23
    .error "gMoveDescription_IceBeam exceeds its original slot"
    .endif
    .if (. - gMoveDescription_IceBeam) < 0x23
    .space 0x23 - (. - gMoveDescription_IceBeam)
    .endif

@ TM14: ふぶき
    .globl gMoveDescription_Blizzard
gMoveDescription_Blizzard: @ 0x0855C568
    .string "ゆきを つよいかぜに\nのせて こうげきする\nこおらせる ことがある"
    .byte EOS
    .if (. - gMoveDescription_Blizzard) > 0x22
    .error "gMoveDescription_Blizzard exceeds its original slot"
    .endif
    .if (. - gMoveDescription_Blizzard) < 0x22
    .space 0x22 - (. - gMoveDescription_Blizzard)
    .endif

@ TM15: はかいこうせん
    .globl gMoveDescription_HyperBeam
gMoveDescription_HyperBeam: @ 0x0855C58A
    .string "ダメージは おおきいが\nつかうと つぎのターン\nうごけなく なってしまう"
    .byte EOS
    .if (. - gMoveDescription_HyperBeam) > 0x25
    .error "gMoveDescription_HyperBeam exceeds its original slot"
    .endif
    .if (. - gMoveDescription_HyperBeam) < 0x25
    .space 0x25 - (. - gMoveDescription_HyperBeam)
    .endif

@ TM16: ひかりのかべ
    .globl gMoveDescription_LightScreen
gMoveDescription_LightScreen: @ 0x0855C5AF
    .string "ひかりのかべを つくり\nとくこうの ダメージを\nよわめる"
    .byte EOS
    .if (. - gMoveDescription_LightScreen) > 0x1D
    .error "gMoveDescription_LightScreen exceeds its original slot"
    .endif
    .if (. - gMoveDescription_LightScreen) < 0x1D
    .space 0x1D - (. - gMoveDescription_LightScreen)
    .endif

@ TM17: まもる
    .globl gMoveDescription_Protect
gMoveDescription_Protect: @ 0x0855C5CC
    .string "そのターンの こうげきを\nうけないが れんぞくして\nだすと しっぱいしやすい"
    .byte EOS
    .if (. - gMoveDescription_Protect) > 0x27
    .error "gMoveDescription_Protect exceeds its original slot"
    .endif
    .if (. - gMoveDescription_Protect) < 0x27
    .space 0x27 - (. - gMoveDescription_Protect)
    .endif

@ TM18: あまごい
    .globl gMoveDescription_RainDance
gMoveDescription_RainDance: @ 0x0855C5F3
    .string "5ターンの あいだ\nみずタイプの\nわざのいりょくが あがる"
    .byte EOS
    .if (. - gMoveDescription_RainDance) > 0x1E
    .error "gMoveDescription_RainDance exceeds its original slot"
    .endif
    .if (. - gMoveDescription_RainDance) < 0x1E
    .space 0x1E - (. - gMoveDescription_RainDance)
    .endif

@ TM19: ギガドレイン
    .globl gMoveDescription_GigaDrain
gMoveDescription_GigaDrain: @ 0x0855C611
    .string "あたえた ダメージの\nはんぶんの たいりょくを\nかいふく できる"
    .byte EOS
    .if (. - gMoveDescription_GigaDrain) > 0x21
    .error "gMoveDescription_GigaDrain exceeds its original slot"
    .endif
    .if (. - gMoveDescription_GigaDrain) < 0x21
    .space 0x21 - (. - gMoveDescription_GigaDrain)
    .endif

@ TM20: しんぴのまもり
    .globl gMoveDescription_Safeguard
gMoveDescription_Safeguard: @ 0x0855C632
    .string "ふしぎな ちからに\nまもられて とくしゅ\nじょうたいに ならない"
    .byte EOS
    .if (. - gMoveDescription_Safeguard) > 0x21
    .error "gMoveDescription_Safeguard exceeds its original slot"
    .endif
    .if (. - gMoveDescription_Safeguard) < 0x21
    .space 0x21 - (. - gMoveDescription_Safeguard)
    .endif

@ TM21: やつあたり
    .globl gMoveDescription_Frustration
gMoveDescription_Frustration: @ 0x0855C653
    .string "ポケモンが なついて\nいないほど あたえる\nダメージが あがる"
    .byte EOS
    .if (. - gMoveDescription_Frustration) > 0x20
    .error "gMoveDescription_Frustration exceeds its original slot"
    .endif
    .if (. - gMoveDescription_Frustration) < 0x20
    .space 0x20 - (. - gMoveDescription_Frustration)
    .endif

@ TM22: ソーラービーム
    .globl gMoveDescription_SolarBeam
gMoveDescription_SolarBeam: @ 0x0855C673
    .string "1ターンめで ひかりを\nきゅうしゅうして つぎの\nターンに こうげきする"
    .byte EOS
    .if (. - gMoveDescription_SolarBeam) > 0x25
    .error "gMoveDescription_SolarBeam exceeds its original slot"
    .endif
    .if (. - gMoveDescription_SolarBeam) < 0x25
    .space 0x25 - (. - gMoveDescription_SolarBeam)
    .endif

@ TM23: アイアンテール
    .globl gMoveDescription_IronTail
gMoveDescription_IronTail: @ 0x0855C698
    .string "かたいシッポで こうげき\nてきの ぼうぎょを\nさげる ことがある"
    .byte EOS
    .if (. - gMoveDescription_IronTail) > 0x21
    .error "gMoveDescription_IronTail exceeds its original slot"
    .endif
    .if (. - gMoveDescription_IronTail) < 0x21
    .space 0x21 - (. - gMoveDescription_IronTail)
    .endif

@ TM24: 10まんボルト
    .globl gMoveDescription_Thunderbolt
gMoveDescription_Thunderbolt: @ 0x0855C6B9
    .string "でんげきを あびせる\nあたった てきを\nまひさせる ことがある"
    .byte EOS
    .if (. - gMoveDescription_Thunderbolt) > 0x20
    .error "gMoveDescription_Thunderbolt exceeds its original slot"
    .endif
    .if (. - gMoveDescription_Thunderbolt) < 0x20
    .space 0x20 - (. - gMoveDescription_Thunderbolt)
    .endif

@ TM25: かみなり
    .globl gMoveDescription_Thunder
gMoveDescription_Thunder: @ 0x0855C6D9
    .string "かみなりを おとす\nあたった てきを\nまひさせる ことがある"
    .byte EOS
    .if (. - gMoveDescription_Thunder) > 0x1F
    .error "gMoveDescription_Thunder exceeds its original slot"
    .endif
    .if (. - gMoveDescription_Thunder) < 0x1F
    .space 0x1F - (. - gMoveDescription_Thunder)
    .endif

@ TM26: じしん
    .globl gMoveDescription_Earthquake
gMoveDescription_Earthquake: @ 0x0855C6F8
    .string "じめんを つよく ゆらす\nとんでいる てきいがいに\nだいダメージを あたえる"
    .byte EOS
    .if (. - gMoveDescription_Earthquake) > 0x27
    .error "gMoveDescription_Earthquake exceeds its original slot"
    .endif
    .if (. - gMoveDescription_Earthquake) < 0x27
    .space 0x27 - (. - gMoveDescription_Earthquake)
    .endif

@ TM27: おんがえし
    .globl gMoveDescription_Return
gMoveDescription_Return: @ 0x0855C71F
    .string "ポケモンが なついて\nいるほど あたえる\nダメージが あがる"
    .byte EOS
    .if (. - gMoveDescription_Return) > 0x1F
    .error "gMoveDescription_Return exceeds its original slot"
    .endif
    .if (. - gMoveDescription_Return) < 0x1F
    .space 0x1F - (. - gMoveDescription_Return)
    .endif

@ TM28: あなをほる
    .globl gMoveDescription_Dig
gMoveDescription_Dig: @ 0x0855C73E
    .string "1ターンめで じめんに\nもぐり つぎのターンに\nてきを こうげきする"
    .byte EOS
    .if (. - gMoveDescription_Dig) > 0x23
    .error "gMoveDescription_Dig exceeds its original slot"
    .endif
    .if (. - gMoveDescription_Dig) < 0x23
    .space 0x23 - (. - gMoveDescription_Dig)
    .endif

@ TM29: サイコキネシス
    .globl gMoveDescription_Psychic
gMoveDescription_Psychic: @ 0x0855C761
    .string "つよい ねんりきを だす\nてきの とくぼうを\nさげる ことがある"
    .byte EOS
    .if (. - gMoveDescription_Psychic) > 0x21
    .error "gMoveDescription_Psychic exceeds its original slot"
    .endif
    .if (. - gMoveDescription_Psychic) < 0x21
    .space 0x21 - (. - gMoveDescription_Psychic)
    .endif

@ TM30: シャドーボール
    .globl gMoveDescription_ShadowBall
gMoveDescription_ShadowBall: @ 0x0855C782
    .string "くろいかたまりを なげる\nてきの とくぼうを\nさげる ことがある"
    .byte EOS
    .if (. - gMoveDescription_ShadowBall) > 0x21
    .error "gMoveDescription_ShadowBall exceeds its original slot"
    .endif
    .if (. - gMoveDescription_ShadowBall) < 0x21
    .space 0x21 - (. - gMoveDescription_ShadowBall)
    .endif

@ TM31: かわらわり
    .globl gMoveDescription_BrickBreak
gMoveDescription_BrickBreak: @ 0x0855C7A3
    .string "ひかりのかべ などを\nこわして てきに  \nダメージを あたえられる"
    .byte EOS
    .if (. - gMoveDescription_BrickBreak) > 0x23
    .error "gMoveDescription_BrickBreak exceeds its original slot"
    .endif
    .if (. - gMoveDescription_BrickBreak) < 0x23
    .space 0x23 - (. - gMoveDescription_BrickBreak)
    .endif

@ TM32: かげぶんしん
    .globl gMoveDescription_DoubleTeam
gMoveDescription_DoubleTeam: @ 0x0855C7C6
    .string "ぶんしんを つくって\nてきを まどわせて\nかいひりつを あげる"
    .byte EOS
    .if (. - gMoveDescription_DoubleTeam) > 0x20
    .error "gMoveDescription_DoubleTeam exceeds its original slot"
    .endif
    .if (. - gMoveDescription_DoubleTeam) < 0x20
    .space 0x20 - (. - gMoveDescription_DoubleTeam)
    .endif

@ TM33: リフレクター
    .globl gMoveDescription_Reflect
gMoveDescription_Reflect: @ 0x0855C7E6
    .string "ひかりのかべを つくり\nぶつり こうげきの\nダメージを よわめる"
    .byte EOS
    .if (. - gMoveDescription_Reflect) > 0x21
    .error "gMoveDescription_Reflect exceeds its original slot"
    .endif
    .if (. - gMoveDescription_Reflect) < 0x21
    .space 0x21 - (. - gMoveDescription_Reflect)
    .endif

@ TM34: でんげきは
    .globl gMoveDescription_ShockWave
gMoveDescription_ShockWave: @ 0x0855C807
    .string "ぜったいに よけられない\nすばやさで てきに\nでんげきを あびせる"
    .byte EOS
    .if (. - gMoveDescription_ShockWave) > 0x22
    .error "gMoveDescription_ShockWave exceeds its original slot"
    .endif
    .if (. - gMoveDescription_ShockWave) < 0x22
    .space 0x22 - (. - gMoveDescription_ShockWave)
    .endif

@ TM35: かえんほうしゃ
    .globl gMoveDescription_Flamethrower
gMoveDescription_Flamethrower: @ 0x0855C829
    .string "ほのおを まきちらす\nあたった てきを\nやけどさせる ことがある"
    .byte EOS
    .if (. - gMoveDescription_Flamethrower) > 0x21
    .error "gMoveDescription_Flamethrower exceeds its original slot"
    .endif
    .if (. - gMoveDescription_Flamethrower) < 0x21
    .space 0x21 - (. - gMoveDescription_Flamethrower)
    .endif

@ TM36: ヘドロばくだん
    .globl gMoveDescription_SludgeBomb
gMoveDescription_SludgeBomb: @ 0x0855C84A
    .string "ヘドロを なげつける\nあたった てきに どくを\nあたえることが ある"
    .byte EOS
    .if (. - gMoveDescription_SludgeBomb) > 0x23
    .error "gMoveDescription_SludgeBomb exceeds its original slot"
    .endif
    .if (. - gMoveDescription_SludgeBomb) < 0x23
    .space 0x23 - (. - gMoveDescription_SludgeBomb)
    .endif

@ TM37: すなあらし
    .globl gMoveDescription_Sandstorm
gMoveDescription_Sandstorm: @ 0x0855C86D
    .string "すなあらしを おこして\nまいターン てきに\nダメージを あたえる"
    .byte EOS
    .if (. - gMoveDescription_Sandstorm) > 0x21
    .error "gMoveDescription_Sandstorm exceeds its original slot"
    .endif
    .if (. - gMoveDescription_Sandstorm) < 0x21
    .space 0x21 - (. - gMoveDescription_Sandstorm)
    .endif

@ TM38: だいもんじ
    .globl gMoveDescription_FireBlast
gMoveDescription_FireBlast: @ 0x0855C88E
    .string "だいの もじで すべてを\nやきつくす こうげき\nやけどさせる ことがある"
    .byte EOS
    .if (. - gMoveDescription_FireBlast) > 0x25
    .error "gMoveDescription_FireBlast exceeds its original slot"
    .endif
    .if (. - gMoveDescription_FireBlast) < 0x25
    .space 0x25 - (. - gMoveDescription_FireBlast)
    .endif

@ TM39: がんせきふうじ
    .globl gMoveDescription_RockTomb
gMoveDescription_RockTomb: @ 0x0855C8B3
    .string "いわで てきの うごきを\nふうじて こうげき\nすばやさを さげられる"
    .byte EOS
    .if (. - gMoveDescription_RockTomb) > 0x23
    .error "gMoveDescription_RockTomb exceeds its original slot"
    .endif
    .if (. - gMoveDescription_RockTomb) < 0x23
    .space 0x23 - (. - gMoveDescription_RockTomb)
    .endif

@ TM40: つばめがえし
    .globl gMoveDescription_AerialAce
gMoveDescription_AerialAce: @ 0x0855C8D6
    .string "すばやい うごきで \nぜったいに よけられない\nこうげきを する"
    .byte EOS
    .if (. - gMoveDescription_AerialAce) > 0x21
    .error "gMoveDescription_AerialAce exceeds its original slot"
    .endif
    .if (. - gMoveDescription_AerialAce) < 0x21
    .space 0x21 - (. - gMoveDescription_AerialAce)
    .endif

@ TM41: いちゃもん
    .globl gMoveDescription_Torment
gMoveDescription_Torment: @ 0x0855C8F7
    .string "てきが おなじわざを\nれんぞくで だせない\nようにする"
    .byte EOS
    .if (. - gMoveDescription_Torment) > 0x1C
    .error "gMoveDescription_Torment exceeds its original slot"
    .endif
    .if (. - gMoveDescription_Torment) < 0x1C
    .space 0x1C - (. - gMoveDescription_Torment)
    .endif

@ TM42: からげんき
    .globl gMoveDescription_Facade
gMoveDescription_Facade: @ 0x0855C913
    .string "どく まひ やけどのとき\nこうげきの ちからを\nあげる ことが できる"
    .byte EOS
    .if (. - gMoveDescription_Facade) > 0x24
    .error "gMoveDescription_Facade exceeds its original slot"
    .endif
    .if (. - gMoveDescription_Facade) < 0x24
    .space 0x24 - (. - gMoveDescription_Facade)
    .endif

@ TM43: ひみつのちから
    .globl gMoveDescription_SecretPower
gMoveDescription_SecretPower: @ 0x0855C937
    .string "たたかう ばしょに より\nてきに あたえる\nついか こうかが かわる"
    .byte EOS
    .if (. - gMoveDescription_SecretPower) > 0x23
    .error "gMoveDescription_SecretPower exceeds its original slot"
    .endif
    .if (. - gMoveDescription_SecretPower) < 0x23
    .space 0x23 - (. - gMoveDescription_SecretPower)
    .endif

@ TM44: ねむる
    .globl gMoveDescription_Rest
gMoveDescription_Rest: @ 0x0855C95A
    .string "2ターンねむり からだの\nいじょうと たいりょくを\nぜんかいふく する"
    .byte EOS
    .if (. - gMoveDescription_Rest) > 0x24
    .error "gMoveDescription_Rest exceeds its original slot"
    .endif
    .if (. - gMoveDescription_Rest) < 0x24
    .space 0x24 - (. - gMoveDescription_Rest)
    .endif

@ TM45: メロメロ
    .globl gMoveDescription_Attract
gMoveDescription_Attract: @ 0x0855C97E
    .string "オスなら メスに\nメスなら オスに\nわざが だしにくくなる"
    .byte EOS
    .if (. - gMoveDescription_Attract) > 0x1E
    .error "gMoveDescription_Attract exceeds its original slot"
    .endif
    .if (. - gMoveDescription_Attract) < 0x1E
    .space 0x1E - (. - gMoveDescription_Attract)
    .endif

@ TM46: どろぼう
    .globl gMoveDescription_Thief
gMoveDescription_Thief: @ 0x0855C99C
    .string "こうげきちゅうに すきを\nみて てきが もっている\nどうぐを ぬすむ"
    .byte EOS
    .if (. - gMoveDescription_Thief) > 0x23
    .error "gMoveDescription_Thief exceeds its original slot"
    .endif
    .if (. - gMoveDescription_Thief) < 0x23
    .space 0x23 - (. - gMoveDescription_Thief)
    .endif

@ TM47: はがねのつばさ
    .globl gMoveDescription_SteelWing
gMoveDescription_SteelWing: @ 0x0855C9BF
    .string "かたいつばさを おおきく\nひろげて そのまま\nてきに たいあたりする"
    .byte EOS
    .if (. - gMoveDescription_SteelWing) > 0x23
    .error "gMoveDescription_SteelWing exceeds its original slot"
    .endif
    .if (. - gMoveDescription_SteelWing) < 0x23
    .space 0x23 - (. - gMoveDescription_SteelWing)
    .endif

@ TM48: スキルスワップ
    .globl gMoveDescription_SkillSwap
gMoveDescription_SkillSwap: @ 0x0855C9E2
    .string "わざを だした ターンに\nじぶんと てきの\nとくせいを いれかえる"
    .byte EOS
    .if (. - gMoveDescription_SkillSwap) > 0x22
    .error "gMoveDescription_SkillSwap exceeds its original slot"
    .endif
    .if (. - gMoveDescription_SkillSwap) < 0x22
    .space 0x22 - (. - gMoveDescription_SkillSwap)
    .endif

@ TM49: よこどり
    .globl gMoveDescription_Snatch
gMoveDescription_Snatch: @ 0x0855CA04
    .string "てきが つかおうとした\nわざを うばって\nじぶんに つかう"
    .byte EOS
    .if (. - gMoveDescription_Snatch) > 0x1E
    .error "gMoveDescription_Snatch exceeds its original slot"
    .endif
    .if (. - gMoveDescription_Snatch) < 0x1E
    .space 0x1E - (. - gMoveDescription_Snatch)
    .endif

@ TM50: オーバーヒート
    .globl gMoveDescription_Overheat
gMoveDescription_Overheat: @ 0x0855CA22
    .string "フルパワーで こうげき\nできるが とくこうが\nガクッと さがってしまう"
    .byte EOS
    .if (. - gMoveDescription_Overheat) > 0x24
    .error "gMoveDescription_Overheat exceeds its original slot"
    .endif
    .if (. - gMoveDescription_Overheat) < 0x24
    .space 0x24 - (. - gMoveDescription_Overheat)
    .endif

@ HM01: いあいぎり
    .globl gMoveDescription_Cut
gMoveDescription_Cut: @ 0x0855CA46
    .string "カマや ツメなどの\nするどいもので てきを\nきりつけて こうげきする"
    .byte EOS
    .if (. - gMoveDescription_Cut) > 0x23
    .error "gMoveDescription_Cut exceeds its original slot"
    .endif
    .if (. - gMoveDescription_Cut) < 0x23
    .space 0x23 - (. - gMoveDescription_Cut)
    .endif

@ HM02: そらをとぶ
    .globl gMoveDescription_Fly
gMoveDescription_Fly: @ 0x0855CA69
    .string "1ターンめで そらへとび\nつぎの ターンに てきを\nこうげきする"
    .byte EOS
    .if (. - gMoveDescription_Fly) > 0x21
    .error "gMoveDescription_Fly exceeds its original slot"
    .endif
    .if (. - gMoveDescription_Fly) < 0x21
    .space 0x21 - (. - gMoveDescription_Fly)
    .endif

@ HM03: なみのり
    .globl gMoveDescription_Surf
gMoveDescription_Surf: @ 0x0855CA8A
    .string "みずに なみを おこし\nそれを ものすごい\nちからで たたきつける"
    .byte EOS
    .if (. - gMoveDescription_Surf) > 0x22
    .error "gMoveDescription_Surf exceeds its original slot"
    .endif
    .if (. - gMoveDescription_Surf) < 0x22
    .space 0x22 - (. - gMoveDescription_Surf)
    .endif

@ HM04: かいりき
    .globl gMoveDescription_Strength
gMoveDescription_Strength: @ 0x0855CAAC
    .string "ぜんしんに ものすごい\nちからを ためこみ\nてきを こうげきする"
    .byte EOS
    .if (. - gMoveDescription_Strength) > 0x21
    .error "gMoveDescription_Strength exceeds its original slot"
    .endif
    .if (. - gMoveDescription_Strength) < 0x21
    .space 0x21 - (. - gMoveDescription_Strength)
    .endif

@ HM05: フラッシュ
    .globl gMoveDescription_Flash
gMoveDescription_Flash: @ 0x0855CACD
    .string "つよい ひかりで めを\nくらませて てきの\nめいちゅうりつを さげる"
    .byte EOS
    .if (. - gMoveDescription_Flash) > 0x23
    .error "gMoveDescription_Flash exceeds its original slot"
    .endif
    .if (. - gMoveDescription_Flash) < 0x23
    .space 0x23 - (. - gMoveDescription_Flash)
    .endif

@ HM06: いわくだき
    .globl gMoveDescription_RockSmash
gMoveDescription_RockSmash: @ 0x0855CAF0
    .string "いわをもくだく ちからで\nてきの ぼうぎょを\nさげる ことがある"
    .byte EOS
    .if (. - gMoveDescription_RockSmash) > 0x21
    .error "gMoveDescription_RockSmash exceeds its original slot"
    .endif
    .if (. - gMoveDescription_RockSmash) < 0x21
    .space 0x21 - (. - gMoveDescription_RockSmash)
    .endif

@ HM07: たきのぼり
    .globl gMoveDescription_Waterfall
gMoveDescription_Waterfall: @ 0x0855CB11
    .string "たきを さかのぼるような\nいきおいで てきに\nとっしんする"
    .byte EOS
    .if (. - gMoveDescription_Waterfall) > 0x1E
    .error "gMoveDescription_Waterfall exceeds its original slot"
    .endif
    .if (. - gMoveDescription_Waterfall) < 0x1E
    .space 0x1E - (. - gMoveDescription_Waterfall)
    .endif

@ HM08: ダイビング
    .globl gMoveDescription_Dive
gMoveDescription_Dive: @ 0x0855CB2F
    .string "1ターンめで みずに \nもぐり つぎのターンで\nてきを こうげきする"
    .byte EOS
    .if (. - gMoveDescription_Dive) > 0x23
    .error "gMoveDescription_Dive exceeds its original slot"
    .endif
    .if (. - gMoveDescription_Dive) < 0x23
    .space 0x23 - (. - gMoveDescription_Dive)
    .endif
