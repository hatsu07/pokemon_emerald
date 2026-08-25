
	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+8 aliases)
	.globl gTVTextPointerTable_Entry056
gTVTextPointerTable_Entry056: @ 0x0824DD25
	.string "こんかい　いまいち　だった\n{0xFD}{0x02}さんが\lもっと　じょうずに　まわすことが　できれば\lさらに　おいしく　なるかも　しれませんよ！{EOS}"
	.if (. - gTVTextPointerTable_Entry056) > 0x40
	.error "gTVTextPointerTable_Entry056 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry056) < 0x40
	.space 0x40 - (. - gTVTextPointerTable_Entry056)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+8 aliases)
	.globl gTVTextPointerTable_Entry057
gTVTextPointerTable_Entry057: @ 0x0824DD65
	.string "ゴクリン『グビィ！　グビィ！\pしかい『うーん……　ちょっと　{0xFD}{0x02}すぎて\n「{0xFD}{0x03}！」と　いってますね……\pやっぱり　{0xFD}{0x04}さんの　しっぱいが\nいたかった　ですね……{EOS}"
	.if (. - gTVTextPointerTable_Entry057) > 0x51
	.error "gTVTextPointerTable_Entry057 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry057) < 0x51
	.space 0x51 - (. - gTVTextPointerTable_Entry057)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+8 aliases)
	.globl gTVTextPointerTable_Entry058
gTVTextPointerTable_Entry058: @ 0x0824DDB6
	.string "こんかい　いちばん　がんばっていた\n{0xFD}{0x02}さんが　かわいそうです……\p……{0xFD}{0x03}さん！\nつぎは　がんばって　ください！{EOS}"
	.if (. - gTVTextPointerTable_Entry058) > 0x3a
	.error "gTVTextPointerTable_Entry058 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry058) < 0x3a
	.space 0x3a - (. - gTVTextPointerTable_Entry058)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+8 aliases)
	.globl gTVTextPointerTable_Entry059
gTVTextPointerTable_Entry059: @ 0x0824DDF0
	.string "では　また　おあいしましょう！\nあいことばは　『ポロック　バンザイ！』{EOS}"
	.if (. - gTVTextPointerTable_Entry059) > 0x24
	.error "gTVTextPointerTable_Entry059 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry059) < 0x24
	.space 0x24 - (. - gTVTextPointerTable_Entry059)
	.endif

	@ data/text/tv.inc:178 LilycoveCity_PokemonTrainerFanClub_Text_WhatsYourOpinionOfTrainer
	.globl LilycoveCity_PokemonTrainerFanClub_Text_WhatsYourOpinionOfTrainer
LilycoveCity_PokemonTrainerFanClub_Text_WhatsYourOpinionOfTrainer: @ 0x0824DE14
	.string "やあ!\pボク {STR_VAR_1}の ファン なんだけど\n{STR_VAR_1} って どう おもう?{EOS}"
	.if (. - LilycoveCity_PokemonTrainerFanClub_Text_WhatsYourOpinionOfTrainer) > 0x23
	.error "LilycoveCity_PokemonTrainerFanClub_Text_WhatsYourOpinionOfTrainer may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_PokemonTrainerFanClub_Text_WhatsYourOpinionOfTrainer) < 0x23
	.space 0x23 - (. - LilycoveCity_PokemonTrainerFanClub_Text_WhatsYourOpinionOfTrainer)
	.endif

	@ data/text/tv.inc:181 LilycoveCity_PokemonTrainerFanClub_Text_ThatsWhatYouThink
	.globl LilycoveCity_PokemonTrainerFanClub_Text_ThatsWhatYouThink
LilycoveCity_PokemonTrainerFanClub_Text_ThatsWhatYouThink: @ 0x0824DE37
	.string "なるほどねー\nそんな ふうに おもっているんだね!{EOS}"
	.if (. - LilycoveCity_PokemonTrainerFanClub_Text_ThatsWhatYouThink) > 0x1a
	.error "LilycoveCity_PokemonTrainerFanClub_Text_ThatsWhatYouThink may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_PokemonTrainerFanClub_Text_ThatsWhatYouThink) < 0x1a
	.space 0x1a - (. - LilycoveCity_PokemonTrainerFanClub_Text_ThatsWhatYouThink)
	.endif

	@ data/text/tv.inc:184 LilycoveCity_PokemonTrainerFanClub_Text_HaveYouForgottenTrainer (+1 aliases)
	.globl LilycoveCity_PokemonTrainerFanClub_Text_HaveYouForgottenTrainer_Copy_Rom_24DE51
LilycoveCity_PokemonTrainerFanClub_Text_HaveYouForgottenTrainer_Copy_Rom_24DE51: @ 0x0824DE51
	.string "{STR_VAR_1}の こと\nわすれちゃったの……?{EOS}"
	.if (. - LilycoveCity_PokemonTrainerFanClub_Text_HaveYouForgottenTrainer_Copy_Rom_24DE51) > 0x13
	.error "LilycoveCity_PokemonTrainerFanClub_Text_HaveYouForgottenTrainer_Copy_Rom_24DE51 may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_PokemonTrainerFanClub_Text_HaveYouForgottenTrainer_Copy_Rom_24DE51) < 0x13
	.space 0x13 - (. - LilycoveCity_PokemonTrainerFanClub_Text_HaveYouForgottenTrainer_Copy_Rom_24DE51)
	.endif

	@ data/text/tv.inc:187 LilycoveCity_PokemonTrainerFanClub_Text_WhatsYourOpinionOfTrainer2
	.globl LilycoveCity_PokemonTrainerFanClub_Text_WhatsYourOpinionOfTrainer2
LilycoveCity_PokemonTrainerFanClub_Text_WhatsYourOpinionOfTrainer2: @ 0x0824DE64
	.string "ボク {STR_VAR_1}の ファン なんだけど\n{STR_VAR_1} って どうおもう?{EOS}"
	.if (. - LilycoveCity_PokemonTrainerFanClub_Text_WhatsYourOpinionOfTrainer2) > 0x1e
	.error "LilycoveCity_PokemonTrainerFanClub_Text_WhatsYourOpinionOfTrainer2 may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_PokemonTrainerFanClub_Text_WhatsYourOpinionOfTrainer2) < 0x1e
	.space 0x1e - (. - LilycoveCity_PokemonTrainerFanClub_Text_WhatsYourOpinionOfTrainer2)
	.endif

	@ data/text/tv.inc:190 LilycoveCity_PokemonTrainerFanClub_Text_HowStrongRateTrainer
	.globl LilycoveCity_PokemonTrainerFanClub_Text_HowStrongRateTrainer
LilycoveCity_PokemonTrainerFanClub_Text_HowStrongRateTrainer: @ 0x0824DE82
	.string "じゃあ こんどは\n{STR_VAR_1}の つよさを\lてんすうで おしえてくれる?{EOS}"
	.if (. - LilycoveCity_PokemonTrainerFanClub_Text_HowStrongRateTrainer) > 0x21
	.error "LilycoveCity_PokemonTrainerFanClub_Text_HowStrongRateTrainer may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_PokemonTrainerFanClub_Text_HowStrongRateTrainer) < 0x21
	.space 0x21 - (. - LilycoveCity_PokemonTrainerFanClub_Text_HowStrongRateTrainer)
	.endif

	@ data/text/tv.inc:184 LilycoveCity_PokemonTrainerFanClub_Text_HaveYouForgottenTrainer (+1 aliases)
	.globl LilycoveCity_PokemonTrainerFanClub_Text_HaveYouForgottenTrainer_Copy_Rom_24DEA3
LilycoveCity_PokemonTrainerFanClub_Text_HaveYouForgottenTrainer_Copy_Rom_24DEA3: @ 0x0824DEA3
	.string "{STR_VAR_1}の こと\nわすれちゃったの……?{EOS}"
	.if (. - LilycoveCity_PokemonTrainerFanClub_Text_HaveYouForgottenTrainer_Copy_Rom_24DEA3) > 0x13
	.error "LilycoveCity_PokemonTrainerFanClub_Text_HaveYouForgottenTrainer_Copy_Rom_24DEA3 may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_PokemonTrainerFanClub_Text_HaveYouForgottenTrainer_Copy_Rom_24DEA3) < 0x13
	.space 0x13 - (. - LilycoveCity_PokemonTrainerFanClub_Text_HaveYouForgottenTrainer_Copy_Rom_24DEA3)
	.endif

	@ data/text/tv.inc:196 LilycoveCity_PokemonTrainerFanClub_Text_YouShouldMeetTrainer
	.globl LilycoveCity_PokemonTrainerFanClub_Text_YouShouldMeetTrainer
LilycoveCity_PokemonTrainerFanClub_Text_YouShouldMeetTrainer: @ 0x0824DEB6
	.string "そっか!\nこんど {STR_VAR_1}に あってみてよ!\lきみも きっと ファンに なっちゃうよ!{EOS}"
	.if (. - LilycoveCity_PokemonTrainerFanClub_Text_YouShouldMeetTrainer) > 0x2a
	.error "LilycoveCity_PokemonTrainerFanClub_Text_YouShouldMeetTrainer may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_PokemonTrainerFanClub_Text_YouShouldMeetTrainer) < 0x2a
	.space 0x2a - (. - LilycoveCity_PokemonTrainerFanClub_Text_YouShouldMeetTrainer)
	.endif

	@ data/text/tv.inc:199 LilycoveCity_PokemonTrainerFanClub_Text_ThankYouIllShareThisInfo
	.globl LilycoveCity_PokemonTrainerFanClub_Text_ThankYouIllShareThisInfo
LilycoveCity_PokemonTrainerFanClub_Text_ThankYouIllShareThisInfo: @ 0x0824DEE0
	.string "そうなんだー!\pありがとう!\nとっても さんこうに なったよ!\pさっそく {STR_VAR_1}の ファン みんなで\nこの ことに ついて はなしあって みるよ!{EOS}"
	.if (. - LilycoveCity_PokemonTrainerFanClub_Text_ThankYouIllShareThisInfo) > 0x49
	.error "LilycoveCity_PokemonTrainerFanClub_Text_ThankYouIllShareThisInfo may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_PokemonTrainerFanClub_Text_ThankYouIllShareThisInfo) < 0x49
	.space 0x49 - (. - LilycoveCity_PokemonTrainerFanClub_Text_ThankYouIllShareThisInfo)
	.endif

	@ data/text/tv.inc:202 LilycoveCity_PokemonTrainerFanClub_HopeYouCatchTVSpecial
	.globl LilycoveCity_PokemonTrainerFanClub_HopeYouCatchTVSpecial
LilycoveCity_PokemonTrainerFanClub_HopeYouCatchTVSpecial: @ 0x0824DF29
	.string "もうすぐ {STR_VAR_1}に ついての\nテレビ ばんぐみが ほうそう されるんだ!\pきみも ぜひ みてね!{EOS}"
	.if (. - LilycoveCity_PokemonTrainerFanClub_HopeYouCatchTVSpecial) > 0x30
	.error "LilycoveCity_PokemonTrainerFanClub_HopeYouCatchTVSpecial may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_PokemonTrainerFanClub_HopeYouCatchTVSpecial) < 0x30
	.space 0x30 - (. - LilycoveCity_PokemonTrainerFanClub_HopeYouCatchTVSpecial)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+12 aliases)
	.globl gTVTextPointerTable_Entry116
gTVTextPointerTable_Entry116: @ 0x0824DF59
	.string "『トレーナー　ファンクラブ\n　{0xFD}{0x02}　スペシャル！』\pホウエン　かくちに　いらっしゃる\n{0xFD}{0x02}ファンの　みなさま\lおまたせしました！\pきょうは　{0xFD}{0x02}さんが\n「どのように　おもわれているか？」を\lいっしょに　かんがえて　いきましょう！\pほかの　トレーナーさんを　だいひょうして\n{0xFD}{0x03}さん　から　ごいけんを\lいただきました！\pまず　{0xFD}{0x02}さんを\nひとことで　いい　あらわすと……\p「{0xFD}{0x04}」\pさすが　{0xFD}{0x03}さん！\nよく　みて　いらっしゃいますね！\p「{0xFD}{0x04}　{0xFD}{0x02}！」\nいいですねー\pつづいて　{0xFD}{0x02}さんの　つよさに\nてんすうを　つけると……{EOS}"
	.if (. - gTVTextPointerTable_Entry116) > 0x106
	.error "gTVTextPointerTable_Entry116 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry116) < 0x106
	.space 0x106 - (. - gTVTextPointerTable_Entry116)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+12 aliases)
	.globl gTVTextPointerTable_Entry117
gTVTextPointerTable_Entry117: @ 0x0824E05F
	.string "「{0xFD}{0x04}てん！」\pすごい　こうとくてん　ですね\n{0xFD}{0x03}さんは　{0xFD}{0x02}さんを\lとっても　そんけい　していますね{EOS}"
	.if (. - gTVTextPointerTable_Entry117) > 0x34
	.error "gTVTextPointerTable_Entry117 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry117) < 0x34
	.space 0x34 - (. - gTVTextPointerTable_Entry117)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+12 aliases)
	.globl gTVTextPointerTable_Entry118
gTVTextPointerTable_Entry118: @ 0x0824E093
	.string "「{0xFD}{0x04}てん！」\pいい　てんすう　ですね\n{0xFD}{0x03}さんは　{0xFD}{0x02}さんを\lライバル　として　みていますね{EOS}"
	.if (. - gTVTextPointerTable_Entry118) > 0x30
	.error "gTVTextPointerTable_Entry118 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry118) < 0x30
	.space 0x30 - (. - gTVTextPointerTable_Entry118)
	.endif
