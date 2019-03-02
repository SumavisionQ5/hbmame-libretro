// license:BSD-3-Clause
// copyright-holders:Robbbert
// Double Dragon

#include "includes/neogeo.h"


ROM_START( dbdeh ) /* Double Dragon (Neo-Geo) - Enhance by Creamymami and Ydmis - (Based on dbdehy - can select Shuko and Duke - after hitting ultra kill is max 20030420) */
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "082eh.p1", 0x100000, 0x100000, CRC(046e279e) SHA1(B7CDAAD32094EB3D12EE25621E7B9A9EB97AA13D) )
	ROM_CONTINUE( 0x000000, 0x100000 )

	NEO_SFIX_128K( "082.s1", CRC(bef995c5) SHA1(9c89adbdaa5c1f827632c701688563dac2e482a4) )

	NEO_BIOS_AUDIO_128K( "082.m1", CRC(10b144de) SHA1(cf1ed0a447da68240c62bcfd76b1569803f6bf76) )

	ROM_REGION( 0x400000, "ymsnd", 0 )
	ROM_LOAD( "082.v1", 0x000000, 0x200000, CRC(cc1128e4) SHA1(bfcfff24bc7fbde0b02b1bc0dffebd5270a0eb04) )
	ROM_LOAD( "082.v2", 0x200000, 0x200000, CRC(c3ff5554) SHA1(c685887ad64998e5572607a916b023f8b9efac49) )

	ROM_REGION( 0xe00000, "sprites", 0 )
	ROM_LOAD16_BYTE( "082.c1", 0x000000, 0x200000, CRC(b478c725) SHA1(3a777c5906220f246a6dc06cb084e6ad650d67bb) )
	ROM_LOAD16_BYTE( "082.c2", 0x000001, 0x200000, CRC(2857da32) SHA1(9f13245965d23db86d46d7e73dfb6cc63e6f25a1) )
	ROM_LOAD16_BYTE( "082.c3", 0x400000, 0x200000, CRC(8b0d378e) SHA1(3a347215e414b738164f1fe4144102f07d4ffb80) )
	ROM_LOAD16_BYTE( "082.c4", 0x400001, 0x200000, CRC(c7d2f596) SHA1(e2d09d4d1b1fef9c0c53ecf3629e974b75e559f5) )
	ROM_LOAD16_BYTE( "082.c5", 0x800000, 0x200000, CRC(ec87bff6) SHA1(3fa86da93881158c2c23443855922a7b32e55135) )
	ROM_LOAD16_BYTE( "082.c6", 0x800001, 0x200000, CRC(844a8a11) SHA1(b2acbd4cacce66fb32c052b2fba9984904679bda) )
	ROM_LOAD16_BYTE( "082.c7", 0xc00000, 0x100000, CRC(727c4d02) SHA1(8204c7f037d46e0c58f269f9c7a535bc2589f526) )
	ROM_LOAD16_BYTE( "082.c8", 0xc00001, 0x100000, CRC(69a5fa37) SHA1(020e70e0e8b3c5d00a40fe97e418115a3187e50a) )
ROM_END

ROM_START( dbdehy ) /* Double Dragon (Neo-Geo) - Enhance by Ydmis - (Can select Shuko and Duke) */
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "082ehy.p1", 0x100000, 0x100000, CRC(37223431) SHA1(B9369B8140213AFD8EFCCB849EE7B4DF81B01D20) )
	ROM_CONTINUE( 0x000000, 0x100000 )

	NEO_SFIX_128K( "082.s1", CRC(bef995c5) SHA1(9c89adbdaa5c1f827632c701688563dac2e482a4) )

	NEO_BIOS_AUDIO_128K( "082.m1", CRC(10b144de) SHA1(cf1ed0a447da68240c62bcfd76b1569803f6bf76) )

	ROM_REGION( 0x400000, "ymsnd", 0 )
	ROM_LOAD( "082.v1", 0x000000, 0x200000, CRC(cc1128e4) SHA1(bfcfff24bc7fbde0b02b1bc0dffebd5270a0eb04) )
	ROM_LOAD( "082.v2", 0x200000, 0x200000, CRC(c3ff5554) SHA1(c685887ad64998e5572607a916b023f8b9efac49) )

	ROM_REGION( 0xe00000, "sprites", 0 )
	ROM_LOAD16_BYTE( "082.c1", 0x000000, 0x200000, CRC(b478c725) SHA1(3a777c5906220f246a6dc06cb084e6ad650d67bb) )
	ROM_LOAD16_BYTE( "082.c2", 0x000001, 0x200000, CRC(2857da32) SHA1(9f13245965d23db86d46d7e73dfb6cc63e6f25a1) )
	ROM_LOAD16_BYTE( "082.c3", 0x400000, 0x200000, CRC(8b0d378e) SHA1(3a347215e414b738164f1fe4144102f07d4ffb80) )
	ROM_LOAD16_BYTE( "082.c4", 0x400001, 0x200000, CRC(c7d2f596) SHA1(e2d09d4d1b1fef9c0c53ecf3629e974b75e559f5) )
	ROM_LOAD16_BYTE( "082.c5", 0x800000, 0x200000, CRC(ec87bff6) SHA1(3fa86da93881158c2c23443855922a7b32e55135) )
	ROM_LOAD16_BYTE( "082.c6", 0x800001, 0x200000, CRC(844a8a11) SHA1(b2acbd4cacce66fb32c052b2fba9984904679bda) )
	ROM_LOAD16_BYTE( "082.c7", 0xc00000, 0x100000, CRC(727c4d02) SHA1(8204c7f037d46e0c58f269f9c7a535bc2589f526) )
	ROM_LOAD16_BYTE( "082.c8", 0xc00001, 0x100000, CRC(69a5fa37) SHA1(020e70e0e8b3c5d00a40fe97e418115a3187e50a) )
ROM_END

ROM_START( dbdq ) /* Double Dragon (Neo-Geo) - Hack by Creamymami - (The character is the Q - version) */
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "082q.p1", 0x100000, 0x100000, CRC(869862ec) SHA1(92D1B712A25070035DD45B4F4BB4719B75768F92) )
	ROM_CONTINUE( 0x000000, 0x100000 )

	NEO_SFIX_128K( "082.s1", CRC(bef995c5) SHA1(9c89adbdaa5c1f827632c701688563dac2e482a4) )

	NEO_BIOS_AUDIO_128K( "082.m1", CRC(10b144de) SHA1(cf1ed0a447da68240c62bcfd76b1569803f6bf76) )

	ROM_REGION( 0x400000, "ymsnd", 0 )
	ROM_LOAD( "082.v1", 0x000000, 0x200000, CRC(cc1128e4) SHA1(bfcfff24bc7fbde0b02b1bc0dffebd5270a0eb04) )
	ROM_LOAD( "082.v2", 0x200000, 0x200000, CRC(c3ff5554) SHA1(c685887ad64998e5572607a916b023f8b9efac49) )

	ROM_REGION( 0xe00000, "sprites", 0 )
	ROM_LOAD16_BYTE( "082.c1", 0x000000, 0x200000, CRC(b478c725) SHA1(3a777c5906220f246a6dc06cb084e6ad650d67bb) )
	ROM_LOAD16_BYTE( "082.c2", 0x000001, 0x200000, CRC(2857da32) SHA1(9f13245965d23db86d46d7e73dfb6cc63e6f25a1) )
	ROM_LOAD16_BYTE( "082.c3", 0x400000, 0x200000, CRC(8b0d378e) SHA1(3a347215e414b738164f1fe4144102f07d4ffb80) )
	ROM_LOAD16_BYTE( "082.c4", 0x400001, 0x200000, CRC(c7d2f596) SHA1(e2d09d4d1b1fef9c0c53ecf3629e974b75e559f5) )
	ROM_LOAD16_BYTE( "082.c5", 0x800000, 0x200000, CRC(ec87bff6) SHA1(3fa86da93881158c2c23443855922a7b32e55135) )
	ROM_LOAD16_BYTE( "082.c6", 0x800001, 0x200000, CRC(844a8a11) SHA1(b2acbd4cacce66fb32c052b2fba9984904679bda) )
	ROM_LOAD16_BYTE( "082.c7", 0xc00000, 0x100000, CRC(727c4d02) SHA1(8204c7f037d46e0c58f269f9c7a535bc2589f526) )
	ROM_LOAD16_BYTE( "082.c8", 0xc00001, 0x100000, CRC(69a5fa37) SHA1(020e70e0e8b3c5d00a40fe97e418115a3187e50a) )
ROM_END

ROM_START( dbdqb ) /* Double Dragon (Neo-Geo) - Hack by Creamymami and Ydmis - (The character is the Q - version - can select Shuko and Duke) */
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "082qb.p1", 0x100000, 0x100000, CRC(8511d5f7) SHA1(29F161F990947C0D83262134B8ADC4B1CCC69924) )
	ROM_CONTINUE( 0x000000, 0x100000 )

	NEO_SFIX_128K( "082.s1", CRC(bef995c5) SHA1(9c89adbdaa5c1f827632c701688563dac2e482a4) )

	NEO_BIOS_AUDIO_128K( "082.m1", CRC(10b144de) SHA1(cf1ed0a447da68240c62bcfd76b1569803f6bf76) )

	ROM_REGION( 0x400000, "ymsnd", 0 )
	ROM_LOAD( "082.v1", 0x000000, 0x200000, CRC(cc1128e4) SHA1(bfcfff24bc7fbde0b02b1bc0dffebd5270a0eb04) )
	ROM_LOAD( "082.v2", 0x200000, 0x200000, CRC(c3ff5554) SHA1(c685887ad64998e5572607a916b023f8b9efac49) )

	ROM_REGION( 0xe00000, "sprites", 0 )
	ROM_LOAD16_BYTE( "082.c1", 0x000000, 0x200000, CRC(b478c725) SHA1(3a777c5906220f246a6dc06cb084e6ad650d67bb) )
	ROM_LOAD16_BYTE( "082.c2", 0x000001, 0x200000, CRC(2857da32) SHA1(9f13245965d23db86d46d7e73dfb6cc63e6f25a1) )
	ROM_LOAD16_BYTE( "082.c3", 0x400000, 0x200000, CRC(8b0d378e) SHA1(3a347215e414b738164f1fe4144102f07d4ffb80) )
	ROM_LOAD16_BYTE( "082.c4", 0x400001, 0x200000, CRC(c7d2f596) SHA1(e2d09d4d1b1fef9c0c53ecf3629e974b75e559f5) )
	ROM_LOAD16_BYTE( "082.c5", 0x800000, 0x200000, CRC(ec87bff6) SHA1(3fa86da93881158c2c23443855922a7b32e55135) )
	ROM_LOAD16_BYTE( "082.c6", 0x800001, 0x200000, CRC(844a8a11) SHA1(b2acbd4cacce66fb32c052b2fba9984904679bda) )
	ROM_LOAD16_BYTE( "082.c7", 0xc00000, 0x100000, CRC(727c4d02) SHA1(8204c7f037d46e0c58f269f9c7a535bc2589f526) )
	ROM_LOAD16_BYTE( "082.c8", 0xc00001, 0x100000, CRC(69a5fa37) SHA1(020e70e0e8b3c5d00a40fe97e418115a3187e50a) )
ROM_END

ROM_START( dbdqeh ) /* Double Dragon (Neo-Geo) - Enhance by Creamymami and Ydmis - (The character is the Q - version - after hitting ultra kill is max - can select Shuko and Duke) */
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "082qeh.p1", 0x100000, 0x100000, CRC(b65dc658) SHA1(38D81BEFBCA4A95B157289966E866BDC3BF21DE3) )
	ROM_CONTINUE( 0x000000, 0x100000 )

	NEO_SFIX_128K( "082.s1", CRC(bef995c5) SHA1(9c89adbdaa5c1f827632c701688563dac2e482a4) )

	NEO_BIOS_AUDIO_128K( "082.m1", CRC(10b144de) SHA1(cf1ed0a447da68240c62bcfd76b1569803f6bf76) )

	ROM_REGION( 0x400000, "ymsnd", 0 )
	ROM_LOAD( "082.v1", 0x000000, 0x200000, CRC(cc1128e4) SHA1(bfcfff24bc7fbde0b02b1bc0dffebd5270a0eb04) )
	ROM_LOAD( "082.v2", 0x200000, 0x200000, CRC(c3ff5554) SHA1(c685887ad64998e5572607a916b023f8b9efac49) )

	ROM_REGION( 0xe00000, "sprites", 0 )
	ROM_LOAD16_BYTE( "082.c1", 0x000000, 0x200000, CRC(b478c725) SHA1(3a777c5906220f246a6dc06cb084e6ad650d67bb) )
	ROM_LOAD16_BYTE( "082.c2", 0x000001, 0x200000, CRC(2857da32) SHA1(9f13245965d23db86d46d7e73dfb6cc63e6f25a1) )
	ROM_LOAD16_BYTE( "082.c3", 0x400000, 0x200000, CRC(8b0d378e) SHA1(3a347215e414b738164f1fe4144102f07d4ffb80) )
	ROM_LOAD16_BYTE( "082.c4", 0x400001, 0x200000, CRC(c7d2f596) SHA1(e2d09d4d1b1fef9c0c53ecf3629e974b75e559f5) )
	ROM_LOAD16_BYTE( "082.c5", 0x800000, 0x200000, CRC(ec87bff6) SHA1(3fa86da93881158c2c23443855922a7b32e55135) )
	ROM_LOAD16_BYTE( "082.c6", 0x800001, 0x200000, CRC(844a8a11) SHA1(b2acbd4cacce66fb32c052b2fba9984904679bda) )
	ROM_LOAD16_BYTE( "082.c7", 0xc00000, 0x100000, CRC(727c4d02) SHA1(8204c7f037d46e0c58f269f9c7a535bc2589f526) )
	ROM_LOAD16_BYTE( "082.c8", 0xc00001, 0x100000, CRC(69a5fa37) SHA1(020e70e0e8b3c5d00a40fe97e418115a3187e50a) )
ROM_END

ROM_START( dbdqp ) /* Double Dragon (Neo-Geo) - Hack by Creamymami - (The character is the Q - version - after hitting ultra kill is max) */
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "082qp.p1", 0x100000, 0x100000, CRC(b5d47143) SHA1(B9C211E0883C59C039954CC98E693D1245137C2F) )
	ROM_CONTINUE( 0x000000, 0x100000 )

	NEO_SFIX_128K( "082.s1", CRC(bef995c5) SHA1(9c89adbdaa5c1f827632c701688563dac2e482a4) )

	NEO_BIOS_AUDIO_128K( "082.m1", CRC(10b144de) SHA1(cf1ed0a447da68240c62bcfd76b1569803f6bf76) )

	ROM_REGION( 0x400000, "ymsnd", 0 )
	ROM_LOAD( "082.v1", 0x000000, 0x200000, CRC(cc1128e4) SHA1(bfcfff24bc7fbde0b02b1bc0dffebd5270a0eb04) )
	ROM_LOAD( "082.v2", 0x200000, 0x200000, CRC(c3ff5554) SHA1(c685887ad64998e5572607a916b023f8b9efac49) )

	ROM_REGION( 0xe00000, "sprites", 0 )
	ROM_LOAD16_BYTE( "082.c1", 0x000000, 0x200000, CRC(b478c725) SHA1(3a777c5906220f246a6dc06cb084e6ad650d67bb) )
	ROM_LOAD16_BYTE( "082.c2", 0x000001, 0x200000, CRC(2857da32) SHA1(9f13245965d23db86d46d7e73dfb6cc63e6f25a1) )
	ROM_LOAD16_BYTE( "082.c3", 0x400000, 0x200000, CRC(8b0d378e) SHA1(3a347215e414b738164f1fe4144102f07d4ffb80) )
	ROM_LOAD16_BYTE( "082.c4", 0x400001, 0x200000, CRC(c7d2f596) SHA1(e2d09d4d1b1fef9c0c53ecf3629e974b75e559f5) )
	ROM_LOAD16_BYTE( "082.c5", 0x800000, 0x200000, CRC(ec87bff6) SHA1(3fa86da93881158c2c23443855922a7b32e55135) )
	ROM_LOAD16_BYTE( "082.c6", 0x800001, 0x200000, CRC(844a8a11) SHA1(b2acbd4cacce66fb32c052b2fba9984904679bda) )
	ROM_LOAD16_BYTE( "082.c7", 0xc00000, 0x100000, CRC(727c4d02) SHA1(8204c7f037d46e0c58f269f9c7a535bc2589f526) )
	ROM_LOAD16_BYTE( "082.c8", 0xc00001, 0x100000, CRC(69a5fa37) SHA1(020e70e0e8b3c5d00a40fe97e418115a3187e50a) )
ROM_END

ROM_START( dbdy ) /* Double Dragon (Neo-Geo) - Hack by Ydmis - (Can select Shuko and Duke - game is always in AES mode) */
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "082y.p1", 0x100000, 0x100000, CRC(2ab6a95a) SHA1(F2FEC024DAB20A3B5A444BC431377531598D27FA) )
	ROM_CONTINUE( 0x000000, 0x100000 )

	NEO_SFIX_128K( "082.s1", CRC(bef995c5) SHA1(9c89adbdaa5c1f827632c701688563dac2e482a4) )

	NEO_BIOS_AUDIO_128K( "082.m1", CRC(10b144de) SHA1(cf1ed0a447da68240c62bcfd76b1569803f6bf76) )

	ROM_REGION( 0x400000, "ymsnd", 0 )
	ROM_LOAD( "082.v1", 0x000000, 0x200000, CRC(cc1128e4) SHA1(bfcfff24bc7fbde0b02b1bc0dffebd5270a0eb04) )
	ROM_LOAD( "082.v2", 0x200000, 0x200000, CRC(c3ff5554) SHA1(c685887ad64998e5572607a916b023f8b9efac49) )

	ROM_REGION( 0xe00000, "sprites", 0 )
	ROM_LOAD16_BYTE( "082.c1", 0x000000, 0x200000, CRC(b478c725) SHA1(3a777c5906220f246a6dc06cb084e6ad650d67bb) )
	ROM_LOAD16_BYTE( "082.c2", 0x000001, 0x200000, CRC(2857da32) SHA1(9f13245965d23db86d46d7e73dfb6cc63e6f25a1) )
	ROM_LOAD16_BYTE( "082.c3", 0x400000, 0x200000, CRC(8b0d378e) SHA1(3a347215e414b738164f1fe4144102f07d4ffb80) )
	ROM_LOAD16_BYTE( "082.c4", 0x400001, 0x200000, CRC(c7d2f596) SHA1(e2d09d4d1b1fef9c0c53ecf3629e974b75e559f5) )
	ROM_LOAD16_BYTE( "082.c5", 0x800000, 0x200000, CRC(ec87bff6) SHA1(3fa86da93881158c2c23443855922a7b32e55135) )
	ROM_LOAD16_BYTE( "082.c6", 0x800001, 0x200000, CRC(844a8a11) SHA1(b2acbd4cacce66fb32c052b2fba9984904679bda) )
	ROM_LOAD16_BYTE( "082.c7", 0xc00000, 0x100000, CRC(727c4d02) SHA1(8204c7f037d46e0c58f269f9c7a535bc2589f526) )
	ROM_LOAD16_BYTE( "082.c8", 0xc00001, 0x100000, CRC(69a5fa37) SHA1(020e70e0e8b3c5d00a40fe97e418115a3187e50a) )
ROM_END

ROM_START( doubledre2 )
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "082e2.p1", 0x100000, 0x100000, CRC(dd7f0c5f) SHA1(2f38ec25031407ba81a37ca6360c83a9c57e9cc0) )
	ROM_CONTINUE( 0x000000, 0x100000 )

	NEO_SFIX_128K( "082.s1", CRC(bef995c5) SHA1(9c89adbdaa5c1f827632c701688563dac2e482a4) )

	NEO_BIOS_AUDIO_128K( "082.m1", CRC(10b144de) SHA1(cf1ed0a447da68240c62bcfd76b1569803f6bf76) )

	ROM_REGION( 0x400000, "ymsnd", 0 )
	ROM_LOAD( "082.v1", 0x000000, 0x200000, CRC(cc1128e4) SHA1(bfcfff24bc7fbde0b02b1bc0dffebd5270a0eb04) )
	ROM_LOAD( "082.v2", 0x200000, 0x200000, CRC(c3ff5554) SHA1(c685887ad64998e5572607a916b023f8b9efac49) )

	ROM_REGION( 0xe00000, "sprites", 0 )
	ROM_LOAD16_BYTE( "082.c1", 0x000000, 0x200000, CRC(b478c725) SHA1(3a777c5906220f246a6dc06cb084e6ad650d67bb) )
	ROM_LOAD16_BYTE( "082.c2", 0x000001, 0x200000, CRC(2857da32) SHA1(9f13245965d23db86d46d7e73dfb6cc63e6f25a1) )
	ROM_LOAD16_BYTE( "082.c3", 0x400000, 0x200000, CRC(8b0d378e) SHA1(3a347215e414b738164f1fe4144102f07d4ffb80) )
	ROM_LOAD16_BYTE( "082.c4", 0x400001, 0x200000, CRC(c7d2f596) SHA1(e2d09d4d1b1fef9c0c53ecf3629e974b75e559f5) )
	ROM_LOAD16_BYTE( "082.c5", 0x800000, 0x200000, CRC(ec87bff6) SHA1(3fa86da93881158c2c23443855922a7b32e55135) )
	ROM_LOAD16_BYTE( "082.c6", 0x800001, 0x200000, CRC(844a8a11) SHA1(b2acbd4cacce66fb32c052b2fba9984904679bda) )
	ROM_LOAD16_BYTE( "082.c7", 0xc00000, 0x100000, CRC(727c4d02) SHA1(8204c7f037d46e0c58f269f9c7a535bc2589f526) )
	ROM_LOAD16_BYTE( "082.c8", 0xc00001, 0x100000, CRC(69a5fa37) SHA1(020e70e0e8b3c5d00a40fe97e418115a3187e50a) )
ROM_END

ROM_START( doubledres )
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "082es.p1", 0x100000, 0x100000, CRC(6f4ced99) SHA1(fc272ceeda3d2e43f58fff302ea8df62533e3bd0) )
	ROM_CONTINUE( 0x000000, 0x100000 )

	NEO_SFIX_128K( "082.s1", CRC(bef995c5) SHA1(9c89adbdaa5c1f827632c701688563dac2e482a4) )

	NEO_BIOS_AUDIO_128K( "082.m1", CRC(10b144de) SHA1(cf1ed0a447da68240c62bcfd76b1569803f6bf76) )

	ROM_REGION( 0x400000, "ymsnd", 0 )
	ROM_LOAD( "082.v1", 0x000000, 0x200000, CRC(cc1128e4) SHA1(bfcfff24bc7fbde0b02b1bc0dffebd5270a0eb04) )
	ROM_LOAD( "082.v2", 0x200000, 0x200000, CRC(c3ff5554) SHA1(c685887ad64998e5572607a916b023f8b9efac49) )

	ROM_REGION( 0xe00000, "sprites", 0 )
	ROM_LOAD16_BYTE( "082.c1", 0x000000, 0x200000, CRC(b478c725) SHA1(3a777c5906220f246a6dc06cb084e6ad650d67bb) )
	ROM_LOAD16_BYTE( "082.c2", 0x000001, 0x200000, CRC(2857da32) SHA1(9f13245965d23db86d46d7e73dfb6cc63e6f25a1) )
	ROM_LOAD16_BYTE( "082.c3", 0x400000, 0x200000, CRC(8b0d378e) SHA1(3a347215e414b738164f1fe4144102f07d4ffb80) )
	ROM_LOAD16_BYTE( "082.c4", 0x400001, 0x200000, CRC(c7d2f596) SHA1(e2d09d4d1b1fef9c0c53ecf3629e974b75e559f5) )
	ROM_LOAD16_BYTE( "082.c5", 0x800000, 0x200000, CRC(ec87bff6) SHA1(3fa86da93881158c2c23443855922a7b32e55135) )
	ROM_LOAD16_BYTE( "082.c6", 0x800001, 0x200000, CRC(844a8a11) SHA1(b2acbd4cacce66fb32c052b2fba9984904679bda) )
	ROM_LOAD16_BYTE( "082.c7", 0xc00000, 0x100000, CRC(727c4d02) SHA1(8204c7f037d46e0c58f269f9c7a535bc2589f526) )
	ROM_LOAD16_BYTE( "082.c8", 0xc00001, 0x100000, CRC(69a5fa37) SHA1(020e70e0e8b3c5d00a40fe97e418115a3187e50a) )
ROM_END

ROM_START( doubledrhp )
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "082hp.p1", 0x100000, 0x100000, CRC(1ca0941f) SHA1(40de27c5019059ed97b3bd7d8178e64709513114) )
	ROM_CONTINUE( 0x000000, 0x100000 )

	NEO_SFIX_128K( "082.s1", CRC(bef995c5) SHA1(9c89adbdaa5c1f827632c701688563dac2e482a4) )

	NEO_BIOS_AUDIO_128K( "082.m1", CRC(10b144de) SHA1(cf1ed0a447da68240c62bcfd76b1569803f6bf76) )

	ROM_REGION( 0x400000, "ymsnd", 0 )
	ROM_LOAD( "082.v1", 0x000000, 0x200000, CRC(cc1128e4) SHA1(bfcfff24bc7fbde0b02b1bc0dffebd5270a0eb04) )
	ROM_LOAD( "082.v2", 0x200000, 0x200000, CRC(c3ff5554) SHA1(c685887ad64998e5572607a916b023f8b9efac49) )

	ROM_REGION( 0xe00000, "sprites", 0 )
	ROM_LOAD16_BYTE( "082.c1", 0x000000, 0x200000, CRC(b478c725) SHA1(3a777c5906220f246a6dc06cb084e6ad650d67bb) )
	ROM_LOAD16_BYTE( "082.c2", 0x000001, 0x200000, CRC(2857da32) SHA1(9f13245965d23db86d46d7e73dfb6cc63e6f25a1) )
	ROM_LOAD16_BYTE( "082.c3", 0x400000, 0x200000, CRC(8b0d378e) SHA1(3a347215e414b738164f1fe4144102f07d4ffb80) )
	ROM_LOAD16_BYTE( "082.c4", 0x400001, 0x200000, CRC(c7d2f596) SHA1(e2d09d4d1b1fef9c0c53ecf3629e974b75e559f5) )
	ROM_LOAD16_BYTE( "082.c5", 0x800000, 0x200000, CRC(ec87bff6) SHA1(3fa86da93881158c2c23443855922a7b32e55135) )
	ROM_LOAD16_BYTE( "082.c6", 0x800001, 0x200000, CRC(844a8a11) SHA1(b2acbd4cacce66fb32c052b2fba9984904679bda) )
	ROM_LOAD16_BYTE( "082.c7", 0xc00000, 0x100000, CRC(727c4d02) SHA1(8204c7f037d46e0c58f269f9c7a535bc2589f526) )
	ROM_LOAD16_BYTE( "082.c8", 0xc00001, 0x100000, CRC(69a5fa37) SHA1(020e70e0e8b3c5d00a40fe97e418115a3187e50a) )
ROM_END

ROM_START( doubledrsp )
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "082sp.p1", 0x000000, 0x100000, CRC(8ea8ee3d) SHA1(4cc513f9021a5a6bfe29ebf2773847c674f7921b) )
	ROM_LOAD16_WORD_SWAP( "082sp.p2", 0x100000, 0x100000, CRC(0e2616ab) SHA1(cfe5ed1ec76e21dd833e8297a6dbb30ce407ab2d) )
	ROM_FILL(0x17fe4,1,0x2b) // 4ef9
	ROM_FILL(0x17fe5,1,0x7c)
	ROM_FILL(0x17fe6,1,0x00) // 0091
	ROM_FILL(0x17fe7,1,0x01)
	ROM_FILL(0x17fe8,1,0x7f) // 0206
	ROM_FILL(0x17fe9,1,0xee)
	ROM_FILL(0x17fea,1,0xa2) // 4e7d
	ROM_FILL(0x17feb,1,0x6a)

	ROM_REGION( 0x020000, "gsc", ROMREGION_BE | ROMREGION_16BIT )
	ROM_LOAD16_WORD_SWAP( "082sp.p3", 0x000000, 0x020000, CRC(8b4839c4) SHA1(6c0357f8455bc4a100e1063a5be88c8be388672c) )

	NEO_SFIX_128K( "082.s1", CRC(bef995c5) SHA1(9c89adbdaa5c1f827632c701688563dac2e482a4) )

	NEO_BIOS_AUDIO_128K( "082.m1", CRC(10b144de) SHA1(cf1ed0a447da68240c62bcfd76b1569803f6bf76) )

	ROM_REGION( 0x400000, "ymsnd", 0 )
	ROM_LOAD( "082.v1", 0x000000, 0x200000, CRC(cc1128e4) SHA1(bfcfff24bc7fbde0b02b1bc0dffebd5270a0eb04) )
	ROM_LOAD( "082.v2", 0x200000, 0x200000, CRC(c3ff5554) SHA1(c685887ad64998e5572607a916b023f8b9efac49) )

	ROM_REGION( 0xe00000, "sprites", 0 )
	ROM_LOAD16_BYTE( "082.c1", 0x000000, 0x200000, CRC(b478c725) SHA1(3a777c5906220f246a6dc06cb084e6ad650d67bb) )
	ROM_LOAD16_BYTE( "082.c2", 0x000001, 0x200000, CRC(2857da32) SHA1(9f13245965d23db86d46d7e73dfb6cc63e6f25a1) )
	ROM_LOAD16_BYTE( "082.c3", 0x400000, 0x200000, CRC(8b0d378e) SHA1(3a347215e414b738164f1fe4144102f07d4ffb80) )
	ROM_LOAD16_BYTE( "082.c4", 0x400001, 0x200000, CRC(c7d2f596) SHA1(e2d09d4d1b1fef9c0c53ecf3629e974b75e559f5) )
	ROM_LOAD16_BYTE( "082sp.c5", 0x800000, 0x200000, CRC(b9c799fe) SHA1(04d44f6fbee4bf6978031d1e148a536b012ecc8d) )
	ROM_LOAD16_BYTE( "082sp.c6", 0x800001, 0x200000, CRC(11569bc9) SHA1(ef937371e0f62ef8cc3d315aa944cacab798a173) )
	ROM_LOAD16_BYTE( "082.c7", 0xc00000, 0x100000, CRC(727c4d02) SHA1(8204c7f037d46e0c58f269f9c7a535bc2589f526) )
	ROM_LOAD16_BYTE( "082.c8", 0xc00001, 0x100000, CRC(69a5fa37) SHA1(020e70e0e8b3c5d00a40fe97e418115a3187e50a) )
ROM_END

HACK( 2003, dbdeh,          doubledr, neogeo_noslot, neogeo, neogeo_state,  neogeo, ROT0, "Creamymami and Ydmis", "Double Dragon (Add Char - Max ultra kill after hit 2003-04-20)(Neo-Geo)", MACHINE_SUPPORTS_SAVE ) //Based on dbdehy
HACK( 200?, dbdehy,         doubledr, neogeo_noslot, neogeo, neogeo_state,  neogeo, ROT0, "Ydmis", "Double Dragon (Enable hidden characters v1)(Neo-Geo)", MACHINE_SUPPORTS_SAVE )
HACK( 200?, dbdq,           doubledr, neogeo_noslot, neogeo, neogeo_state,  neogeo, ROT0, "Creamymami", "Double Dragon (Cute style portrait)(Neo-Geo)", MACHINE_SUPPORTS_SAVE )
HACK( 200?, dbdqb,          doubledr, neogeo_noslot, neogeo, neogeo_state,  neogeo, ROT0, "Creamymami and Ydmis", "Double Dragon (Q-ver Char - Add Char)(Neo-Geo)", MACHINE_SUPPORTS_SAVE )
HACK( 200?, dbdqeh,         doubledr, neogeo_noslot, neogeo, neogeo_state,  neogeo, ROT0, "Creamymami and Ydmis", "Double Dragon (Q-ver Char - Max ultra kill after hit - Add Char)(Neo-Geo)", MACHINE_SUPPORTS_SAVE )
HACK( 200?, dbdqp,          doubledr, neogeo_noslot, neogeo, neogeo_state,  neogeo, ROT0, "Creamymami", "Double Dragon (Q-ver Char - Max ultra kill after hit)(Neo-Geo)", MACHINE_SUPPORTS_SAVE )
HACK( 200?, dbdy,           doubledr, neogeo_noslot, neogeo, neogeo_state,  neogeo, ROT0, "Ydmis", "Double Dragon (Add Char - Always in AES mode)(Neo-Geo)", MACHINE_SUPPORTS_SAVE )
HACK( 200?, doubledre2,     doubledr, neogeo_noslot, neogeo, neogeo_state,  neogeo, ROT0, "Unknown", "Double Dragon Q (Boss hack Easy Special Attacks)(Neo-Geo)", MACHINE_SUPPORTS_SAVE )
HACK( 200?, doubledres,     doubledr, neogeo_noslot, neogeo, neogeo_state,  neogeo, ROT0, "Unknown", "Double Dragon (Easy Special Attacks)(Neo-Geo)", MACHINE_SUPPORTS_SAVE )
HACK( 2009, doubledrhp,     doubledr, neogeo_noslot, neogeo, neogeo_state,  neogeo, ROT0, "Blackheart", "Double Dragon (Perfectly simplified Edition)(2009-09-19)(Neo-Geo)", MACHINE_SUPPORTS_SAVE )
HACK( 2017, doubledrsp,     doubledr, gsc,           neogeo, neogeo_state,  gsc,    ROT0, "GSC2007", "Double Dragon (Special 2017 v1.0.0311)(Neo-Geo)", MACHINE_SUPPORTS_SAVE )


// PSmame (c) gaston90 used with permission

 /****************************************************
         Proyecto Shadows Mame Build Plus
*****************************************************/

 /*************
 Double Dragon
****************/

ROM_START( doubledrs01 )
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "082s01.p1", 0x100000, 0x100000, CRC(92826c06) SHA1(4a6792d705a4be8fa1fc6d559d5d417e8cbf7d40) )
	ROM_CONTINUE( 0x000000, 0x100000 )

	NEO_SFIX_128K( "082.s1", CRC(bef995c5) SHA1(9c89adbdaa5c1f827632c701688563dac2e482a4) )

	NEO_BIOS_AUDIO_128K( "082.m1", CRC(10b144de) SHA1(cf1ed0a447da68240c62bcfd76b1569803f6bf76) )

	ROM_REGION( 0x400000, "ymsnd", 0 )
	ROM_LOAD( "082.v1", 0x000000, 0x200000, CRC(cc1128e4) SHA1(bfcfff24bc7fbde0b02b1bc0dffebd5270a0eb04) )
	ROM_LOAD( "082.v2", 0x200000, 0x200000, CRC(c3ff5554) SHA1(c685887ad64998e5572607a916b023f8b9efac49) )

	ROM_REGION( 0xe00000, "sprites", 0 )
	ROM_LOAD16_BYTE( "082.c1", 0x000000, 0x200000, CRC(b478c725) SHA1(3a777c5906220f246a6dc06cb084e6ad650d67bb) )
	ROM_LOAD16_BYTE( "082.c2", 0x000001, 0x200000, CRC(2857da32) SHA1(9f13245965d23db86d46d7e73dfb6cc63e6f25a1) )
	ROM_LOAD16_BYTE( "082.c3", 0x400000, 0x200000, CRC(8b0d378e) SHA1(3a347215e414b738164f1fe4144102f07d4ffb80) )
	ROM_LOAD16_BYTE( "082.c4", 0x400001, 0x200000, CRC(c7d2f596) SHA1(e2d09d4d1b1fef9c0c53ecf3629e974b75e559f5) )
	ROM_LOAD16_BYTE( "082.c5", 0x800000, 0x200000, CRC(ec87bff6) SHA1(3fa86da93881158c2c23443855922a7b32e55135) )
	ROM_LOAD16_BYTE( "082.c6", 0x800001, 0x200000, CRC(844a8a11) SHA1(b2acbd4cacce66fb32c052b2fba9984904679bda) )
	ROM_LOAD16_BYTE( "082.c7", 0xc00000, 0x100000, CRC(727c4d02) SHA1(8204c7f037d46e0c58f269f9c7a535bc2589f526) )
	ROM_LOAD16_BYTE( "082.c8", 0xc00001, 0x100000, CRC(69a5fa37) SHA1(020e70e0e8b3c5d00a40fe97e418115a3187e50a) )
ROM_END

ROM_START( doubledrs02 )
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "082s02.p1", 0x100000, 0x100000, CRC(07e79085) SHA1(e5eaeb3f83d7aff93a43a3226747f3e2187c6b47) )
	ROM_CONTINUE( 0x000000, 0x100000 )

	NEO_SFIX_128K( "082.s1", CRC(bef995c5) SHA1(9c89adbdaa5c1f827632c701688563dac2e482a4) )

	NEO_BIOS_AUDIO_128K( "082.m1", CRC(10b144de) SHA1(cf1ed0a447da68240c62bcfd76b1569803f6bf76) )

	ROM_REGION( 0x400000, "ymsnd", 0 )
	ROM_LOAD( "082.v1", 0x000000, 0x200000, CRC(cc1128e4) SHA1(bfcfff24bc7fbde0b02b1bc0dffebd5270a0eb04) )
	ROM_LOAD( "082.v2", 0x200000, 0x200000, CRC(c3ff5554) SHA1(c685887ad64998e5572607a916b023f8b9efac49) )

	ROM_REGION( 0xe00000, "sprites", 0 )
	ROM_LOAD16_BYTE( "082.c1", 0x000000, 0x200000, CRC(b478c725) SHA1(3a777c5906220f246a6dc06cb084e6ad650d67bb) )
	ROM_LOAD16_BYTE( "082.c2", 0x000001, 0x200000, CRC(2857da32) SHA1(9f13245965d23db86d46d7e73dfb6cc63e6f25a1) )
	ROM_LOAD16_BYTE( "082.c3", 0x400000, 0x200000, CRC(8b0d378e) SHA1(3a347215e414b738164f1fe4144102f07d4ffb80) )
	ROM_LOAD16_BYTE( "082.c4", 0x400001, 0x200000, CRC(c7d2f596) SHA1(e2d09d4d1b1fef9c0c53ecf3629e974b75e559f5) )
	ROM_LOAD16_BYTE( "082.c5", 0x800000, 0x200000, CRC(ec87bff6) SHA1(3fa86da93881158c2c23443855922a7b32e55135) )
	ROM_LOAD16_BYTE( "082.c6", 0x800001, 0x200000, CRC(844a8a11) SHA1(b2acbd4cacce66fb32c052b2fba9984904679bda) )
	ROM_LOAD16_BYTE( "082.c7", 0xc00000, 0x100000, CRC(727c4d02) SHA1(8204c7f037d46e0c58f269f9c7a535bc2589f526) )
	ROM_LOAD16_BYTE( "082.c8", 0xc00001, 0x100000, CRC(69a5fa37) SHA1(020e70e0e8b3c5d00a40fe97e418115a3187e50a) )
ROM_END

ROM_START( doubledrs03 )
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "082s03.p1", 0x100000, 0x100000, CRC(b604d82d) SHA1(5dd932faf201a0e789046369e828bb6b057fc08b) )
	ROM_CONTINUE( 0x000000, 0x100000 )

	NEO_SFIX_128K( "082.s1", CRC(bef995c5) SHA1(9c89adbdaa5c1f827632c701688563dac2e482a4) )

	NEO_BIOS_AUDIO_128K( "082.m1", CRC(10b144de) SHA1(cf1ed0a447da68240c62bcfd76b1569803f6bf76) )

	ROM_REGION( 0x400000, "ymsnd", 0 )
	ROM_LOAD( "082.v1", 0x000000, 0x200000, CRC(cc1128e4) SHA1(bfcfff24bc7fbde0b02b1bc0dffebd5270a0eb04) )
	ROM_LOAD( "082.v2", 0x200000, 0x200000, CRC(c3ff5554) SHA1(c685887ad64998e5572607a916b023f8b9efac49) )

	ROM_REGION( 0xe00000, "sprites", 0 )
	ROM_LOAD16_BYTE( "082.c1", 0x000000, 0x200000, CRC(b478c725) SHA1(3a777c5906220f246a6dc06cb084e6ad650d67bb) )
	ROM_LOAD16_BYTE( "082.c2", 0x000001, 0x200000, CRC(2857da32) SHA1(9f13245965d23db86d46d7e73dfb6cc63e6f25a1) )
	ROM_LOAD16_BYTE( "082.c3", 0x400000, 0x200000, CRC(8b0d378e) SHA1(3a347215e414b738164f1fe4144102f07d4ffb80) )
	ROM_LOAD16_BYTE( "082.c4", 0x400001, 0x200000, CRC(c7d2f596) SHA1(e2d09d4d1b1fef9c0c53ecf3629e974b75e559f5) )
	ROM_LOAD16_BYTE( "082.c5", 0x800000, 0x200000, CRC(ec87bff6) SHA1(3fa86da93881158c2c23443855922a7b32e55135) )
	ROM_LOAD16_BYTE( "082.c6", 0x800001, 0x200000, CRC(844a8a11) SHA1(b2acbd4cacce66fb32c052b2fba9984904679bda) )
	ROM_LOAD16_BYTE( "082.c7", 0xc00000, 0x100000, CRC(727c4d02) SHA1(8204c7f037d46e0c58f269f9c7a535bc2589f526) )
	ROM_LOAD16_BYTE( "082.c8", 0xc00001, 0x100000, CRC(69a5fa37) SHA1(020e70e0e8b3c5d00a40fe97e418115a3187e50a) )
ROM_END

ROM_START( doubledrs04 )
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "082s04.p1", 0x100000, 0x100000, CRC(322007f6) SHA1(62424c41a1f8f906a0d2421a640ec17dd55fcdb4) )
	ROM_CONTINUE( 0x000000, 0x100000 )

	NEO_SFIX_128K( "082.s1", CRC(bef995c5) SHA1(9c89adbdaa5c1f827632c701688563dac2e482a4) )

	NEO_BIOS_AUDIO_128K( "082.m1", CRC(10b144de) SHA1(cf1ed0a447da68240c62bcfd76b1569803f6bf76) )

	ROM_REGION( 0x400000, "ymsnd", 0 )
	ROM_LOAD( "082.v1", 0x000000, 0x200000, CRC(cc1128e4) SHA1(bfcfff24bc7fbde0b02b1bc0dffebd5270a0eb04) )
	ROM_LOAD( "082.v2", 0x200000, 0x200000, CRC(c3ff5554) SHA1(c685887ad64998e5572607a916b023f8b9efac49) )

	ROM_REGION( 0xe00000, "sprites", 0 )
	ROM_LOAD16_BYTE( "082.c1", 0x000000, 0x200000, CRC(b478c725) SHA1(3a777c5906220f246a6dc06cb084e6ad650d67bb) )
	ROM_LOAD16_BYTE( "082.c2", 0x000001, 0x200000, CRC(2857da32) SHA1(9f13245965d23db86d46d7e73dfb6cc63e6f25a1) )
	ROM_LOAD16_BYTE( "082.c3", 0x400000, 0x200000, CRC(8b0d378e) SHA1(3a347215e414b738164f1fe4144102f07d4ffb80) )
	ROM_LOAD16_BYTE( "082.c4", 0x400001, 0x200000, CRC(c7d2f596) SHA1(e2d09d4d1b1fef9c0c53ecf3629e974b75e559f5) )
	ROM_LOAD16_BYTE( "082.c5", 0x800000, 0x200000, CRC(ec87bff6) SHA1(3fa86da93881158c2c23443855922a7b32e55135) )
	ROM_LOAD16_BYTE( "082.c6", 0x800001, 0x200000, CRC(844a8a11) SHA1(b2acbd4cacce66fb32c052b2fba9984904679bda) )
	ROM_LOAD16_BYTE( "082.c7", 0xc00000, 0x100000, CRC(727c4d02) SHA1(8204c7f037d46e0c58f269f9c7a535bc2589f526) )
	ROM_LOAD16_BYTE( "082.c8", 0xc00001, 0x100000, CRC(69a5fa37) SHA1(020e70e0e8b3c5d00a40fe97e418115a3187e50a) )
ROM_END

ROM_START( doubledrs05 )
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "082s05.p1", 0x100000, 0x100000, CRC(e611e2ea) SHA1(d93c1d3020aa434beb4a4949d4fcbbf530c6342d) )
	ROM_CONTINUE( 0x000000, 0x100000 )

	NEO_SFIX_128K( "082.s1", CRC(bef995c5) SHA1(9c89adbdaa5c1f827632c701688563dac2e482a4) )

	NEO_BIOS_AUDIO_128K( "082.m1", CRC(10b144de) SHA1(cf1ed0a447da68240c62bcfd76b1569803f6bf76) )

	ROM_REGION( 0x400000, "ymsnd", 0 )
	ROM_LOAD( "082.v1", 0x000000, 0x200000, CRC(cc1128e4) SHA1(bfcfff24bc7fbde0b02b1bc0dffebd5270a0eb04) )
	ROM_LOAD( "082.v2", 0x200000, 0x200000, CRC(c3ff5554) SHA1(c685887ad64998e5572607a916b023f8b9efac49) )

	ROM_REGION( 0xe00000, "sprites", 0 )
	ROM_LOAD16_BYTE( "082.c1", 0x000000, 0x200000, CRC(b478c725) SHA1(3a777c5906220f246a6dc06cb084e6ad650d67bb) )
	ROM_LOAD16_BYTE( "082.c2", 0x000001, 0x200000, CRC(2857da32) SHA1(9f13245965d23db86d46d7e73dfb6cc63e6f25a1) )
	ROM_LOAD16_BYTE( "082.c3", 0x400000, 0x200000, CRC(8b0d378e) SHA1(3a347215e414b738164f1fe4144102f07d4ffb80) )
	ROM_LOAD16_BYTE( "082.c4", 0x400001, 0x200000, CRC(c7d2f596) SHA1(e2d09d4d1b1fef9c0c53ecf3629e974b75e559f5) )
	ROM_LOAD16_BYTE( "082.c5", 0x800000, 0x200000, CRC(ec87bff6) SHA1(3fa86da93881158c2c23443855922a7b32e55135) )
	ROM_LOAD16_BYTE( "082.c6", 0x800001, 0x200000, CRC(844a8a11) SHA1(b2acbd4cacce66fb32c052b2fba9984904679bda) )
	ROM_LOAD16_BYTE( "082.c7", 0xc00000, 0x100000, CRC(727c4d02) SHA1(8204c7f037d46e0c58f269f9c7a535bc2589f526) )
	ROM_LOAD16_BYTE( "082.c8", 0xc00001, 0x100000, CRC(69a5fa37) SHA1(020e70e0e8b3c5d00a40fe97e418115a3187e50a) )
ROM_END

ROM_START( doubledrs06 )
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "082s06.p1", 0x100000, 0x100000, CRC(9ddf6676) SHA1(a75f7b5b2ea8995557928f2088d6e9098d7f35b4) )
	ROM_CONTINUE( 0x000000, 0x100000 )

	NEO_SFIX_128K( "082.s1", CRC(bef995c5) SHA1(9c89adbdaa5c1f827632c701688563dac2e482a4) )

	NEO_BIOS_AUDIO_128K( "082.m1", CRC(10b144de) SHA1(cf1ed0a447da68240c62bcfd76b1569803f6bf76) )

	ROM_REGION( 0x400000, "ymsnd", 0 )
	ROM_LOAD( "082.v1", 0x000000, 0x200000, CRC(cc1128e4) SHA1(bfcfff24bc7fbde0b02b1bc0dffebd5270a0eb04) )
	ROM_LOAD( "082.v2", 0x200000, 0x200000, CRC(c3ff5554) SHA1(c685887ad64998e5572607a916b023f8b9efac49) )

	ROM_REGION( 0xe00000, "sprites", 0 )
	ROM_LOAD16_BYTE( "082.c1", 0x000000, 0x200000, CRC(b478c725) SHA1(3a777c5906220f246a6dc06cb084e6ad650d67bb) )
	ROM_LOAD16_BYTE( "082.c2", 0x000001, 0x200000, CRC(2857da32) SHA1(9f13245965d23db86d46d7e73dfb6cc63e6f25a1) )
	ROM_LOAD16_BYTE( "082.c3", 0x400000, 0x200000, CRC(8b0d378e) SHA1(3a347215e414b738164f1fe4144102f07d4ffb80) )
	ROM_LOAD16_BYTE( "082.c4", 0x400001, 0x200000, CRC(c7d2f596) SHA1(e2d09d4d1b1fef9c0c53ecf3629e974b75e559f5) )
	ROM_LOAD16_BYTE( "082.c5", 0x800000, 0x200000, CRC(ec87bff6) SHA1(3fa86da93881158c2c23443855922a7b32e55135) )
	ROM_LOAD16_BYTE( "082.c6", 0x800001, 0x200000, CRC(844a8a11) SHA1(b2acbd4cacce66fb32c052b2fba9984904679bda) )
	ROM_LOAD16_BYTE( "082.c7", 0xc00000, 0x100000, CRC(727c4d02) SHA1(8204c7f037d46e0c58f269f9c7a535bc2589f526) )
	ROM_LOAD16_BYTE( "082.c8", 0xc00001, 0x100000, CRC(69a5fa37) SHA1(020e70e0e8b3c5d00a40fe97e418115a3187e50a) )
ROM_END

ROM_START( doubledrs07 )
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "082s07.p1", 0x100000, 0x100000, CRC(9b54e2aa) SHA1(9a67590114a810382a2c905ff5e812dbbef472c7) )
	ROM_CONTINUE( 0x000000, 0x100000 )

	NEO_SFIX_128K( "082.s1", CRC(bef995c5) SHA1(9c89adbdaa5c1f827632c701688563dac2e482a4) )

	NEO_BIOS_AUDIO_128K( "082.m1", CRC(10b144de) SHA1(cf1ed0a447da68240c62bcfd76b1569803f6bf76) )

	ROM_REGION( 0x400000, "ymsnd", 0 )
	ROM_LOAD( "082.v1", 0x000000, 0x200000, CRC(cc1128e4) SHA1(bfcfff24bc7fbde0b02b1bc0dffebd5270a0eb04) )
	ROM_LOAD( "082.v2", 0x200000, 0x200000, CRC(c3ff5554) SHA1(c685887ad64998e5572607a916b023f8b9efac49) )

	ROM_REGION( 0xe00000, "sprites", 0 )
	ROM_LOAD16_BYTE( "082.c1", 0x000000, 0x200000, CRC(b478c725) SHA1(3a777c5906220f246a6dc06cb084e6ad650d67bb) )
	ROM_LOAD16_BYTE( "082.c2", 0x000001, 0x200000, CRC(2857da32) SHA1(9f13245965d23db86d46d7e73dfb6cc63e6f25a1) )
	ROM_LOAD16_BYTE( "082.c3", 0x400000, 0x200000, CRC(8b0d378e) SHA1(3a347215e414b738164f1fe4144102f07d4ffb80) )
	ROM_LOAD16_BYTE( "082.c4", 0x400001, 0x200000, CRC(c7d2f596) SHA1(e2d09d4d1b1fef9c0c53ecf3629e974b75e559f5) )
	ROM_LOAD16_BYTE( "082.c5", 0x800000, 0x200000, CRC(ec87bff6) SHA1(3fa86da93881158c2c23443855922a7b32e55135) )
	ROM_LOAD16_BYTE( "082.c6", 0x800001, 0x200000, CRC(844a8a11) SHA1(b2acbd4cacce66fb32c052b2fba9984904679bda) )
	ROM_LOAD16_BYTE( "082.c7", 0xc00000, 0x100000, CRC(727c4d02) SHA1(8204c7f037d46e0c58f269f9c7a535bc2589f526) )
	ROM_LOAD16_BYTE( "082.c8", 0xc00001, 0x100000, CRC(69a5fa37) SHA1(020e70e0e8b3c5d00a40fe97e418115a3187e50a) )
ROM_END

ROM_START( doubledrs08 )
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "082s08.p1", 0x000000, 0x100000, CRC(dbe6ce8a) SHA1(ef1604352863324113c4e080b72885c42ea74385) )
	ROM_LOAD16_WORD_SWAP( "082sp.p2",  0x100000, 0x100000, CRC(0e2616ab) SHA1(cfe5ed1ec76e21dd833e8297a6dbb30ce407ab2d) )

	ROM_REGION( 0x020000, "gsc", ROMREGION_BE | ROMREGION_16BIT )
	ROM_LOAD16_WORD_SWAP( "082s08.p3", 0x000000, 0x020000, CRC(cd77bcb4) SHA1(9d8cb535ff0f29c962e544d00bb3bfb61d0beb7a) )
	ROM_FILL(0x17fe4,1,0x2b) // 4ef9
	ROM_FILL(0x17fe5,1,0x7c)
	ROM_FILL(0x17fe6,1,0x00) // 0091
	ROM_FILL(0x17fe7,1,0x01)
	ROM_FILL(0x17fe8,1,0x7f) // 0206
	ROM_FILL(0x17fe9,1,0xee)
	ROM_FILL(0x17fea,1,0xa2) // 4e7d
	ROM_FILL(0x17feb,1,0x6a)

	NEO_SFIX_128K( "082.s1", CRC(bef995c5) SHA1(9c89adbdaa5c1f827632c701688563dac2e482a4) )

	NEO_BIOS_AUDIO_128K( "082.m1", CRC(10b144de) SHA1(cf1ed0a447da68240c62bcfd76b1569803f6bf76) )

	ROM_REGION( 0x400000, "ymsnd", 0 )
	ROM_LOAD( "082.v1", 0x000000, 0x200000, CRC(cc1128e4) SHA1(bfcfff24bc7fbde0b02b1bc0dffebd5270a0eb04) )
	ROM_LOAD( "082.v2", 0x200000, 0x200000, CRC(c3ff5554) SHA1(c685887ad64998e5572607a916b023f8b9efac49) )

	ROM_REGION( 0xe00000, "sprites", 0 )
	ROM_LOAD16_BYTE( "082.c1", 0x000000, 0x200000, CRC(b478c725) SHA1(3a777c5906220f246a6dc06cb084e6ad650d67bb) )
	ROM_LOAD16_BYTE( "082.c2", 0x000001, 0x200000, CRC(2857da32) SHA1(9f13245965d23db86d46d7e73dfb6cc63e6f25a1) )
	ROM_LOAD16_BYTE( "082.c3", 0x400000, 0x200000, CRC(8b0d378e) SHA1(3a347215e414b738164f1fe4144102f07d4ffb80) )
	ROM_LOAD16_BYTE( "082.c4", 0x400001, 0x200000, CRC(c7d2f596) SHA1(e2d09d4d1b1fef9c0c53ecf3629e974b75e559f5) )
	ROM_LOAD16_BYTE( "082sp.c5", 0x800000, 0x200000, CRC(b9c799fe) SHA1(04d44f6fbee4bf6978031d1e148a536b012ecc8d) )
	ROM_LOAD16_BYTE( "082sp.c6", 0x800001, 0x200000, CRC(11569bc9) SHA1(ef937371e0f62ef8cc3d315aa944cacab798a173) )
	ROM_LOAD16_BYTE( "082.c7", 0xc00000, 0x100000, CRC(727c4d02) SHA1(8204c7f037d46e0c58f269f9c7a535bc2589f526) )
	ROM_LOAD16_BYTE( "082.c8", 0xc00001, 0x100000, CRC(69a5fa37) SHA1(020e70e0e8b3c5d00a40fe97e418115a3187e50a) )
ROM_END

/*    YEAR  NAME            PARENT    MACHINE        INPUT       INIT             MONITOR COMPANY                 FULLNAME FLAGS */
 // Double Dragon
HACK( 200?, doubledrs01,    doubledr, neogeo_noslot, neogeo, neogeo_state,         neogeo,    ROT0, "yumeji",    "Double Dragon (Enable Hidden Characters v2)(Neo-Geo)", MACHINE_SUPPORTS_SAVE )
HACK( 200?, doubledrs02,    doubledr, neogeo_noslot, neogeo, neogeo_state,         neogeo,    ROT0, "Creamymami[EGCG]",    "Double Dragon (Enhanced Power)(Neo-Geo)", MACHINE_SUPPORTS_SAVE )
HACK( 200?, doubledrs03,    doubledr, neogeo_noslot, neogeo, neogeo_state,         neogeo,    ROT0, "tanchenpeng",    "Double Dragon (Cancel Charge)(Neo-Geo)", MACHINE_SUPPORTS_SAVE )
HACK( 200?, doubledrs04,    doubledr, neogeo_noslot, neogeo, neogeo_state,         neogeo,    ROT0, "Unknown",    "Double Dragon (Black Vesion)(Neo-Geo)", MACHINE_SUPPORTS_SAVE )
HACK( 200?, doubledrs05,    doubledr, neogeo_noslot, neogeo, neogeo_state,         neogeo,    ROT0, "GSC2007",    "Double Dragon (Random Selection)(Neo-Geo)", MACHINE_SUPPORTS_SAVE )
HACK( 200?, doubledrs06,    doubledr, neogeo_noslot, neogeo, neogeo_state,         neogeo,    ROT0, "Unknown",    "Double Dragon (Super Remix Edition 1.0)(Neo-Geo)", MACHINE_SUPPORTS_SAVE )
HACK( 200?, doubledrs07,    doubledr, neogeo_noslot, neogeo, neogeo_state,         neogeo,    ROT0, "Unknown",    "Double Dragon (Super Remix Edition 1.1)(Neo-Geo)", MACHINE_SUPPORTS_SAVE )
HACK( 2017, doubledrs08,    doubledr, gsc,           neogeo, neogeo_state,         gsc,       ROT0, "GSC2007",    "Double Dragon (Special 2017 v1.X 2017-03-08)(Neo-Geo)", MACHINE_SUPPORTS_SAVE )

