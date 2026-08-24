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
	.globl gText_Rom_2197F2
gText_Rom_2197F2: @ 0x082197F2
	.string "せっかく ここまで きたんだ\nいまさら まけるなんて ありえないよ!"
	.byte EOS
	.if (. - gText_Rom_2197F2) > 0x23
	.error "gText_Rom_2197F2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2197F2) < 0x23
	.space 0x23 - (. - gText_Rom_2197F2)
	.endif
	@ data/maps/VictoryRoad_1F/scripts.inc:151 VictoryRoad_1F_Text_AlbertDefeat (+1 aliases)
	.globl gText_Rom_219815
gText_Rom_219815: @ 0x08219815
	.string "まさか……\nまけたのか……?"
	.byte EOS
	.if (. - gText_Rom_219815) > 0xf
	.error "gText_Rom_219815 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219815) < 0xf
	.space 0xf - (. - gText_Rom_219815)
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
	.globl gText_Rom_2198DA
gText_Rom_2198DA: @ 0x082198DA
	.string "ここを ぶじに ぬけきるって ことが\nポケモンチャンピオンを めざす やつの\lさいごの しれん なんだ!\pだから チャンピオンロードと\nよばれて いるのさ"
	.byte EOS
	.if (. - gText_Rom_2198DA) > 0x4e
	.error "gText_Rom_2198DA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2198DA) < 0x4e
	.space 0x4e - (. - gText_Rom_2198DA)
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
	.globl gText_Rom_219945
	.set gText_Rom_219945, VictoryRoad_1F_Text_KatelynnIntro + 0x1d
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
