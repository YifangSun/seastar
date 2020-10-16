
#line 1 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/request_parser.rl"
/*
* This file is open source software, licensed to you under the terms
* of the Apache License, Version 2.0 (the "License").  See the NOTICE file
* distributed with this work for additional information regarding copyright
* ownership.  You may not use this file except in compliance with the License.
*
* You may obtain a copy of the License at
*
*   http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing,
* software distributed under the License is distributed on an
* "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
* KIND, either express or implied.  See the License for the
* specific language governing permissions and limitations
* under the License.
*/
/*
* Copyright (C) 2014 Cloudius Systems, Ltd.
*/

#pragma once

#include <seastar/core/ragel.hh>
#include <memory>
#include <unordered_map>
#include <seastar/http/request.hh>

namespace seastar {
	
	using namespace httpd;
	
	
	#line 34 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/request_parser.rl"
	
	
	
	#line 99 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/request_parser.rl"
	
	
	class http_request_parser : public ragel_parser_base<http_request_parser> {
		
		static const int start = 1;
		static const int error = 0;
		
		static const int en_main = 1;
		
		
		
		
		
		
		
		
		
		
		#line 103 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/request_parser.rl"
		
		public:
		enum class state {
			error,
			eof,
			done,
		};
		std::unique_ptr<httpd::request> _req;
		sstring _field_name;
		sstring _value;
		state _state;
		public:
		void init() {
			init_base();
			_req.reset(new httpd::request());
			_state = state::eof;
			
			{
				_fsm_cs = (int)start;
			}
			
			#line 119 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/request_parser.rl"
			
		}
		char* parse(char* p, char* pe, char* eof) {
			sstring_builder::guard g(_builder, p, pe);
			auto str = [this, &g, &p] { g.mark_end(p); return get_str(); };
			bool done = false;
			if (p != pe) {
				_state = state::error;
			}
			#ifdef __clang__
			#pragma clang diagnostic push
			#pragma clang diagnostic ignored "-Wmisleading-indentation"
			#endif
			
			{
				if ( p == pe )
				goto _test_eof;
				switch ( _fsm_cs )
				{
					case 1:
					goto st_case_1;
					case 0:
					goto st_case_0;
					case 2:
					goto st_case_2;
					case 3:
					goto st_case_3;
					case 4:
					goto st_case_4;
					case 5:
					goto st_case_5;
					case 6:
					goto st_case_6;
					case 7:
					goto st_case_7;
					case 8:
					goto st_case_8;
					case 9:
					goto st_case_9;
					case 10:
					goto st_case_10;
					case 11:
					goto st_case_11;
					case 12:
					goto st_case_12;
					case 13:
					goto st_case_13;
					case 14:
					goto st_case_14;
					case 15:
					goto st_case_15;
					case 16:
					goto st_case_16;
					case 17:
					goto st_case_17;
					case 34:
					goto st_case_34;
					case 18:
					goto st_case_18;
					case 19:
					goto st_case_19;
					case 20:
					goto st_case_20;
					case 21:
					goto st_case_21;
					case 22:
					goto st_case_22;
					case 23:
					goto st_case_23;
					case 24:
					goto st_case_24;
					case 25:
					goto st_case_25;
					case 26:
					goto st_case_26;
					case 27:
					goto st_case_27;
					case 28:
					goto st_case_28;
					case 29:
					goto st_case_29;
					case 30:
					goto st_case_30;
					case 31:
					goto st_case_31;
					case 32:
					goto st_case_32;
					case 33:
					goto st_case_33;
				}
				goto st_out;
				st_case_1:
				if ( 65 <= ( (*( p))) && ( (*( p))) <= 90 ) {
					goto ctr0;
				}
				{
					goto st0;
				}
				st_case_0:
				st0:
				_fsm_cs = 0;
				goto _out;
				ctr0:
				{
					#line 39 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/request_parser.rl"
					
					g.mark_start(p);
				}
				
				goto st2;
				st2:
				p+= 1;
				if ( p == pe )
				goto _test_eof2;
				st_case_2:
				if ( ( (*( p))) == 32 ) {
					goto ctr2;
				}
				if ( 65 <= ( (*( p))) && ( (*( p))) <= 90 ) {
					goto st2;
				}
				{
					goto st0;
				}
				ctr2:
				{
					#line 43 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/request_parser.rl"
					
					_req->_method = str();
				}
				
				goto st3;
				st3:
				p+= 1;
				if ( p == pe )
				goto _test_eof3;
				st_case_3:
				switch( ( (*( p))) ) {
					case 13: {
						goto ctr5;
					}
					case 32: {
						goto st0;
					}
				}
				{
					goto ctr4;
				}
				ctr4:
				{
					#line 39 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/request_parser.rl"
					
					g.mark_start(p);
				}
				
				goto st4;
				st4:
				p+= 1;
				if ( p == pe )
				goto _test_eof4;
				st_case_4:
				switch( ( (*( p))) ) {
					case 13: {
						goto st5;
					}
					case 32: {
						goto ctr8;
					}
				}
				{
					goto st4;
				}
				ctr5:
				{
					#line 39 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/request_parser.rl"
					
					g.mark_start(p);
				}
				
				goto st5;
				st5:
				p+= 1;
				if ( p == pe )
				goto _test_eof5;
				st_case_5:
				switch( ( (*( p))) ) {
					case 10: {
						goto st0;
					}
					case 13: {
						goto st5;
					}
					case 32: {
						goto ctr8;
					}
				}
				{
					goto st4;
				}
				ctr8:
				{
					#line 47 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/request_parser.rl"
					
					_req->_url = str();
				}
				
				goto st6;
				st6:
				p+= 1;
				if ( p == pe )
				goto _test_eof6;
				st_case_6:
				if ( ( (*( p))) == 72 ) {
					goto st7;
				}
				{
					goto st0;
				}
				st7:
				p+= 1;
				if ( p == pe )
				goto _test_eof7;
				st_case_7:
				if ( ( (*( p))) == 84 ) {
					goto st8;
				}
				{
					goto st0;
				}
				st8:
				p+= 1;
				if ( p == pe )
				goto _test_eof8;
				st_case_8:
				if ( ( (*( p))) == 84 ) {
					goto st9;
				}
				{
					goto st0;
				}
				st9:
				p+= 1;
				if ( p == pe )
				goto _test_eof9;
				st_case_9:
				if ( ( (*( p))) == 80 ) {
					goto st10;
				}
				{
					goto st0;
				}
				st10:
				p+= 1;
				if ( p == pe )
				goto _test_eof10;
				st_case_10:
				if ( ( (*( p))) == 47 ) {
					goto st11;
				}
				{
					goto st0;
				}
				st11:
				p+= 1;
				if ( p == pe )
				goto _test_eof11;
				st_case_11:
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto ctr14;
				}
				{
					goto st0;
				}
				ctr14:
				{
					#line 39 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/request_parser.rl"
					
					g.mark_start(p);
				}
				
				goto st12;
				st12:
				p+= 1;
				if ( p == pe )
				goto _test_eof12;
				st_case_12:
				if ( ( (*( p))) == 46 ) {
					goto st13;
				}
				{
					goto st0;
				}
				st13:
				p+= 1;
				if ( p == pe )
				goto _test_eof13;
				st_case_13:
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto st14;
				}
				{
					goto st0;
				}
				st14:
				p+= 1;
				if ( p == pe )
				goto _test_eof14;
				st_case_14:
				if ( ( (*( p))) == 13 ) {
					goto ctr17;
				}
				{
					goto st0;
				}
				ctr17:
				{
					#line 51 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/request_parser.rl"
					
					_req->_version = str();
				}
				
				goto st15;
				st15:
				p+= 1;
				if ( p == pe )
				goto _test_eof15;
				st_case_15:
				if ( ( (*( p))) == 10 ) {
					goto st16;
				}
				{
					goto st0;
				}
				st16:
				p+= 1;
				if ( p == pe )
				goto _test_eof16;
				st_case_16:
				switch( ( (*( p))) ) {
					case 13: {
						goto st17;
					}
					case 33: {
						goto ctr20;
					}
					case 124: {
						goto ctr20;
					}
					case 126: {
						goto ctr20;
					}
				}
				if ( ( (*( p))) < 45 ) {
					if ( ( (*( p))) > 39 ) {
						if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
							goto ctr20;
						}
					} else if ( ( (*( p))) >= 35 ) {
						goto ctr20;
					}
				} else if ( ( (*( p))) > 46 ) {
					if ( ( (*( p))) < 65 ) {
						if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
							goto ctr20;
						}
					} else if ( ( (*( p))) > 90 ) {
						if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto ctr20;
						}
					} else {
						goto ctr20;
					}
				} else {
					goto ctr20;
				}
				{
					goto st0;
				}
				ctr34:
				{
					#line 63 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/request_parser.rl"
					
					_req->_headers[_field_name] = std::move(_value);
				}
				
				goto st17;
				ctr44:
				{
					#line 67 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/request_parser.rl"
					
					_req->_headers[_field_name] += sstring(" ") + std::move(_value);
				}
				
				goto st17;
				ctr59:
				{
					#line 63 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/request_parser.rl"
					
					_req->_headers[_field_name] = std::move(_value);
				}
				{
					#line 67 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/request_parser.rl"
					
					_req->_headers[_field_name] += sstring(" ") + std::move(_value);
				}
				
				goto st17;
				st17:
				p+= 1;
				if ( p == pe )
				goto _test_eof17;
				st_case_17:
				if ( ( (*( p))) == 10 ) {
					goto ctr21;
				}
				{
					goto st0;
				}
				ctr21:
				{
					#line 71 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/request_parser.rl"
					
					done = true;
					{p+= 1; _fsm_cs = 34; goto _out;}
				}
				
				goto st34;
				st34:
				p+= 1;
				if ( p == pe )
				goto _test_eof34;
				st_case_34:
				{
					goto st0;
				}
				ctr20:
				{
					#line 39 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/request_parser.rl"
					
					g.mark_start(p);
				}
				
				goto st18;
				ctr35:
				{
					#line 63 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/request_parser.rl"
					
					_req->_headers[_field_name] = std::move(_value);
				}
				{
					#line 39 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/request_parser.rl"
					
					g.mark_start(p);
				}
				
				goto st18;
				st18:
				p+= 1;
				if ( p == pe )
				goto _test_eof18;
				st_case_18:
				switch( ( (*( p))) ) {
					case 9: {
						goto ctr22;
					}
					case 32: {
						goto ctr22;
					}
					case 33: {
						goto st18;
					}
					case 58: {
						goto ctr24;
					}
					case 124: {
						goto st18;
					}
					case 126: {
						goto st18;
					}
				}
				if ( ( (*( p))) < 45 ) {
					if ( ( (*( p))) > 39 ) {
						if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
							goto st18;
						}
					} else if ( ( (*( p))) >= 35 ) {
						goto st18;
					}
				} else if ( ( (*( p))) > 46 ) {
					if ( ( (*( p))) < 65 ) {
						if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
							goto st18;
						}
					} else if ( ( (*( p))) > 90 ) {
						if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto st18;
						}
					} else {
						goto st18;
					}
				} else {
					goto st18;
				}
				{
					goto st0;
				}
				ctr22:
				{
					#line 55 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/request_parser.rl"
					
					_field_name = str();
				}
				
				goto st19;
				st19:
				p+= 1;
				if ( p == pe )
				goto _test_eof19;
				st_case_19:
				switch( ( (*( p))) ) {
					case 9: {
						goto st19;
					}
					case 32: {
						goto st19;
					}
					case 58: {
						goto st20;
					}
				}
				{
					goto st0;
				}
				ctr28:
				{
					#line 39 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/request_parser.rl"
					
					g.mark_start(p);
				}
				
				goto st20;
				ctr24:
				{
					#line 55 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/request_parser.rl"
					
					_field_name = str();
				}
				
				goto st20;
				st20:
				p+= 1;
				if ( p == pe )
				goto _test_eof20;
				st_case_20:
				switch( ( (*( p))) ) {
					case 9: {
						goto ctr28;
					}
					case 13: {
						goto ctr29;
					}
					case 32: {
						goto ctr28;
					}
				}
				{
					goto ctr27;
				}
				ctr27:
				{
					#line 39 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/request_parser.rl"
					
					g.mark_start(p);
				}
				
				goto st21;
				st21:
				p+= 1;
				if ( p == pe )
				goto _test_eof21;
				st_case_21:
				if ( ( (*( p))) == 13 ) {
					goto ctr31;
				}
				{
					goto st21;
				}
				ctr29:
				{
					#line 39 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/request_parser.rl"
					
					g.mark_start(p);
				}
				{
					#line 59 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/request_parser.rl"
					
					_value = str();
				}
				
				goto st22;
				ctr31:
				{
					#line 59 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/request_parser.rl"
					
					_value = str();
				}
				
				goto st22;
				st22:
				p+= 1;
				if ( p == pe )
				goto _test_eof22;
				st_case_22:
				if ( ( (*( p))) == 10 ) {
					goto st23;
				}
				{
					goto st0;
				}
				st23:
				p+= 1;
				if ( p == pe )
				goto _test_eof23;
				st_case_23:
				switch( ( (*( p))) ) {
					case 9: {
						goto ctr33;
					}
					case 13: {
						goto ctr34;
					}
					case 32: {
						goto ctr33;
					}
					case 33: {
						goto ctr35;
					}
					case 124: {
						goto ctr35;
					}
					case 126: {
						goto ctr35;
					}
				}
				if ( ( (*( p))) < 45 ) {
					if ( ( (*( p))) > 39 ) {
						if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
							goto ctr35;
						}
					} else if ( ( (*( p))) >= 35 ) {
						goto ctr35;
					}
				} else if ( ( (*( p))) > 46 ) {
					if ( ( (*( p))) < 65 ) {
						if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
							goto ctr35;
						}
					} else if ( ( (*( p))) > 90 ) {
						if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto ctr35;
						}
					} else {
						goto ctr35;
					}
				} else {
					goto ctr35;
				}
				{
					goto st0;
				}
				ctr37:
				{
					#line 39 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/request_parser.rl"
					
					g.mark_start(p);
				}
				{
					#line 59 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/request_parser.rl"
					
					_value = str();
				}
				
				goto st24;
				ctr33:
				{
					#line 63 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/request_parser.rl"
					
					_req->_headers[_field_name] = std::move(_value);
				}
				
				goto st24;
				ctr43:
				{
					#line 59 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/request_parser.rl"
					
					_value = str();
				}
				{
					#line 67 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/request_parser.rl"
					
					_req->_headers[_field_name] += sstring(" ") + std::move(_value);
				}
				
				goto st24;
				ctr58:
				{
					#line 63 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/request_parser.rl"
					
					_req->_headers[_field_name] = std::move(_value);
				}
				{
					#line 59 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/request_parser.rl"
					
					_value = str();
				}
				{
					#line 67 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/request_parser.rl"
					
					_req->_headers[_field_name] += sstring(" ") + std::move(_value);
				}
				
				goto st24;
				st24:
				p+= 1;
				if ( p == pe )
				goto _test_eof24;
				st_case_24:
				switch( ( (*( p))) ) {
					case 9: {
						goto ctr37;
					}
					case 13: {
						goto ctr38;
					}
					case 32: {
						goto ctr37;
					}
				}
				{
					goto ctr36;
				}
				ctr36:
				{
					#line 39 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/request_parser.rl"
					
					g.mark_start(p);
				}
				
				goto st25;
				ctr40:
				{
					#line 59 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/request_parser.rl"
					
					_value = str();
				}
				
				goto st25;
				st25:
				p+= 1;
				if ( p == pe )
				goto _test_eof25;
				st_case_25:
				switch( ( (*( p))) ) {
					case 9: {
						goto ctr40;
					}
					case 13: {
						goto ctr41;
					}
					case 32: {
						goto ctr40;
					}
				}
				{
					goto st25;
				}
				ctr38:
				{
					#line 39 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/request_parser.rl"
					
					g.mark_start(p);
				}
				{
					#line 59 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/request_parser.rl"
					
					_value = str();
				}
				
				goto st26;
				ctr41:
				{
					#line 59 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/request_parser.rl"
					
					_value = str();
				}
				
				goto st26;
				st26:
				p+= 1;
				if ( p == pe )
				goto _test_eof26;
				st_case_26:
				switch( ( (*( p))) ) {
					case 9: {
						goto ctr40;
					}
					case 10: {
						goto st27;
					}
					case 13: {
						goto ctr41;
					}
					case 32: {
						goto ctr40;
					}
				}
				{
					goto st25;
				}
				st27:
				p+= 1;
				if ( p == pe )
				goto _test_eof27;
				st_case_27:
				switch( ( (*( p))) ) {
					case 9: {
						goto ctr43;
					}
					case 13: {
						goto ctr44;
					}
					case 32: {
						goto ctr43;
					}
					case 33: {
						goto ctr45;
					}
					case 124: {
						goto ctr45;
					}
					case 126: {
						goto ctr45;
					}
				}
				if ( ( (*( p))) < 45 ) {
					if ( ( (*( p))) > 39 ) {
						if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
							goto ctr45;
						}
					} else if ( ( (*( p))) >= 35 ) {
						goto ctr45;
					}
				} else if ( ( (*( p))) > 46 ) {
					if ( ( (*( p))) < 65 ) {
						if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
							goto ctr45;
						}
					} else if ( ( (*( p))) > 90 ) {
						if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto ctr45;
						}
					} else {
						goto ctr45;
					}
				} else {
					goto ctr45;
				}
				{
					goto st25;
				}
				ctr45:
				{
					#line 67 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/request_parser.rl"
					
					_req->_headers[_field_name] += sstring(" ") + std::move(_value);
				}
				{
					#line 39 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/request_parser.rl"
					
					g.mark_start(p);
				}
				
				goto st28;
				ctr60:
				{
					#line 63 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/request_parser.rl"
					
					_req->_headers[_field_name] = std::move(_value);
				}
				{
					#line 67 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/request_parser.rl"
					
					_req->_headers[_field_name] += sstring(" ") + std::move(_value);
				}
				{
					#line 39 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/request_parser.rl"
					
					g.mark_start(p);
				}
				
				goto st28;
				st28:
				p+= 1;
				if ( p == pe )
				goto _test_eof28;
				st_case_28:
				switch( ( (*( p))) ) {
					case 9: {
						goto ctr46;
					}
					case 13: {
						goto ctr41;
					}
					case 32: {
						goto ctr46;
					}
					case 33: {
						goto st28;
					}
					case 58: {
						goto ctr48;
					}
					case 124: {
						goto st28;
					}
					case 126: {
						goto st28;
					}
				}
				if ( ( (*( p))) < 45 ) {
					if ( ( (*( p))) > 39 ) {
						if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
							goto st28;
						}
					} else if ( ( (*( p))) >= 35 ) {
						goto st28;
					}
				} else if ( ( (*( p))) > 46 ) {
					if ( ( (*( p))) < 65 ) {
						if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
							goto st28;
						}
					} else if ( ( (*( p))) > 90 ) {
						if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto st28;
						}
					} else {
						goto st28;
					}
				} else {
					goto st28;
				}
				{
					goto st25;
				}
				ctr49:
				{
					#line 59 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/request_parser.rl"
					
					_value = str();
				}
				
				goto st29;
				ctr46:
				{
					#line 55 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/request_parser.rl"
					
					_field_name = str();
				}
				{
					#line 59 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/request_parser.rl"
					
					_value = str();
				}
				
				goto st29;
				st29:
				p+= 1;
				if ( p == pe )
				goto _test_eof29;
				st_case_29:
				switch( ( (*( p))) ) {
					case 9: {
						goto ctr49;
					}
					case 13: {
						goto ctr41;
					}
					case 32: {
						goto ctr49;
					}
					case 58: {
						goto st30;
					}
				}
				{
					goto st25;
				}
				ctr48:
				{
					#line 55 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/request_parser.rl"
					
					_field_name = str();
				}
				
				goto st30;
				ctr52:
				{
					#line 39 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/request_parser.rl"
					
					g.mark_start(p);
				}
				{
					#line 59 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/request_parser.rl"
					
					_value = str();
				}
				
				goto st30;
				st30:
				p+= 1;
				if ( p == pe )
				goto _test_eof30;
				st_case_30:
				switch( ( (*( p))) ) {
					case 9: {
						goto ctr52;
					}
					case 13: {
						goto ctr53;
					}
					case 32: {
						goto ctr52;
					}
				}
				{
					goto ctr51;
				}
				ctr51:
				{
					#line 39 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/request_parser.rl"
					
					g.mark_start(p);
				}
				
				goto st31;
				ctr55:
				{
					#line 59 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/request_parser.rl"
					
					_value = str();
				}
				
				goto st31;
				st31:
				p+= 1;
				if ( p == pe )
				goto _test_eof31;
				st_case_31:
				switch( ( (*( p))) ) {
					case 9: {
						goto ctr55;
					}
					case 13: {
						goto ctr56;
					}
					case 32: {
						goto ctr55;
					}
				}
				{
					goto st31;
				}
				ctr53:
				{
					#line 39 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/request_parser.rl"
					
					g.mark_start(p);
				}
				{
					#line 59 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/request_parser.rl"
					
					_value = str();
				}
				
				goto st32;
				ctr56:
				{
					#line 59 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/request_parser.rl"
					
					_value = str();
				}
				
				goto st32;
				st32:
				p+= 1;
				if ( p == pe )
				goto _test_eof32;
				st_case_32:
				switch( ( (*( p))) ) {
					case 9: {
						goto ctr40;
					}
					case 10: {
						goto st33;
					}
					case 13: {
						goto ctr41;
					}
					case 32: {
						goto ctr40;
					}
				}
				{
					goto st25;
				}
				st33:
				p+= 1;
				if ( p == pe )
				goto _test_eof33;
				st_case_33:
				switch( ( (*( p))) ) {
					case 9: {
						goto ctr58;
					}
					case 13: {
						goto ctr59;
					}
					case 32: {
						goto ctr58;
					}
					case 33: {
						goto ctr60;
					}
					case 124: {
						goto ctr60;
					}
					case 126: {
						goto ctr60;
					}
				}
				if ( ( (*( p))) < 45 ) {
					if ( ( (*( p))) > 39 ) {
						if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
							goto ctr60;
						}
					} else if ( ( (*( p))) >= 35 ) {
						goto ctr60;
					}
				} else if ( ( (*( p))) > 46 ) {
					if ( ( (*( p))) < 65 ) {
						if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
							goto ctr60;
						}
					} else if ( ( (*( p))) > 90 ) {
						if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto ctr60;
						}
					} else {
						goto ctr60;
					}
				} else {
					goto ctr60;
				}
				{
					goto st25;
				}
				st_out:
				_test_eof2: _fsm_cs = 2; goto _test_eof; 
				_test_eof3: _fsm_cs = 3; goto _test_eof; 
				_test_eof4: _fsm_cs = 4; goto _test_eof; 
				_test_eof5: _fsm_cs = 5; goto _test_eof; 
				_test_eof6: _fsm_cs = 6; goto _test_eof; 
				_test_eof7: _fsm_cs = 7; goto _test_eof; 
				_test_eof8: _fsm_cs = 8; goto _test_eof; 
				_test_eof9: _fsm_cs = 9; goto _test_eof; 
				_test_eof10: _fsm_cs = 10; goto _test_eof; 
				_test_eof11: _fsm_cs = 11; goto _test_eof; 
				_test_eof12: _fsm_cs = 12; goto _test_eof; 
				_test_eof13: _fsm_cs = 13; goto _test_eof; 
				_test_eof14: _fsm_cs = 14; goto _test_eof; 
				_test_eof15: _fsm_cs = 15; goto _test_eof; 
				_test_eof16: _fsm_cs = 16; goto _test_eof; 
				_test_eof17: _fsm_cs = 17; goto _test_eof; 
				_test_eof34: _fsm_cs = 34; goto _test_eof; 
				_test_eof18: _fsm_cs = 18; goto _test_eof; 
				_test_eof19: _fsm_cs = 19; goto _test_eof; 
				_test_eof20: _fsm_cs = 20; goto _test_eof; 
				_test_eof21: _fsm_cs = 21; goto _test_eof; 
				_test_eof22: _fsm_cs = 22; goto _test_eof; 
				_test_eof23: _fsm_cs = 23; goto _test_eof; 
				_test_eof24: _fsm_cs = 24; goto _test_eof; 
				_test_eof25: _fsm_cs = 25; goto _test_eof; 
				_test_eof26: _fsm_cs = 26; goto _test_eof; 
				_test_eof27: _fsm_cs = 27; goto _test_eof; 
				_test_eof28: _fsm_cs = 28; goto _test_eof; 
				_test_eof29: _fsm_cs = 29; goto _test_eof; 
				_test_eof30: _fsm_cs = 30; goto _test_eof; 
				_test_eof31: _fsm_cs = 31; goto _test_eof; 
				_test_eof32: _fsm_cs = 32; goto _test_eof; 
				_test_eof33: _fsm_cs = 33; goto _test_eof; 
				
				_test_eof: {}
				_out: {}
			}
			
			#line 132 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/request_parser.rl"
			
			#ifdef __clang__
			#pragma clang diagnostic pop
			#endif
			if (!done) {
				p = nullptr;
			} else {
				_state = state::done;
			}
			return p;
		}
		auto get_parsed_request() {
			return std::move(_req);
		}
		bool eof() const {
			return _state == state::eof;
		}
	};
	
}
