	@ data/maps/VictoryRoad_1F/scripts.inc:121 VictoryRoad_1F_Text_WallyNotGoingToLoseAnymore
	.globl VictoryRoad_1F_Text_WallyNotGoingToLoseAnymore
VictoryRoad_1F_Text_WallyNotGoingToLoseAnymore: @ 0x08219608
	.string "ミツル『あっ! {PLAYER}さん!\pぼくが こんな ところに いるなんて\nおどろいた でしょ!\pぼくが ここまで これたのは\n{PLAYER}さんの おかげだよ!\pあのとき {PLAYER}さんに まけたから\nぼくは つよく なれたんだ!\p……だけど!\nぼくは もう まけない\pぼくに ゆうきと げんきを くれた\nポケモンの ためにも かつんだ!\pそれでは…… いきますよ!{EOS}"
	.if (. - VictoryRoad_1F_Text_WallyNotGoingToLoseAnymore) > 0xac
	.error "VictoryRoad_1F_Text_WallyNotGoingToLoseAnymore may not grow beyond its original slot"
	.endif
	.if (. - VictoryRoad_1F_Text_WallyNotGoingToLoseAnymore) < 0xac
	.space 0xac - (. - VictoryRoad_1F_Text_WallyNotGoingToLoseAnymore)
	.endif
	@ data/maps/VictoryRoad_1F/scripts.inc:124 VictoryRoad_1F_Text_WallyEntranceDefeat (+2 aliases)
	.globl gText_Rom_2196B4
gText_Rom_2196B4: @ 0x082196B4
	.string "うわぁ!\nやっぱり {PLAYER}さんは つよいよ!{EOS}"
	.if (. - gText_Rom_2196B4) > 0x16
	.error "gText_Rom_2196B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2196B4) < 0x16
	.space 0x16 - (. - gText_Rom_2196B4)
	.endif
	@ data/maps/VictoryRoad_1F/scripts.inc:127 VictoryRoad_1F_Text_WallyPostEntranceBattle
	.globl VictoryRoad_1F_Text_WallyPostEntranceBattle
VictoryRoad_1F_Text_WallyPostEntranceBattle: @ 0x082196CA
	.string "ミツル『…… こんかいは\n{PLAYER}さんに かてなかった けど\lいつか きっと おいついて みせるからね!{EOS}"
	.if (. - VictoryRoad_1F_Text_WallyPostEntranceBattle) > 0x33
	.error "VictoryRoad_1F_Text_WallyPostEntranceBattle may not grow beyond its original slot"
	.endif
	.if (. - VictoryRoad_1F_Text_WallyPostEntranceBattle) < 0x33
	.space 0x33 - (. - VictoryRoad_1F_Text_WallyPostEntranceBattle)
	.endif
	@ data/maps/VictoryRoad_1F/scripts.inc:130 VictoryRoad_1F_Text_WallyIntro (+1 aliases)
	.globl VictoryRoad_1F_Text_WallyIntro
VictoryRoad_1F_Text_WallyIntro: @ 0x082196FD
	.string "ミツル『あっ! {PLAYER}さん!\pぼく あれから つよくなった はずだよ!\nそれを {PLAYER}さんに\lみてもらいたいんだ!\pそれでは…… いきますよ!{EOS}"
	.if (. - VictoryRoad_1F_Text_WallyIntro) > 0x46
	.error "VictoryRoad_1F_Text_WallyIntro may not grow beyond its original slot"
	.endif
	.if (. - VictoryRoad_1F_Text_WallyIntro) < 0x46
	.space 0x46 - (. - VictoryRoad_1F_Text_WallyIntro)
	.endif
	@ data/maps/VictoryRoad_1F/scripts.inc:124 VictoryRoad_1F_Text_WallyEntranceDefeat (+2 aliases)
	.globl gText_Rom_219743
gText_Rom_219743: @ 0x08219743
	.string "うわぁ!\nやっぱり {PLAYER}さんは つよいよ!{EOS}"
	.if (. - gText_Rom_219743) > 0x16
	.error "gText_Rom_219743 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219743) < 0x16
	.space 0x16 - (. - gText_Rom_219743)
	.endif

	@ data/maps/VictoryRoad_1F/scripts.inc:136 VictoryRoad_1F_Text_WallyPostBattle
	.globl VictoryRoad_1F_Text_WallyPostBattle
VictoryRoad_1F_Text_WallyPostBattle: @ 0x08219759
	.string "ミツル『…… こんかいも\n{PLAYER}さんに かてなかった けど\lいつか きっと おいついて……\pポケモンリーグに ちょうせん するんだ!"
	.byte EOS
	.if (. - VictoryRoad_1F_Text_WallyPostBattle) > 0x42
	.error "VictoryRoad_1F_Text_WallyPostBattle may not grow beyond its original slot"
	.endif
	.if (. - VictoryRoad_1F_Text_WallyPostBattle) < 0x42
	.space 0x42 - (. - VictoryRoad_1F_Text_WallyPostBattle)
	.endif
	@ data/maps/VictoryRoad_1F/scripts.inc:139 VictoryRoad_1F_Text_EdgarIntro (+1 aliases)
	.globl VictoryRoad_1F_Text_EdgarIntro
VictoryRoad_1F_Text_EdgarIntro: @ 0x0821979B
	.string "ここまでは なんとか これたが\nあと すこしが とても とおいよ……"
	.byte EOS
	.if (. - VictoryRoad_1F_Text_EdgarIntro) > 0x23
	.error "VictoryRoad_1F_Text_EdgarIntro may not grow beyond its original slot"
	.endif
	.if (. - VictoryRoad_1F_Text_EdgarIntro) < 0x23
	.space 0x23 - (. - VictoryRoad_1F_Text_EdgarIntro)
	.endif
	@ data/maps/VictoryRoad_1F/scripts.inc:142 VictoryRoad_1F_Text_EdgarDefeat (+1 aliases)
	.globl VictoryRoad_1F_Text_EdgarDefeat
VictoryRoad_1F_Text_EdgarDefeat: @ 0x082197BE
	.string "ここで おわったか……"
	.byte EOS
	.if (. - VictoryRoad_1F_Text_EdgarDefeat) > 0xc
	.error "VictoryRoad_1F_Text_EdgarDefeat may not grow beyond its original slot"
	.endif
	.if (. - VictoryRoad_1F_Text_EdgarDefeat) < 0xc
	.space 0xc - (. - VictoryRoad_1F_Text_EdgarDefeat)
	.endif
	@ data/maps/VictoryRoad_1F/scripts.inc:145 VictoryRoad_1F_Text_EdgarPostBattle
	.globl VictoryRoad_1F_Text_EdgarPostBattle
VictoryRoad_1F_Text_EdgarPostBattle: @ 0x082197CA
	.string "ここまで きたなら\nいきおいで チャンピオンに なれよ!\lきみなら できるさ!"
	.byte EOS
	.if (. - VictoryRoad_1F_Text_EdgarPostBattle) > 0x28
	.error "VictoryRoad_1F_Text_EdgarPostBattle may not grow beyond its original slot"
	.endif
	.if (. - VictoryRoad_1F_Text_EdgarPostBattle) < 0x28
	.space 0x28 - (. - VictoryRoad_1F_Text_EdgarPostBattle)
	.endif
	@ data/maps/VictoryRoad_1F/scripts.inc:148 VictoryRoad_1F_Text_AlbertIntro (+1 aliases)
	.globl VictoryRoad_1F_Text_AlbertIntro
VictoryRoad_1F_Text_AlbertIntro: @ 0x082197F2
	.string "せっかく ここまで きたんだ\nいまさら まけるなんて ありえないよ!"
	.byte EOS
	.if (. - VictoryRoad_1F_Text_AlbertIntro) > 0x23
	.error "VictoryRoad_1F_Text_AlbertIntro may not grow beyond its original slot"
	.endif
	.if (. - VictoryRoad_1F_Text_AlbertIntro) < 0x23
	.space 0x23 - (. - VictoryRoad_1F_Text_AlbertIntro)
	.endif
	@ data/maps/VictoryRoad_1F/scripts.inc:151 VictoryRoad_1F_Text_AlbertDefeat (+1 aliases)
	.globl VictoryRoad_1F_Text_AlbertDefeat
VictoryRoad_1F_Text_AlbertDefeat: @ 0x08219815
	.string "まさか……\nまけたのか……?"
	.byte EOS
	.if (. - VictoryRoad_1F_Text_AlbertDefeat) > 0xf
	.error "VictoryRoad_1F_Text_AlbertDefeat may not grow beyond its original slot"
	.endif
	.if (. - VictoryRoad_1F_Text_AlbertDefeat) < 0xf
	.space 0xf - (. - VictoryRoad_1F_Text_AlbertDefeat)
	.endif
	@ data/maps/VictoryRoad_1F/scripts.inc:154 VictoryRoad_1F_Text_AlbertPostBattle
	.globl VictoryRoad_1F_Text_AlbertPostBattle
VictoryRoad_1F_Text_AlbertPostBattle: @ 0x08219824
	.string "ここで まけた……\pということは まだ チャンピオンに なる\nしかくが なかったと いうことか……"
	.byte EOS
	.if (. - VictoryRoad_1F_Text_AlbertPostBattle) > 0x32
	.error "VictoryRoad_1F_Text_AlbertPostBattle may not grow beyond its original slot"
	.endif
	.if (. - VictoryRoad_1F_Text_AlbertPostBattle) < 0x32
	.space 0x32 - (. - VictoryRoad_1F_Text_AlbertPostBattle)
	.endif
	@ data/maps/VictoryRoad_1F/scripts.inc:157 VictoryRoad_1F_Text_HopeIntro (+1 aliases)
	.globl VictoryRoad_1F_Text_HopeIntro
VictoryRoad_1F_Text_HopeIntro: @ 0x08219856
	.string "この はてしなく けわしい みち こそ\nまさに チャンピオンへの みち なのよ!"
	.byte EOS
	.if (. - VictoryRoad_1F_Text_HopeIntro) > 0x29
	.error "VictoryRoad_1F_Text_HopeIntro may not grow beyond its original slot"
	.endif
	.if (. - VictoryRoad_1F_Text_HopeIntro) < 0x29
	.space 0x29 - (. - VictoryRoad_1F_Text_HopeIntro)
	.endif
	@ data/maps/VictoryRoad_1F/scripts.inc:160 VictoryRoad_1F_Text_HopeDefeat (+1 aliases)
	.globl VictoryRoad_1F_Text_HopeDefeat
VictoryRoad_1F_Text_HopeDefeat: @ 0x0821987F
	.string "すばらしい たたかいかた ね……"
	.byte EOS
	.if (. - VictoryRoad_1F_Text_HopeDefeat) > 0x11
	.error "VictoryRoad_1F_Text_HopeDefeat may not grow beyond its original slot"
	.endif
	.if (. - VictoryRoad_1F_Text_HopeDefeat) < 0x11
	.space 0x11 - (. - VictoryRoad_1F_Text_HopeDefeat)
	.endif
	@ data/maps/VictoryRoad_1F/scripts.inc:163 VictoryRoad_1F_Text_HopePostBattle
	.globl VictoryRoad_1F_Text_HopePostBattle
VictoryRoad_1F_Text_HopePostBattle: @ 0x08219890
	.string "あなたには チャンピオンに なれる\nかのうせいが あるみたいね"
	.byte EOS
	.if (. - VictoryRoad_1F_Text_HopePostBattle) > 0x20
	.error "VictoryRoad_1F_Text_HopePostBattle may not grow beyond its original slot"
	.endif
	.if (. - VictoryRoad_1F_Text_HopePostBattle) < 0x20
	.space 0x20 - (. - VictoryRoad_1F_Text_HopePostBattle)
	.endif
	@ data/maps/VictoryRoad_1F/scripts.inc:166 VictoryRoad_1F_Text_QuincyIntro (+1 aliases)
	.globl VictoryRoad_1F_Text_QuincyIntro
VictoryRoad_1F_Text_QuincyIntro: @ 0x082198B0
	.string "チャンピオンロード とは なにか?\nかてたら おしえてやろう!"
	.byte EOS
	.if (. - VictoryRoad_1F_Text_QuincyIntro) > 0x20
	.error "VictoryRoad_1F_Text_QuincyIntro may not grow beyond its original slot"
	.endif
	.if (. - VictoryRoad_1F_Text_QuincyIntro) < 0x20
	.space 0x20 - (. - VictoryRoad_1F_Text_QuincyIntro)
	.endif
	@ data/maps/VictoryRoad_1F/scripts.inc:169 VictoryRoad_1F_Text_QuincyDefeat (+1 aliases)
	.globl VictoryRoad_1F_Text_QuincyDefeat
VictoryRoad_1F_Text_QuincyDefeat: @ 0x082198D0
	.string "うん いいだろう!"
	.byte EOS
	.if (. - VictoryRoad_1F_Text_QuincyDefeat) > 0xa
	.error "VictoryRoad_1F_Text_QuincyDefeat may not grow beyond its original slot"
	.endif
	.if (. - VictoryRoad_1F_Text_QuincyDefeat) < 0xa
	.space 0xa - (. - VictoryRoad_1F_Text_QuincyDefeat)
	.endif
	@ data/maps/VictoryRoad_1F/scripts.inc:172 VictoryRoad_1F_Text_QuincyPostBattle
	.globl VictoryRoad_1F_Text_QuincyPostBattle
VictoryRoad_1F_Text_QuincyPostBattle: @ 0x082198DA
	.string "ここを ぶじに ぬけきるって ことが\nポケモンチャンピオンを めざす やつの\lさいごの しれん なんだ!\pだから チャンピオンロードと\nよばれて いるのさ"
	.byte EOS
	.if (. - VictoryRoad_1F_Text_QuincyPostBattle) > 0x4e
	.error "VictoryRoad_1F_Text_QuincyPostBattle may not grow beyond its original slot"
	.endif
	.if (. - VictoryRoad_1F_Text_QuincyPostBattle) < 0x4e
	.space 0x4e - (. - VictoryRoad_1F_Text_QuincyPostBattle)
	.endif
	@ data/maps/VictoryRoad_1F/scripts.inc:175 VictoryRoad_1F_Text_KatelynnIntro (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl VictoryRoad_1F_Text_KatelynnIntro
VictoryRoad_1F_Text_KatelynnIntro: @ 0x08219928
	.string "ここまで きた ひとに\nなにも いうことは ない…… いくわよ!"
	.byte EOS
	.if (. - VictoryRoad_1F_Text_KatelynnIntro) != 0x21
	.error "VictoryRoad_1F_Text_KatelynnIntro must retain its original byte length"
	.endif
	@ data/maps/VictoryRoad_1F/scripts.inc:178 VictoryRoad_1F_Text_KatelynnDefeat (+1 aliases)
	.globl VictoryRoad_1F_Text_KatelynnDefeat
VictoryRoad_1F_Text_KatelynnDefeat: @ 0x08219949
	.string "くやしいわ……!"
	.byte EOS
	.if (. - VictoryRoad_1F_Text_KatelynnDefeat) > 0x9
	.error "VictoryRoad_1F_Text_KatelynnDefeat may not grow beyond its original slot"
	.endif
	.if (. - VictoryRoad_1F_Text_KatelynnDefeat) < 0x9
	.space 0x9 - (. - VictoryRoad_1F_Text_KatelynnDefeat)
	.endif
